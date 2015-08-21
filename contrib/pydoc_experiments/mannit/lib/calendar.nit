# Calendar printing functions
# Note when comparing these calendars to the ones printed by cal(1): By
# default, these calendars have Monday as the first day of the week, and
# Sunday as the last (the European convention). Use setfirstweekday() to
# set the first day of the week (0=Monday, 6=Sunday).
module calendar

import builtins

class TimeEncoding
    
    init do end
    
    fun exit is abstract
    
    fun enter is abstract
    
end

# This class can be passed a locale name in the constructor and will return
# month and weekday names in the specified locale. If this locale includes
# an encoding all strings containing month and weekday names will be returned
# as unicode.
class LocaleHTMLCalendar
    super HTMLCalendar
    
    redef fun formatweekday(day) is abstract
    
    init do end
    
    redef fun formatmonthname(withyear, theyear, themonth) is abstract
    
end

private class Localized_month
    
    init do end
    
    fun len is abstract
    
    fun getitem(i: Object) is abstract
    
end

private class Localized_day
    
    init do end
    
    fun len is abstract
    
    fun getitem(i: Object) is abstract
    
end

# Subclass of Calendar that outputs a calendar as a simple plain text
# similar to the UNIX program cal.
class TextCalendar
    super Calendar
    
    # Return a formatted month name.
    fun formatmonthname(width, withyear, theyear, themonth: Object) is abstract
    
    # Return a header for a week.
    fun formatweekheader(width: Object) is abstract
    
    # Return a month's calendar string (multi-line).
    fun formatmonth(themonth, l, w, theyear: Object) is abstract
    
    # Print a month's calendar.
    fun prmonth(themonth, l, w, theyear: Object) is abstract
    
    # Returns a formatted week day name.
    fun formatweekday(width, day: Object) is abstract
    
    # Returns a single week in a string (no newline).
    fun formatweek(width, theweek: Object) is abstract
    
    # Returns a formatted day.
    fun formatday(width, day, weekday: Object) is abstract
    
    # Print a year's calendar.
    fun pryear(c, m, l, w, theyear: Object) is abstract
    
    # Returns a year's calendar as a multi-line string.
    fun formatyear(c, m, l, w, theyear: Object) is abstract
    
    # Print a single week (no newline).
    fun prweek(width, theweek: Object) is abstract
    
end

class IllegalMonthError
    super ValueError
    
    init do end
    
    fun str is abstract
    
end

redef class Sys
    
end

class IllegalWeekdayError
    super ValueError
    
    init do end
    
    fun str is abstract
    
end

# This calendar returns complete HTML pages.
class HTMLCalendar
    super Calendar
    
    # Return a month name as a table row.
    fun formatmonthname(withyear, theyear, themonth: Object) is abstract
    
    # Return a header for a week as a table row.
    fun formatweekheader is abstract
    
    # Return a formatted month as a table.
    fun formatmonth(withyear, theyear, themonth: Object) is abstract
    
    # Return a weekday name as a table header.
    fun formatweekday(day: Object) is abstract
    
    # Return a complete week as a table row.
    fun formatweek(theweek: Object) is abstract
    
    # Return a day as a table cell.
    fun formatday(day, weekday: Object) is abstract
    
    # Return a formatted year as a complete HTML page.
    fun formatyearpage(width, theyear, css, encoding: Object) is abstract
    
    # Return a formatted year as a table of tables.
    fun formatyear(width, theyear: Object) is abstract
    
end

# Base calendar class. This class doesn't do any formatting. It simply
# provides data to subclasses.
class Calendar
    
    # Return an iterator for one month. The iterator will yield datetime.date
    # values and will always iterate through complete weeks, so it will yield
    # dates outside the specified month.
    fun itermonthdates(year, month: Object) is abstract
    
    fun getfirstweekday is abstract
    
    # Return the data for the specified year ready for formatting (similar to
    # yeardatescalendar()). Entries in the week lists are day numbers.
    # Day numbers outside this month are zero.
    fun yeardayscalendar(width, year: Object) is abstract
    
    # Return a matrix representing a month's calendar.
    # Each row represents a week; days outside this month are zero.
    fun monthdayscalendar(year, month: Object) is abstract
    
    # Return the data for the specified year ready for formatting. The return
    # value is a list of month rows. Each month row contains up to width months.
    # Each month contains between 4 and 6 weeks and each week contains 1-7
    # days. Days are datetime.date objects.
    fun yeardatescalendar(width, year: Object) is abstract
    
    # Return a matrix representing a month's calendar.
    # Each row represents a week; week entries are
    # (day number, weekday number) tuples. Day numbers outside this month
    # are zero.
    fun monthdays2calendar(year, month: Object) is abstract
    
    # Return a matrix (list of lists) representing a month's calendar.
    # Each row represents a week; week entries are datetime.date values.
    fun monthdatescalendar(year, month: Object) is abstract
    
    init do end
    
    fun setfirstweekday(firstweekday: Object) is abstract
    
    # Return the data for the specified year ready for formatting (similar to
    # yeardatescalendar()). Entries in the week lists are
    # (day number, weekday number) tuples. Day numbers outside this month are
    # zero.
    fun yeardays2calendar(width, year: Object) is abstract
    
    # Like itermonthdates(), but will yield (day number, weekday number)
    # tuples. For days outside the specified month the day number is 0.
    fun itermonthdays2(year, month: Object) is abstract
    
    # Like itermonthdates(), but will yield day numbers. For days outside
    # the specified month the day number is 0.
    fun itermonthdays(year, month: Object) is abstract
    
    # Return a iterator for one week of weekday numbers starting with the
    # configured first one.
    fun iterweekdays is abstract
    
end

# This class can be passed a locale name in the constructor and will return
# month and weekday names in the specified locale. If this locale includes
# an encoding all strings containing month and weekday names will be returned
# as unicode.
class LocaleTextCalendar
    super TextCalendar
    
    redef fun formatweekday(width, day) is abstract
    
    init do end
    
    redef fun formatmonthname(width, withyear, theyear, themonth) is abstract
    
end

# Inappropriate argument value (of correct type).
redef class ValueError
    
end

