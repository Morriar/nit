# Utilities to get a password and/or the current user name.
# getpass(prompt[, stream]) - Prompt for a password, with echo turned off.
# getuser() - Get the user name from the environment or password database.
# GetPassWarning - This UserWarning is issued when getpass() cannot prevent
# echoing of the password contents while reading.
# On Windows, the msvcrt module will be used.
# On the Mac EasyDialogs.AskPassword is used, if available.
module getpass

import sys
import os
import termios
import warnings
import builtins

redef class Sys
    
end

class GetPassWarning
    super UserWarning
    
end

