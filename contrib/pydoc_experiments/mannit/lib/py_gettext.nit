# Internationalization and localization support.
# This module provides internationalization (I18N) and localization (L10N)
# support for your Python programs by providing an interface to the GNU gettext
# message catalog library.
# I18N refers to the operation by which a program is made aware of multiple
# languages.  L10N refers to the adaptation of your program, once
# internationalized, to the local language and cultural habits.
module py_gettext

import struct
import locale
import sys
import re
import copy
import os
import builtins

redef class Sys
    
end

class GNUTranslations
    super NullTranslations
    
    redef fun lngettext(msgid2, msgid1, n) is abstract
    
    redef fun ugettext(message) is abstract
    
    redef fun ngettext(msgid2, msgid1, n) is abstract
    
    # Override this method to support alternative .mo formats.
    redef fun private_parse(fp) is abstract
    
    redef fun lgettext(message) is abstract
    
    redef fun ungettext(msgid2, msgid1, n) is abstract
    
    redef fun py_gettext(message) is abstract
    
end

class NullTranslations
    
    fun info is abstract
    
    fun lngettext(msgid2, msgid1, n: Object) is abstract
    
    fun ungettext(msgid2, msgid1, n: Object) is abstract
    
    fun ugettext(message: Object) is abstract
    
    fun add_fallback(fallback: Object) is abstract
    
    fun charset is abstract
    
    fun set_output_charset(charset: Object) is abstract
    
    fun output_charset is abstract
    
    init do end
    
    private fun private_parse(fp: Object) is abstract
    
    fun lgettext(message: Object) is abstract
    
    fun install(names, unicode: Object) is abstract
    
    fun ngettext(msgid2, msgid1, n: Object) is abstract
    
    fun py_gettext(message: Object) is abstract
    
end

