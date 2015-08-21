# Generic output formatting.
# Formatter objects transform an abstract flow of formatting events into
# specific output events on writer objects. Formatters manage several stack
# structures to allow various properties of a writer object to be changed and
# restored; writers need not be able to handle relative changes nor any sort
# of ``change back'' operation. Specific writer properties which may be
# controlled via formatter objects are horizontal alignment, font, and left
# margin indentations. A mechanism is provided which supports providing
# arbitrary, non-exclusive style settings to a writer as well. Additional
# interfaces facilitate formatting events which are not reversible, such as
# paragraph separation.
# Writer objects encapsulate device interfaces. Abstract devices, such as
# file formats, are supported as well as physical devices. The provided
# implementations all work with abstract devices. The interface makes
# available mechanisms for setting the properties which formatter objects
# manage and inserting data into the output.
module formatter

import sys
import builtins

# A formatter which does nothing.
# If the writer parameter is omitted, a NullWriter instance is created.
# No methods of the writer are called by NullFormatter instances.
# Implementations should inherit from this class if implementing a writer
# interface but don't need to inherit any implementation.
class NullFormatter
    
    fun push_alignment(align: Object) is abstract
    
    fun add_literal_data(data: Object) is abstract
    
    fun pop_alignment is abstract
    
    fun add_line_break is abstract
    
    fun pop_style(n: Object) is abstract
    
    fun pop_margin is abstract
    
    fun end_paragraph(blankline: Object) is abstract
    
    fun assert_line_data(flag: Object) is abstract
    
    fun push_margin(margin: Object) is abstract
    
    fun add_hor_rule is abstract
    
    init do end
    
    fun add_flowing_data(data: Object) is abstract
    
    fun set_spacing(spacing: Object) is abstract
    
    fun add_label_data(counter, blankline, format: Object) is abstract
    
    fun push_style is abstract
    
    fun push_font(x: Object) is abstract
    
    fun flush_softspace is abstract
    
    fun pop_font is abstract
    
end

# Minimal writer interface to use in testing & inheritance.
# A writer which only provides the interface definition; no actions are
# taken on any methods.  This should be the base class for all writers
# which do not need to inherit any implementation methods.
class NullWriter
    
    fun new_spacing(spacing: Object) is abstract
    
    fun send_literal_data(data: Object) is abstract
    
    fun new_font(font: Object) is abstract
    
    fun send_flowing_data(data: Object) is abstract
    
    fun new_alignment(align: Object) is abstract
    
    fun send_line_break is abstract
    
    fun new_margin(margin, level: Object) is abstract
    
    init do end
    
    fun send_label_data(data: Object) is abstract
    
    fun flush is abstract
    
    fun send_paragraph(blankline: Object) is abstract
    
    fun send_hor_rule is abstract
    
    fun new_styles(styles: Object) is abstract
    
end

# A writer which can be used in debugging formatters, but not much else.
# Each method simply announces itself by printing its name and
# arguments on standard output.
class AbstractWriter
    super NullWriter
    
    redef fun new_spacing(spacing) is abstract
    
    redef fun send_literal_data(data) is abstract
    
    redef fun new_font(font) is abstract
    
    redef fun send_flowing_data(data) is abstract
    
    redef fun new_alignment(align) is abstract
    
    redef fun send_line_break is abstract
    
    redef fun new_margin(margin, level) is abstract
    
    redef fun send_label_data(data) is abstract
    
    redef fun send_paragraph(blankline) is abstract
    
    redef fun send_hor_rule is abstract
    
    redef fun new_styles(styles) is abstract
    
end

redef class Sys
    
end

# The standard formatter.
# This implementation has demonstrated wide applicability to many writers,
# and may be used directly in most circumstances.  It has been used to
# implement a full-featured World Wide Web browser.
class AbstractFormatter
    
    fun add_literal_data(data: Object) is abstract
    
    fun push_alignment(align: Object) is abstract
    
    fun pop_alignment is abstract
    
    fun add_line_break is abstract
    
    fun pop_style(n: Object) is abstract
    
    fun pop_margin is abstract
    
    fun end_paragraph(blankline: Object) is abstract
    
    fun assert_line_data(flag: Object) is abstract
    
    fun push_margin(margin: Object) is abstract
    
    fun format_roman(case, counter: Object) is abstract
    
    fun add_hor_rule is abstract
    
    init do end
    
    fun add_flowing_data(data: Object) is abstract
    
    fun format_counter(counter, format: Object) is abstract
    
    fun format_letter(case, counter: Object) is abstract
    
    fun set_spacing(spacing: Object) is abstract
    
    fun add_label_data(counter, blankline, format: Object) is abstract
    
    fun push_style is abstract
    
    fun push_font(font: Object) is abstract
    
    fun flush_softspace is abstract
    
    fun pop_font is abstract
    
end

# Simple writer class which writes output on the file object passed in
# as the file parameter or, if file is omitted, on standard output.  The
# output is simply word-wrapped to the number of columns specified by
# the maxcol parameter.  This class is suitable for reflowing a sequence
# of paragraphs.
class DumbWriter
    super NullWriter
    
    fun reset is abstract
    
    redef fun send_literal_data(data) is abstract
    
    redef fun send_flowing_data(data) is abstract
    
    redef fun send_line_break is abstract
    
    init do end
    
    redef fun send_paragraph(blankline) is abstract
    
    redef fun send_hor_rule is abstract
    
end

