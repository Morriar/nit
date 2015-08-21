# A powerful, extensible, and easy-to-use option parser.
# By Greg Ward <gward@python.net>
# Originally distributed as Optik.
# For support, use the optik-users@lists.sourceforge.net mailing list
# (http://lists.sourceforge.net/lists/listinfo/optik-users).
# Simple usage example:
# from optparse import OptionParser
# parser = OptionParser()
# parser.add_option("-f", "--file", dest="filename",
# help="write report to FILE", metavar="FILE")
# parser.add_option("-q", "--quiet",
# action="store_false", dest="verbose", default=True,
# help="don't print status messages to stdout")
# (options, args) = parser.parse_args()
module optparse

import sys
import os
import textwrap
import types
import builtins

# Raised if an invalid option value is encountered on the command
# line.
class OptionValueError
    super OptParseError
    
end

# Raised if an ambiguous option is seen on the command line.
class AmbiguousOptionError
    super BadOptionError
    
    init do end
    
    redef fun str is abstract
    
end

# Raised if an Option instance is created with invalid or
# inconsistent arguments.
class OptionError
    super OptParseError
    
    init do end
    
    redef fun str is abstract
    
end

# Instance attributes:
# _short_opts : [string]
# _long_opts : [string]
# action : string
# type : string
# dest : string
# default : any
# nargs : int
# const : any
# choices : [string]
# callback : function
# callback_args : (any*)
# callback_kwargs : { string : any }
# help : string
# metavar : string
class Option
    
    private fun private_check_opt_strings(opts: Object) is abstract
    
    private fun private_check_dest is abstract
    
    private fun private_check_choice is abstract
    
    private fun private_check_const is abstract
    
    private fun private_check_action is abstract
    
    fun process(opt, parser, values, value: Object) is abstract
    
    fun take_action(opt, dest, parser, value, values, action: Object) is abstract
    
    private fun private_set_opt_strings(opts: Object) is abstract
    
    private fun private_check_nargs is abstract
    
    private fun private_check_callback is abstract
    
    private fun private_check_type is abstract
    
    init do end
    
    fun convert_value(opt, value: Object) is abstract
    
    fun get_opt_string is abstract
    
    fun str is abstract
    
    private fun private_repr is abstract
    
    private fun private_set_attrs(attrs: Object) is abstract
    
    fun takes_value is abstract
    
    fun check_value(opt, value: Object) is abstract
    
end

# Raised if an invalid option is seen on the command line.
class BadOptionError
    super OptParseError
    
    init do end
    
    redef fun str is abstract
    
end

# Format help with underlined section headers.
class TitledHelpFormatter
    super HelpFormatter
    
    redef fun format_heading(heading) is abstract
    
    init do end
    
    redef fun format_usage(usage) is abstract
    
end

# Abstract base class.
# Class attributes:
# standard_option_list : [Option]
# list of standard options that will be accepted by all instances
# of this parser class (intended to be overridden by subclasses).
# Instance attributes:
# option_list : [Option]
# the list of Option objects contained by this OptionContainer
# _short_opt : { string : Option }
# dictionary mapping short option strings, eg. "-f" or "-X",
# to the Option instances that implement them.  If an Option
# has multiple short option strings, it will appears in this
# dictionary multiple times. [1]
# _long_opt : { string : Option }
# dictionary mapping long option strings, eg. "--file" or
# "--exclude", to the Option instances that implement them.
# Again, a given Option can occur multiple times in this
# dictionary. [1]
# defaults : { string : any }
# dictionary mapping option destination names to default
# values for each destination [1]
# [1] These mappings are common to (shared by) all components of the
# controlling OptionParser, where they are initially created.
class OptionContainer
    
    fun set_conflict_handler(handler: Object) is abstract
    
    fun get_option(opt_str: Object) is abstract
    
    fun format_help(formatter: Object) is abstract
    
    fun set_description(description: Object) is abstract
    
    fun add_options(option_list: Object) is abstract
    
    fun has_option(opt_str: Object) is abstract
    
    private fun private_check_conflict(option: Object) is abstract
    
    private fun private_create_option_mappings is abstract
    
    private fun private_share_option_mappings(parser: Object) is abstract
    
    fun get_description is abstract
    
    fun format_option_help(formatter: Object) is abstract
    
    init do end
    
    # add_option(Option)
    # add_option(opt_str, ..., kwarg=val, ...)
    fun add_option is abstract
    
    fun format_description(formatter: Object) is abstract
    
    # see OptionParser.destroy().
    fun destroy is abstract
    
    fun remove_option(opt_str: Object) is abstract
    
