#!/usr/bin/env python

""" Translate python API to nit. """

import inspect, types
import os, sys
import imp
import importlib
import warnings

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

# will produce conflicts with nit...
BUILTIN = ['gettext', 'base64', 'socket', 'codecs', 'traceback', 'symbol']

BUILTIN_CLASSES = [
    "Sys", "Object", "Tuple", "Dict", "Set", "List", 'Random',
    'BaseError', 'Exception', 'Error', 'PyError', 'ValueError', 'IOError', 'DBError',
    'Type', 'Module', 'Class', 'Property', 'Instancemethod', 'Local', 'Profiler']

SKIP_MODULES = ['lib-tk', 'test', 'tests', 'idlelib']

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

    def __init__(self, base_path):
        self.base_path = base_path

    # List of packages contained in self associated to their name
    packages = dict()

    # Modules contained by this model associated to their name
    modules = dict()

    def load_package(self, path, parent=None):
        """ Load all packages from base_path recursively """
        root = PyPackage(self, path, parent)

        for d in sorted(listdir(path)):
            p = path + "/" + d
            if not isdir(p): continue
            if d.startswith("plat-"): continue
            if d in SKIP_MODULES: continue
            pack = self.load_package(p, root)

        return root

    def load_module(self, path, package):
        "Load a the module at `path` inside as a submodule of `package`"
        return PyModule(self, path, package)

    def parse_modules(self):
        for mod in self.modules.values():
            mod.parse()

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
        self.parent = parent
        self.nit_name = self._nit_name()
        self.nit_import_name = self.nit_name
        self.subpackages = dict()
        self.submodules = dict()

        print "Load package %s" % self.qual_name()

        model.packages[self.qual_name()] = self
        if parent != None: parent.subpackages[self.name] = self

        # Load source object
        self.obj = self._load_object()

        # Load sub modules
        self._load_submodules()

    def _load_object(self):
        if self.is_root(): return None
        try:
            f, p, d = imp.find_module(self.name, [self.parent.path])
            mod = imp.load_module(self.name, f, p, d)
            return mod
        except Exception as e:
            print "Warning: Can't load package %s at %s" % (self.qual_name(), self.path)
            # print "Cause: %s" % e

    def _load_submodules(self):
        """ Load all modules in `self` """

        path = self.path
	for f in sorted(listdir(path)):
            p = path + "/" + f
            if not isfile(p): continue
            name, ext = os.path.splitext(p)
            if ext != '.py': continue
            name = basename(name)
            if name == "test": continue
            if name.startswith("test_"): continue
            if name == "__init__": continue
            if name == "__main__": continue
            self.model.load_module(p, self)

    def to_nit(self, out_dir):
        # print "Generate API for package %s" % self.qual_name()
        pack_outdir = out_dir + '/' + self.nit_name
        if not isdir(pack_outdir):
            mkdir(pack_outdir)
        for name, pack in sorted(self.subpackages.iteritems()):
            pack.to_nit(pack_outdir)
        for name, mod in sorted(self.submodules.iteritems()):
            INDENT = 0
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

    def is_root(self):
        """ Does self has parent? """
        return self.parent == None

    def has_mainmodule(self):
        """ Does self has a mainmodule? (a module with the same name than self) """
        for name in self.submodules:
            if name == self.name: return True
        return False

    def qual_name(self):
        """ Get the qualified name of self (python.dotted.notation) """
        if self.is_root(): return self.name
        if self.parent.is_root(): return self.name
        return self.parent.qual_name() + "." + self.name

    def __str__(self):
        return "<package:%s>" % self.nit_name

