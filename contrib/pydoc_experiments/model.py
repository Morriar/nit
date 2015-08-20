#!/usr/bin/env python

""" Translate python API to nit. """

import inspect, types
import os, sys
import imp
import importlib

from os import listdir, mkdir
from os.path import isfile, isdir, basename

from StringIO import StringIO

from modulefinder import ModuleFinder

# utils

INDENT = 0

NIT_KWS = [
    'true', 'false', 'type', 'package', 'module', 'new', 'label', 'and',
    'abort', 'or', 'end', 'loop', 'in', 'self', 'isset'
]

BUILTIN = ['gettext', 'datetime', 'base64', 'socket', 'main']

BUILTIN_CLASSES = [
    "Sys", "Object", "Tuple", "Dict", "Set", "List", 'Random',
    'BaseError', 'Exception', 'Error', 'PyError', 'ValueError', 'IOError', 'DBError',
    'Type', 'Module', 'Class', 'Property', 'Instancemethod', 'Local', 'Profiler']

def wi(out, *args):
    """ Function to print lines indented according to level """

    if INDENT: out.write(' '*INDENT)
    for arg in args: out.write(arg)
    out.write('\n')

def indent():
    """ Increase indentation """

    global INDENT
    INDENT += 4

def dedent():
    """ Decrease indentation """

    global INDENT
    INDENT -= 4

# Python model

class PyModel:
    """ A container for a set of PyModule """

    # Modules contained by this model associated to their names
    modules = dict()

    def check_importation_loops(self):
        for mod1 in self.modules.values():
            for mod2 in self.modules.values():
                if mod1 == mod2: continue
                if mod2 in mod1.all_imports() and mod1 in mod2.all_imports():
                    print "loop between %s and %s" % (mod1, mod2)
                    path = self._show_path(mod1, mod2)
                    print '[',
                    for mod in path: print ', ', mod.nit_name,
                    print ']'

    def _show_path(self, mod1, mod2, path=None):
        if path == None:
            path = list()
        # if mod1 in path: return path
        path.append(mod1)
        for mod in mod1.imports.values():
            if mod in path: continue
            if mod == mod2:
                path.append(mod)
                return path
            if mod2 in mod.all_imports():
                res = self._show_path(mod, mod2, path)
                if mod2 in res: return res

        return path

class PyEntity(object):
    """ A Python entity that have a name and a doc string """

    def nit_doc(self, out):
        """ Translate a python DocString to a nit MDoc """

        if not self.doc or not isinstance(self.doc, basestring): return
        lines = self.doc.split('\n')
        i = 0
        for line in lines:
            if i == 0 or i == len(lines - 1):
                line = line.strip()
                if not line: continue
            wi(out, '# %s' % line.strip())

    def _nit_name(self):
        """ Translate a python name to a nit valid one """
        name = self.name
        if name.startswith("__"): name = name[2:]
        if name.endswith("__"): name = name[0:-2]
        if name.startswith("_"): name = "private" + name
        if name.startswith("<"): name = name[1:]
        if name.endswith(">"): name = name[0:-1]
        name = name.lower()
        name = name.replace('-', '_')
        if name in NIT_KWS: return 'py_' + name
        if name in BUILTIN: return 'py_' + name
        return name

