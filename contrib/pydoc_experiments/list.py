import sys
import os
from os import listdir
from os.path import isfile, isdir, basename
from subprocess import call

if len(sys.argv)<2:
    sys.exit('Usage: %s <path>' % sys.argv[0])

path = sys.argv[1]

for dirname, dirs, files in os.walk(path):
	for f in sorted(files):
		p = dirname + '/' + f
		if f.endswith('.nit'):
			print p
			call(['nitc', p, '--no-cc', '-I', 'py_builtins', '-I', path, '-I', dirname])