class PyModule(PyEntity):
    """ A Python module (file.py) extracted from python """

    def __init__(self, model, path, py_package):
        """ Inspect `module` object to build self """

        self.model = model
        self.path = path
        self.py_package = py_package
        self.name = self._module_name()
        self.shortname = self.name.split('.')[-1]
        self.nit_name = self._nit_name()
        self.nit_import_name = self._nit_import_name()
        self.classes = dict()
        self.imports = dict()

        # print "Load module %s" % self.name

        model.modules[self.name] = self
        py_package.submodules[self.name] = self

    def _module_name(self):
        """ Extract the full name of the from its `path` """
        name, ext = os.path.splitext(self.path)
        if self.py_package != None and not self.py_package.is_root():
            return "%s.%s" % (self.py_package.qual_name(), basename(name))
        return basename(name)

    def parse(self):
        """ Parse `self` to extract imports and classes """
        self.obj = self._load_object()
        self.doc = self.obj.__doc__
        self.imports = self._load_imports()

        sys = PyClass(self, None, 'Sys')
        self.classes[sys.nit_name] = sys

        for name in dir(self.obj):
            obj = getattr(self.obj, name)
            if inspect.isclass(obj):
                klass = PyClass(self, obj)
                self.classes[klass.nit_name] = klass
            if inspect.isfunction(obj):
                fun = PyFunction(obj, sys)

    def _load_object(self):
        """ Load a module by its `path`. `name` is used as the module key and not for import. """
        name = self.shortname
        path = self.py_package.path
        try:
            with warnings.catch_warnings():
                warnings.simplefilter("ignore")
                f, p, d = imp.find_module(name, [path])
                mod = imp.load_module(self.name, f, p, d)
                f.close()
                return mod
        except Exception as e:
            print "Warning: can't load module %s at %s" % (name, path)
            # print "Cause: %s" % e
            return None

    def _nit_name(self):
        return self._to_nit_name(self.shortname)

    def _nit_import_name(self):
        parts = self.name.split('.')
        qual = list()
        for part in parts:
            qual.append(self._to_nit_name(part))
        return '::'.join(qual)

    def _to_nit_name(self, name):

        # Nitifiy
        if name.startswith("_"): name = "private_" + name
        name = name.lower()
        name = name.replace('-', '_')

        # Avoid conflicts with nit
        if name in NIT_KWS: return 'py_' + name
        if name in BUILTIN: return 'py_' + name

        # Avoid modules with same names
        names = set()
        for p in self.model.modules.values(): names.add(p.shortname)
        tmp = name
        i = 0
        while tmp in names:
            i += 1
            tmp = "%s%d" % (name, i)
        if i > 0: name = tmp

        return name

    def _load_imports(self):
        """ Load module imports """

        imports = dict()

        # print "load imports for %s" % self.name
        if not hasattr(self, 'obj'): return

        pcks = self.model.packages
        mods = self.model.modules
        # print sorted(mods.keys())
        for import_name, mod in inspect.getmembers(self.obj, inspect.ismodule):
            name = mod.__name__
            if name in pcks.keys():
                opck = pcks[name]
                # Avoid dependency loop with parent packages
                path = self.py_package.qual_name().split('.')
                if name in path: continue
                imports[name] = opck
            elif name in mods.keys():
                omod = mods[name]
                # Avoid dependency loop with other modules
                if self in omod.all_imports(): continue
                imports[name] = omod
            else:
                print "Warning: can't get module %s from model" % name
                imports[name] = None
        return imports

    def _name_to_path(self, name):
        """ Try to translate a qualified module name to a valid file path """
        return self.model.base_path + '/' + name.replace('.', '/') + '.py'

    def to_nit(self):
        """ Describe the module object passed as argument
        including its classes and functions """

        # print "Process %s" % self.name

        out = StringIO()

        self.nit_doc(out)
        wi(out, 'module %s\n' % self.nit_name)

        # imports
        nit_imports = set()
        for key, val in self.imports.iteritems():
            if val == None:
                if key.startswith('_'): continue
                name = key.lower()
                name = name.replace('.', '::')
                if name in NIT_KWS: name = 'py_' + name
                if name in BUILTIN: name = 'py_' + name
                wi(out, 'import %s # unknown %s' % (name, key))
                continue
            wi(out, 'import %s # %s' % (val.nit_import_name, val.name))
        wi(out, 'import builtins')
        wi(out, '')

        for val in self.classes.values():
            val.to_nit(out)
            wi(out, '')

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
            if mod == None: continue
            if mod in done: continue
            if isinstance(mod, PyPackage): continue
            done.add(mod)
            for modd in mod.imports.values(): todos.add(modd)

        return done

    def __str__(self):
        if self.py_package != None:
            return "<module:%s.%s>" % (self.py_package.qual_name(), self.nit_name)
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
            if not hasattr(klass, name): continue
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

        # for val in self.methods.values():
        #     val.to_nit(out)
        #     wi(out, '')

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
            if not isinstance(mod, PyModule): continue
            # print " direct %s" % mod
            if mod.has_class_definition(self): return mod.class_definition(self)
            todos = todos.union(mod.imports.values())
        # look in transitive imports
        for mod in todos:
            # print " undirect: %s" % mod
            if not isinstance(mod, PyModule): continue
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

    # f, p, d = imp.find_module("zipfile", ["Python-2.7.10/Lib/"])
    # print imp.load_module("zipfile", f, p, d)

    # f, p, d = imp.find_module("idlelib", ["Python-2.7.10/Lib/"])
    # print imp.load_module("idlelib", f, p, d)
    # f, p, d = imp.find_module("TreeWidget", ["Python-2.7.10/Lib/idlelib"])
    # print f, p, d
    # print imp.load_module("Python-2.7.10/Lib/idlelib", f, p, d)
    # f, p, d = imp.find_module("codecs", ["Python-2.7.10/Lib/"])
    # print imp.load_module("codecs", f, p, d)

    # f, p, d = imp.find_module("md5", ["Python-2.7.10/Lib/"])
    # print f, p, d
    # print imp.load_module("md5", f, p, d)
    # print imp.load_source("md5", "Python-2.7.10/Lib/")

    if len(sys.argv)==2:
        py_file = sys.argv[1]
        py_dir = os.path.dirname(py_file)
        model = PyModel(py_dir)
        mod = PyModule(model, py_file)
        # model.check_importation_loops()
        nit = mod.to_nit()
        print nit.getvalue()
        nit.close()

    else:
        py_path = sys.argv[1].rstrip("/")
        nit_path = sys.argv[2].rstrip("/")

        model = PyModel(py_path)

        root = model.load_package(py_path)
        model.parse_modules()
        # print root.subpackages.keys()

        # for p in sorted(model.packages.keys()):
        #     pck = model.packages[p]
        #     print pck.qual_name(), ': ', pck.obj != None
        #
        # for p in sorted(model.modules.keys()):
        #     pck = model.modules[p]
        #     print pck.name, ': ', pck.obj != None

        root.to_nit(nit_path)
