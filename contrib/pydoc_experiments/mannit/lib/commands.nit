# Execute shell commands via os.popen() and return status, output.
# Interface summary:
# import commands
# outtext = commands.getoutput(cmd)
# (exitstatus, outtext) = commands.getstatusoutput(cmd)
# outtext = commands.getstatus(file)  # returns output of "ls -ld file"
# A trailing newline is removed from the output string.
# Encapsulates the basic operation:
# pipe = os.popen('{ ' + cmd + '; } 2>&1', 'r')
# text = pipe.read()
# sts = pipe.close()
# [Note:  it would be nice to add functions to interpret the exit status.]
module commands

import builtins

redef class Sys
    
end

