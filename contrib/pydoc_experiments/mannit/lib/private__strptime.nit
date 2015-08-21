# Strptime-related classes and functions.
# CLASSES:
# LocaleTime -- Discovers and stores locale-specific time information
# TimeRE -- Creates regexes for pattern matching a string of text containing
# time information
# FUNCTIONS:
# _getlang -- Figure out what language is being used for the locale
# strptime -- Calculates the time struct represented by the passed-in string
module private__strptime

import locale
import calendar
import time
import builtins

redef class Sys
    
end

# date(year, month, day) --> date object
class Date
    
end

# Handle conversion from format directives to regexes.
class TimeRE
    super Dict
    
    # Return a compiled re object for the format string.
    fun compile(format: Object) is abstract
    
    # Return regex pattern for the format string.
    # Need to make sure that any characters that might be interpreted as
    # regex syntax are escaped.
    fun pattern(format: Object) is abstract
    
    # Convert a list to a regex string for matching a directive.
    # Want possible matching values to be from longest to shortest.  This
    # prevents the possibility of a match occurring for a value that also
    # a substring of a larger value that should have matched (e.g., 'abc'
    # matching when 'abcdef' should have been the match).
    fun seqtore(to_convert, directive: Object) is abstract
    
    # Create keys/values.
    # Order of execution is important for dependency reasons.
    init do end
    
end

# Stores and handles locale-specific information related to time.
# ATTRIBUTES:
# f_weekday -- full weekday names (7-item list)
# a_weekday -- abbreviated weekday names (7-item list)
# f_month -- full month names (13-item list; dummy value in [0], which
# is added by code)
# a_month -- abbreviated month names (13-item list, dummy value in
# [0], which is added by code)
# am_pm -- AM/PM representation (2-item list)
# LC_date_time -- format string for date/time representation (string)
# LC_date -- format string for date representation (string)
# LC_time -- format string for time representation (string)
# timezone -- daylight- and non-daylight-savings timezone representation
# (2-item list of sets)
# lang -- Language used by instance (2-item tuple)
class LocaleTime
    
    fun calc_timezone is abstract
    
    fun calc_weekday is abstract
    
    fun calc_month is abstract
    
    # Set all attributes.
    # Order of methods called matters for dependency reasons.
    # The locale language is set at the offset and then checked again before
    # exiting.  This is to make sure that the attributes were not set with a
    # mix of information from more than one locale.  This would most likely
    # happen when using threads where one thread calls a locale-dependent
    # function while another thread changes the locale while the function in
    # the other thread is still running.  Proper coding would call for
    # locks to prevent changing the locale while locale-dependent code is
    # running.  The check here is done in case someone does not think about
    # doing this.
    # Only other possible issue is if someone changed the timezone and did
    # not call tz.tzset .  That is an issue for the programmer, though,
    # since changing the timezone is worthless without that call.
    init do end
    
    fun pad(front, seq: Object) is abstract
    
    fun calc_am_pm is abstract
    
    fun calc_date_time is abstract
    
end