class PyPackage(PyEntity):
    """ A Python package (dir containing modules and other packages """

    def __init__(self, model, path, parent=None):
        self.path = path
        self.model = model
        self.name = basename(path)
        self.nit_name = self._nit_name()
        self.parent = parent
        self.subpackages = self._subpackages()
        self.submodules = self._submodules()

    def _subpackages(self):
        path = self.path
        packages = dict()
	for d in sorted(listdir(path)):
            if d == "test" or d == "tests": continue
            if d.startswith("plat-"): continue
            p = path + "/" + d
            if not isdir(p): continue
            pack = PyPackage(model, p, self)
            packages[pack.name] = pack
        return packages

    def _submodules(self):
	modules = dict()

        print "load modules for %s" % self.nit_name

        path = self.path
	for f in sorted(listdir(path)):
            p = path + "/" + f
            if not isfile(p): continue
            name, ext = os.path.splitext(p)
            if ext != '.py': continue
            name = basename(name)
            if name == "__init__": continue
            if name == "__main__": continue
            name = self.qual_name() + '.' + name
            mod = PyModule(model, name)
            modules[mod.name] = mod
        return modules

    def to_nit(self, out_dir):
        pack_outdir = out_dir + '/' + self.nit_name
        if not isdir(pack_outdir):
            mkdir(pack_outdir)
        for name, pack in sorted(self.subpackages.iteritems()):
            pack.to_nit(pack_outdir)
        for name, mod in sorted(self.submodules.iteritems()):
            INDENT = 0
            mod.load_imports()
            nit = mod.to_nit()
            f = open(pack_outdir + '/' + mod.nit_name + '.nit', 'w')
            f.write(nit.getvalue())
            f.close()
            nit.close()
        if not self.has_mainmodule() and self.parent != None:
            f = open(pack_outdir + '/' + self.nit_name + '.nit', 'w')
            f.write("module %s # autogenerated\n\n" % self.nit_name)
            f.write("import builtins\n")
            for pkg in self.subpackages.values():
                f.write("import %s\n" % pkg.nit_name)
            for mod in self.submodules.values():
                f.write("import %s\n" % mod.nit_name)
            f.close()

    def has_mainmodule(self):
        for name in self.submodules:
            if name == self.name: return True
        return False

    def qual_name(self):
        if self.parent == None:
            return self.name
        if self.parent.parent == None:
            return self.name
        return self.parent.qual_name() + "." + self.name

    def __str__(self):
        return "<package:%s>" % nit_name

class PyModule(PyEntity):
    """ A Python module (file.py) extracted from python """

    def __init__(self, model, name):
        """ Inspect `module` object to build self """

        self.model = model
        # self.path = path
        self.imports = dict()
        self.classes = dict()
        self.name = name
        self.doc = ""
        self.nit_name = self._nit_name()

        # if not name:
            # sys.path.append(path)
            # name = basename(path).replace('.py','')

        name = 'encodings.aliases'
        # path = './Python-2.7.10/Lib/encodings/aliases.py'
        print path
        # print imp.find_module('aliases.py', path)
        try:
            module = imp.load_source(name, path)
            # module = __import__(name)
            # module = importlib.import_module(name, 'Lib')
            print module
        except ImportError:
            print "Warning: Can't load module %s" % name
            return

        module = __import__(name)
        self.name = module.__name__
        self.doc = module.__doc__
        self.obj = module

        sys = PyClass(self, None, 'Sys')
        self.classes[sys.nit_name] = sys

        for name in dir(module):
            obj = getattr(module, name)
            if inspect.isclass(obj):
                klass = PyClass(self, obj)
                self.classes[klass.nit_name] = klass
            if inspect.isfunction(obj):
                fun = PyFunction(obj, sys)

    def load_imports(self):
        """ Load module imports """

        if self.name in self.model.modules.keys(): return
        self.model.modules[self.name] = self

        # print "load imports for %s" % self.name
        if not hasattr(self, 'obj'): return

        for import_name, mod in inspect.getmembers(self.obj, inspect.ismodule):
            name = mod.__name__
            if name == self.name: continue
            if name.startswith('_'): continue
            # if self.py_package.parent != None:
                # name = self.py_package.qual_name() + '.' + name
            # print name
            if name in model.modules:
                self.imports[name] = model.modules[name]
                continue
            mmod = PyModule(model, name)
            model.modules[name] = mmod
            if not name in mmod.imports.keys():
                self.imports[name] = mmod
            mmod.load_imports()

    def to_nit(self):
        """ Describe the module object passed as argument
        including its classes and functions """

        print "Process %s" % self.name

        out = StringIO()

        self.nit_doc(out)
        wi(out, 'module %s\n' % self.nit_name)

        # imports
        nit_imports = set()
        for val in self.imports.values():
            wi(out, 'import %s' % (val.nit_name))
        wi(out, 'import builtins')
        wi(out, '')

        # for val in self.classes.values():
        #     val.to_nit(out)
        #     wi(out, '')

        return out

    def has_import(self, mod):
        """ Does self imports directly `mod`? """

        if mod.nit_name in self.imports.keys(): return True
        return False


    def has_class(self, cls):
        """ Is there a class declared with `name` in self or its ancestors? """

        if self.has_class_definition(cls): return True
        for mod in self.imports.values():
            if mod.has_class(cls): return True
        return False

    def has_class_definition(self, cls):
        """ Does `self` contains a definition of the class `cls`? """
        return cls.nit_name in self.classes.keys()

    def class_definition(self, cls):
        """ Get the definition of the class `cls` in `self` or `None` """
        if not self.has_class_definition(cls): return None
        return self.classes[cls.nit_name]

    def all_imports(self):
        """ Return all direct and transitive imports of `self` """
        todos = set()
        done = set()
        for mod in self.imports.values(): todos.add(mod)
        while len(todos) > 0:
            mod = todos.pop()
            if mod in done: continue
            done.add(mod)
            for modd in mod.imports.values(): todos.add(modd)

        return done

    def _nit_name(self):
        name = self.name
        name = name.split('.')[-1]
        if name.startswith("_"): name = "private_" + name
        name = name.lower()
        name = name.replace('-', '_')
        if name in NIT_KWS: return 'py_' + name
        if name in BUILTIN: return 'py_' + name
        return name

    def __str__(self):
        return "<module:%s>" % self.nit_name

