import sys, os
from os import listdir, mkdir
from os.path import isfile, basename

if len(sys.argv)<3:
	sys.exit('Usage: %s <py_path> <nit_path>' % sys.argv[0])

py_path = sys.argv[1]
nit_path = sys.argv[2]

for d in sorted(listdir(py_path)):
	p = py_path + "/" + d
	if not isfile(p): continue
	name, ext = os.path.splitext(p)
	if ext != '.c': continue
	name = basename(name)
	if name.startswith('_'): continue
	if name.endswith('module'): name = name[0:-6]
	f = open(nit_path + '/' + name + '.nit', 'w')
	f.write("module %s\n" % name)
	f.write("import end\n")
	f.close
	print name

