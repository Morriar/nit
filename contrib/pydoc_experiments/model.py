#!/usr/bin/env python

# Translate python API to nit.

import inspect, types
import os, sys

INDENT=0

def wi(*args):
    """ Function to print lines indented according to level """

    if INDENT: print ' '*INDENT,
    for arg in args: print arg,
    print

def indent():
    """ Increase indentation """

    global INDENT
    INDENT += 4

def dedent():
    """ Decrease indentation """

    global INDENT
    INDENT -= 4

def describe_builtin(obj):
    """ Describe a builtin function """

    name = nit_method_name(obj.__name__)
    sign = ''
# Built-in functions cannot be inspected by
# inspect.getargspec. We have to try and parse
# the __doc__ attribute of the function.
    docstr = obj.__doc__
    args = []

    if docstr:
        items = docstr.split('\n')
        if items:
            func_descr = items[0]
            s = func_descr.replace(obj.__name__,'')
            idx1 = s.find('(')
            idx2 = s.find(')',idx1)
            if idx1 != -1 and idx2 != -1 and (idx2>idx1+1):
                args.append(s[idx1+1:idx2])

    for arg in args:
        sign += nit_param_name(arg)
        if arg != args[-1]: sign += ', '

    nit_comment(obj)
    wi('fun %s%s is abstract' % (name, sign))

    print

def describe_func(obj):
    """ Describe the function object passed as argument.
    If this is a method object, the second argument will
    be passed as True """

    try:
        arginfo = inspect.getargspec(obj)
    except TypeError:
        print
        return

    name = nit_method_name(obj.__name__)
    sign = ''
    args = arginfo[0]
    argsvar = arginfo[1]

    if args:
        sign = '('
        if args[0] == 'self':
            args.pop(0)

        for arg in args:
            sign += nit_param_name(arg)
            if arg != args[-1]: sign += ', '

        if len(args) > 0:
            sign += ': Object'

        sign += ')'

# if arginfo[1]:
#     wi('\t-Positional Args Param: %s' % arginfo[1])
# if arginfo[2]:
#     wi('\t-Keyword Args Param: %s' % arginfo[2])

    nit_comment(obj)
    if name == "init":
        wi('init%s do end' % sign)
    else:
        wi('fun %s%s is abstract' % (name, sign))

    print

def describe_klass(obj):
    """ Describe the class object passed as argument,
    including its methods """

    name = nit_class_name(obj.__name__)

    nit_comment(obj)
    wi('class %s' % name)

    indent()

    bases = obj.__bases__
    for base in bases:
        base = nit_class_name(base.__name__)
        if base != "Object":
            wi('super %s' % base)
    if len(bases) > 0: wi('')

    count = 0

    for name in obj.__dict__:
        item = getattr(obj, name)
        if inspect.ismethod(item):
            count += 1
            describe_func(item)

    dedent()
    wi('end')

    print

def describe(module):
    """ Describe the module object passed as argument
    including its classes and functions """

    nit_comment(module)
    wi('module %s\n' % module.__name__)

    # imports
    # for name, val in globals().items():
        # if isinstance(val, types.ModuleType):
            # print "import %s" % nit_method_name(val.__name__)
    # print ""

    count = 0
    classes = set()

    for name in dir(module):
        obj = getattr(module, name)
        if inspect.isclass(obj):
            if obj.__name__ not in classes:
                count += 1; describe_klass(obj); classes.add(obj.__name__)
        if inspect.ismethod(obj):
            count +=1 ; describe_func(obj)

    for name in dir(module):
        obj = getattr(module, name)
        if inspect.isfunction(obj):
            count +=1 ; describe_func(obj)
        # elif inspect.isbuiltin(obj):
            # count += 1; describe_builtin(obj)

    if count==0:
        wi('# no members')

def nit_comment(obj):
    """ Translate a python DocString to a nit MDoc """

    doc = obj.__doc__
    if doc:
        lines = doc.split('\n')
        if not lines[0]: lines.pop(0)
        if not lines[-1]: lines.pop(len(lines) - 1)
        for line in lines:
            wi('# %s' % line.strip())

def nit_class_name(name):
    """ Translate a python class name into a valid nit class name """
    name = name[0].upper() + name[1:]
    if name == "Error": return "PyError"
    return name

def nit_method_name(name):
    """ Translate a python method name into a valid nit method name """
    if name.startswith("__"): name = name[2:]
    if name.endswith("__"): name = name[0:-2]
    if name.startswith("_"): name = name[1:]
    return name

def nit_param_name(name):
    """ Translate a python parameter name into a valid nit one """
    if name == "type": return "ttype"
    if name == "true": return "ttrue"
    if name == "false": return "ffalse"
    if name.startswith("_"): name = name[1:]
    return name

if __name__ == "__main__":
    import sys
    from os import path

    if len(sys.argv)<2:
        sys.exit('Usage: %s <module>' % sys.argv[0])

    path = sys.argv[1]
    sys.path.append(path)
    name = os.path.basename(path).replace('.py','')
    mod = __import__(name)
    describe(mod)