class PyClass(PyEntity):
    """ A Python class extracted from python """

    def __init__(self, py_module, klass=None, builtin_name=None):
        """ Inspect `klass` object to build self """

        self.py_module = py_module
        self.bases = dict()
        self.methods = dict()
        self.doc = ""

        if not klass:
            self.name = builtin_name
            self.nit_name = self._nit_name()
            return

        self.name = klass.__name__
        self.nit_name = self._nit_name()
        self.doc = klass.__doc__

        for val in klass.__bases__:
            sklass = PyClass(py_module, val)
            self.bases[sklass.nit_name] = sklass

        for name in klass.__dict__:
            if name == "__abstractmethods__": continue
            obj = getattr(klass, name)
            if inspect.ismethod(obj):
                meth = PyFunction(obj, self)
                self.methods[meth.nit_name] = meth

    def _nit_name(self):
        """ Translate a python class name into a valid nit class name """
        name = self.name
        if name.startswith("_"): name = name[1:]
        name = name[0].upper() + name[1:]
        return name

    def to_nit(self, out):
        """ Describe the class object passed as argument,
        including its methods """

        vis = ''
        if self.is_intro() and self.is_private(): vis = 'private '
        redef = ''
        if not self.is_intro(): redef = 'redef '

        self.nit_doc(out)
        wi(out, '%s%sclass %s' % (redef, vis, self.nit_name))
        indent()

        if not redef: # TODO
            for base in self.bases.values():
                if base.nit_name == "Object": continue
                if base.nit_name == self.nit_name: continue
                wi(out, 'super %s' % base.nit_name)

        wi(out, '')

        for val in self.methods.values():
            val.to_nit(out)
            wi(out, '')

        dedent()
        wi(out, 'end')

    def has_method(self, meth):
        """ Is there a method called `meth.nit_name` reachable by self? """

        if self.has_method_definition(meth): return True
        for base in self.bases.values():
            if base.has_meth(meth): return True
        return False

    def has_method_definition(self, meth):
        """ Does `self` contains a definition of the method `meth`? """
        return meth.nit_name in self.methods.keys()

    def method_definition(self, meth):
        """ Get the definition of the method `meth` in `self` or `None` """
        if not self.has_method_definition(meth): return None
        return self.methods[meth.nit_name]

    def is_private(self):
        return not self.name.startswith('__') and self.name.startswith('_')

    def next_definition(self):
        """ Looks recursively in `self.py_module.imports` if a definitiion of `self` exists """

        # print "from: %s" % self.py_module
        # print self.py_module.imports.keys()
        todos = set()
        # look in direct imports
        for mod in self.py_module.imports.values():
            if mod.nit_name == self.py_module.nit_name: continue
            # print " direct %s" % mod
            if mod.has_class_definition(self): return mod.class_definition(self)
            todos = todos.union(mod.imports.values())
        # look in transitive imports
        for mod in todos:
            # print " undirect: %s" % mod
            if mod.has_class_definition(self): return mod.class_definition(self)
        return None

    def has_next_definition(self):
        return self.next_definition() != None

    def is_intro(self):
        return not self.nit_name in BUILTIN_CLASSES and not self.has_next_definition()

    def intro(self):
        if hasattr(self, 'intro_cache'): return self.intro_cache
        intro = self
        while intro.has_next_definition():
            intro = intro.next_definition()
        self.intro_cache = intro
        return intro

    def __str__(self):
         return "<class:%s::%s>" % (self.py_module.nit_name, self.nit_name)