end

redef class Sys
    
end

# Raised if conflicting options are added to an OptionParser.
class OptionConflictError
    super OptionError
    
end

# Format help with indented section bodies.
class IndentedHelpFormatter
    super HelpFormatter
    
    redef fun format_heading(heading) is abstract
    
    init do end
    
    redef fun format_usage(usage) is abstract
    
end

class Values
    
    private fun private_update(dict, mode: Object) is abstract
    
    fun ensure_value(attr, value: Object) is abstract
    
    # Update the option values from an arbitrary dictionary, but only
    # use keys from dict that already have a corresponding attribute
    # in self.  Any keys in dict without a corresponding attribute
    # are silently ignored.
    private fun private_update_careful(dict: Object) is abstract
    
    init do end
    
    # Update the option values from an arbitrary dictionary,
    # using all keys from the dictionary regardless of whether
    # they have a corresponding attribute in self or not.
    private fun private_update_loose(dict: Object) is abstract
    
    fun str is abstract
    
    private fun private_repr is abstract
    
    fun read_module(modname, mode: Object) is abstract
    
    fun read_file(mode, filename: Object) is abstract
    
    fun cmp(other: Object) is abstract
    
end

# Abstract base class for formatting option help.  OptionParser
# instances should use one of the HelpFormatter subclasses for
# formatting help; by default IndentedHelpFormatter is used.
# Instance attributes:
# parser : OptionParser
# the controlling OptionParser instance
# indent_increment : int
# the number of columns to indent per nesting level
# max_help_position : int
# the maximum starting column for option help text
# help_position : int
# the calculated starting column for option help text;
# initially the same as the maximum
# width : int
# total number of columns for output (pass None to constructor for
# this value to be taken from the $COLUMNS environment variable)
# level : int
# current indentation level
# current_indent : int
# current indentation level (in columns)
# help_width : int
# number of columns available for option help text (calculated)
# default_tag : str
# text to replace with each option's default value, "%default"
# by default.  Set to false value to disable default value expansion.
# option_strings : { Option : str }
# maps Option instances to the snippet of help text explaining
# the syntax of that option, e.g. "-h, --help" or
# "-fFILE, --file=FILE"
# _short_opt_fmt : str
# format string controlling how short options with values are
# printed in help text.  Must be either "%s%s" ("-fFILE") or
# "%s %s" ("-f FILE"), because those are the two syntaxes that
# Optik supports.
# _long_opt_fmt : str
# similar but for long options; must be either "%s %s" ("--file FILE")
# or "%s=%s" ("--file=FILE").
class HelpFormatter
    
    fun dedent is abstract
    
    # Return a comma-separated list of option strings & metavariables.
    fun format_option_strings(option: Object) is abstract
    
    fun format_option(option: Object) is abstract
    
    fun indent is abstract
    
    fun format_epilog(epilog: Object) is abstract
    
    fun set_parser(parser: Object) is abstract
    
    fun format_heading(heading: Object) is abstract
    
    init do end
    
    fun set_long_opt_delimiter(delim: Object) is abstract
    
    fun format_usage(usage: Object) is abstract
    
    # Format a paragraph of free-form text for inclusion in the
    # help output at the current indentation level.
    private fun private_format_text(text: Object) is abstract
    
    fun format_description(description: Object) is abstract
    
    fun expand_default(option: Object) is abstract
    
    fun set_short_opt_delimiter(delim: Object) is abstract
    
    fun store_option_strings(parser: Object) is abstract
    
