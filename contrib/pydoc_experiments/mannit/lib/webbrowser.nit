# Interfaces for launching and remotely controlling Web browsers.
module webbrowser

import stat
import subprocess
import sys
import shlex
import time
import os
import builtins

# Controller for the KDE File Manager (kfm, or Konqueror).
# See the output of ``kfmclient --commands``
# for more information on the Konqueror remote-control interface.
class Konqueror
    super BaseBrowser
    
    redef fun open(url, py_new, autoraise) is abstract
    
end

# Class for all browsers started with a command
# and without remote functionality.
class GenericBrowser
    super BaseBrowser
    
    init do end
    
    redef fun open(url, py_new, autoraise) is abstract
    
end

# Class for all browsers which are to be started in the
# background.
class BackgroundBrowser
    super GenericBrowser
    
    redef fun open(url, py_new, autoraise) is abstract
    
end

# Launcher class for Google Chrome browser.
class Chrome
    super UnixBrowser
    
end

# Parent class for all Unix browsers with remote functionality.
class UnixBrowser
    super BaseBrowser
    
    private fun private_invoke(autoraise, args, remote: Object) is abstract
    
    redef fun open(url, py_new, autoraise) is abstract
    
end

# Launcher class for Mozilla/Netscape browsers.
class Mozilla
    super UnixBrowser
    
end

redef class Sys
    
end

# Launcher class for Opera browser.
class Opera
    super UnixBrowser
    
end

# Launcher class for Elinks browsers.
class Elinks
    super UnixBrowser
    
end

redef class Error
    
end

# Launcher class for Galeon/Epiphany browsers.
class Galeon
    super UnixBrowser
    
end

class Grail
    super BaseBrowser
    
    private fun private_remote(action: Object) is abstract
    
    redef fun open(url, py_new, autoraise) is abstract
    
    private fun private_find_grail_rc is abstract
    
end

# Parent class for all browsers. Do not use directly.
class BaseBrowser
    
    init do end
    
    fun open_new(url: Object) is abstract
    
    fun open(url, py_new, autoraise: Object) is abstract
    
    fun open_new_tab(url: Object) is abstract
    
end