class PyFunction(PyEntity):
    """ A Python function extracted from python"""

    def __init__(self, func, py_class=None):
        """ Describe the function object passed as argument.
        If this is a method object, the second argument will
        be passed as True """
        # TODO differenciate function and methods
        # TODO builtins
        # TODO varargs

        self.name = func.__name__
        self.doc = func.__doc__
        self.py_class = py_class
        self.params = dict()
        self.nit_name = self._nit_name()

        try:
            arginfo = inspect.getargspec(func)
        except TypeError:
            return
        args = arginfo[0]
        if args:
            for arg in args:
                self.params[arg] = arg

    def nit_param_name(self, name):
        """ Translate a python parameter name into a valid nit one """
        if name.startswith("__"): name = name[2:]
        if name.endswith("__"): name = name[0:-2]
        if name.startswith("_"): name = name[1:]
        name = name.lower()
        if name in NIT_KWS: return 'py_' + name
        return name

    def to_nit(self, out):
        """ Describe the function object passed as argument.
        If this is a method object, the second argument will
        be passed as True """

        self.nit_doc(out)

        if self.nit_name == "init":
            wi(out, 'init do end')
            return

        nit_params = set()
        for param in self.intro().params:
            if param == "self": continue
            nit_params.add(self.nit_param_name(param))

        sign = ''
        if self.is_intro():
            if self.is_private(): sign += 'private '
            sign += 'fun '
            sign += self.nit_name
            if nit_params: sign += '(' + ', '.join(nit_params) + ': Object)'
        else:
            sign += 'redef fun '
            sign += self.nit_name
            if nit_params: sign += '(' + ', '.join(nit_params) + ')'

        wi(out, '%s is abstract' % sign)

    def next_definition(self):
        """ Looks recursively in `self.py_classes.bases` if a definitiion of `self` exists """

        # print "next def of %s" % self

        todos = set()
        # look in other class definitions
        cls = self.py_class
        while cls.has_next_definition():
            cls = cls.next_definition()
            # print "class: %s" % cls
            if cls.has_method_definition(self): return cls.method_definition(self)
        # look in direct parents
        for base in self.py_class.bases.values():
            if base.has_method_definition(self): return base.method_definition(self)
            todos = todos.union(base.bases.values())
        # look in transitive ancestors
        for base in todos:
            if base.has_method_definition(self): return base.method_definition(self)
        return None

    def has_next_definition(self):
        res = self.next_definition()
        # print "res: %s" % res
        return res != None

    def is_intro(self):
        return not self.has_next_definition()

    def intro(self):
        if hasattr(self, 'intro_cache'):
            print "from cache"
            return self.intro_cache
        # print "looking for intro of %s" % self
        intro = self
        while intro.has_next_definition():
            intro = intro.next_definition()
        self.intro_cache = intro
        return intro

    def is_private(self):
        return not self.name.startswith('__') and self.name.startswith('_')

    def __str__(self):
        return "<function:%s::%s::%s()>" % (self.py_class.py_module.nit_name, self.py_class.nit_name, self.nit_name)

if __name__ == "__main__":
    import sys
    from os import path

    if len(sys.argv)<2:
        sys.exit('Usage: %s <py_path> <nit_path>' % sys.argv[0])

    model = PyModel()

    if len(sys.argv)==2:
        py_file = sys.argv[1]
        name = py_file.rstrip('.py')
        name = basename(name)
        mod = PyModule(model, name)
        mod.load_imports()
        model.check_importation_loops()
        nit = mod.to_nit()
        print nit.getvalue()
        nit.close()

    else:
        py_path = sys.argv[1].rstrip("/")
        nit_path = sys.argv[2].rstrip("/")

        root = PyPackage(model, py_path)
        root.to_nit(nit_path)