end

class OptionGroup
    super OptionContainer
    
    # see OptionParser.destroy().
    redef fun destroy is abstract
    
    fun set_title(title: Object) is abstract
    
    init do end
    
    private fun private_create_option_list is abstract
    
    redef fun format_help(formatter) is abstract
    
end

# Class attributes:
# standard_option_list : [Option]
# list of standard options that will be accepted by all instances
# of this parser class (intended to be overridden by subclasses).
# Instance attributes:
# usage : string
# a usage string for your program.  Before it is displayed
# to the user, "%prog" will be expanded to the name of
# your program (self.prog or os.path.basename(sys.argv[0])).
# prog : string
# the name of the current program (to override
# os.path.basename(sys.argv[0])).
# description : string
# A paragraph of text giving a brief overview of your program.
# optparse reformats this paragraph to fit the current terminal
# width and prints it when the user requests help (after usage,
# but before the list of options).
# epilog : string
# paragraph of help text to print after option help
# option_groups : [OptionGroup]
# list of option groups in this parser (option groups are
# irrelevant for parsing the command-line, but very useful
# for generating help)
# allow_interspersed_args : bool = true
# if true, positional arguments may be interspersed with options.
# Assuming -a and -b each take a single argument, the command-line
# -ablah foo bar -bboo baz
# will be interpreted the same as
# -ablah -bboo -- foo bar baz
# If this flag were false, that command line would be interpreted as
# -ablah -- foo bar -bboo baz
# -- ie. we stop processing options as soon as we see the first
# non-option argument.  (This is the tradition followed by
# Python's getopt module, Perl's Getopt::Std, and other argument-
# parsing libraries, but it is generally annoying to users.)
# process_default_values : bool = true
# if true, option default values are processed similarly to option
# values from the command line: that is, they are passed to the
# type-checking function for the option's type (as long as the
# default value is a string).  (This really only matters if you
# have defined custom types; see SF bug #955889.)  Set it to false
# to restore the behaviour of Optik 1.4.1 and earlier.
# rargs : [string]
# the argument list currently being parsed.  Only set when
# parse_args() is active, and continually trimmed down as
# we consume arguments.  Mainly there for the benefit of
# callback options.
# largs : [string]
# the list of leftover arguments that we have skipped while
# parsing options.  If allow_interspersed_args is false, this
# list is always empty.
# values : Values
# the set of option values currently being accumulated.  Only
# set when parse_args() is active.  Also mainly for callbacks.
# Because of the 'rargs', 'largs', and 'values' attributes,
# OptionParser is not thread-safe.  If, for some perverse reason, you
# need to parse command-line arguments simultaneously in different
# threads, use different OptionParser instances.
class OptionParser
    super OptionContainer
    
    fun get_usage is abstract
    
    private fun private_get_args(args: Object) is abstract
    
    # check_values(values : Values, args : [string])
    # -> (values : Values, args : [string])
    # Check that the supplied option values and leftover arguments are
    # valid.  Returns the option values and leftover arguments
    # (possibly adjusted, possibly completely new -- whatever you
    # like).  Default implementation just returns the passed-in
    # values; subclasses may override as desired.
    fun check_values(args, values: Object) is abstract
    
    # Set parsing to not stop on the first non-option, allowing
    # interspersing switches with command arguments. This is the
    # default behavior. See also disable_interspersed_args() and the
    # class documentation description of the attribute
    # allow_interspersed_args.
    fun enable_interspersed_args is abstract
    
    fun get_option_group(opt_str: Object) is abstract
    
    fun set_usage(usage: Object) is abstract
    
    fun set_process_default_values(process: Object) is abstract
    
    fun add_option_group is abstract
    
    # print_version(file : file = stdout)
    # Print the version message for this program (self.version) to
    # 'file' (default stdout).  As with print_usage(), any occurrence
    # of "%prog" in self.version is replaced by the current program's
    # name.  Does nothing if self.version is empty or undefined.
    fun print_version(file: Object) is abstract
    
    fun get_version is abstract
    
    fun format_epilog(formatter: Object) is abstract
    
    private fun private_process_long_opt(rargs, values: Object) is abstract
    
    init do end
    
    fun exit(status, msg: Object) is abstract
    
    fun set_default(dest, value: Object) is abstract
    
    # _process_args(largs : [string],
    # rargs : [string],
    # values : Values)
    # Process command-line arguments and populate 'values', consuming
    # options and arguments from 'rargs'.  If 'allow_interspersed_args' is
    # false, stop at the first non-option argument.  If true, accumulate any
    # interspersed non-option arguments in 'largs'.
    private fun private_process_args(rargs, values, largs: Object) is abstract
    
    # print_help(file : file = stdout)
    # Print an extended help message, listing all options and any
    # help text provided with them, to 'file' (default stdout).
    fun print_help(file: Object) is abstract
    
    private fun private_create_option_list is abstract
    
    # Set parsing to stop on the first non-option. Use this if
    # you have a command processor which runs another command that
    # has options of its own and you want to make sure these options
    # don't get confused.
    fun disable_interspersed_args is abstract
    
    fun expand_prog_name(s: Object) is abstract
    
    # _match_long_opt(opt : string) -> string
    # Determine which long option string 'opt' matches, ie. which one
    # it is an unambiguous abbreviation for.  Raises BadOptionError if
    # 'opt' doesn't unambiguously match any long option string.
    private fun private_match_long_opt(opt: Object) is abstract
    
    private fun private_add_help_option is abstract
    
    private fun private_get_all_options is abstract
    
    fun get_default_values is abstract
    
    fun get_prog_name is abstract
    
    # Declare that you are done with this OptionParser.  This cleans up
    # reference cycles so the OptionParser (and all objects referenced by
    # it) can be garbage-collected promptly.  After calling destroy(), the
    # OptionParser is unusable.
    redef fun destroy is abstract
    
    private fun private_process_short_opts(rargs, values: Object) is abstract
    
    redef fun get_description is abstract
    
    # parse_args(args : [string] = sys.argv[1:],
    # values : Values = None)
    # -> (values : Values, args : [string])
    # Parse the command-line options found in 'args' (default:
    # sys.argv[1:]).  Any errors result in a call to 'error()', which
    # by default prints the usage message to stderr and calls
    # sys.exit() with an error message.  On success returns a pair
    # (values, args) where 'values' is an Values instance (with all
    # your option values) and 'args' is the list of arguments left
    # over after parsing options.
    fun parse_args(args, values: Object) is abstract
    
    redef fun format_help(formatter) is abstract
    
    fun set_defaults is abstract
    
    private fun private_add_version_option is abstract
    
    redef fun format_option_help(formatter) is abstract
    
    private fun private_get_encoding(file: Object) is abstract
    
    # error(msg : string)
    # Print a usage message incorporating 'msg' to stderr and exit.
    # If you override this in a subclass, it should not return -- it
    # should either exit or raise an exception.
    fun error(msg: Object) is abstract
    
    private fun private_init_parsing_state is abstract
    
    # print_usage(file : file = stdout)
    # Print the usage message for the current program (self.usage) to
    # 'file' (default stdout).  Any occurrence of the string "%prog" in
    # self.usage is replaced with the name of the current program
    # (basename of sys.argv[0]).  Does nothing if self.usage is empty
    # or not defined.
    fun print_usage(file: Object) is abstract
    
    private fun private_populate_option_list(option_list, add_help: Object) is abstract
    
end

class OptParseError
    super Exception
    
    init do end
    
    fun str is abstract
    
end

