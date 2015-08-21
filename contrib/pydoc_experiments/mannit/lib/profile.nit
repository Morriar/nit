# Class for profiling Python code.
module profile

import sys
import resource
import os
import marshal
import time
import builtins

redef class Sys
    
end

# Profiler class.
# self.cur is always a tuple.  Each such tuple corresponds to a stack
# frame that is currently active (self.cur[-2]).  The following are the
# definitions of its members.  We use this external "parallel stack" to
# avoid contaminating the program that we are profiling. (old profiler
# used to write into the frames local dictionary!!) Derived classes
# can change the definition of some entries, as long as they leave
# [-2:] intact (frame and previous tuple).  In case an internal error is
# detected, the -3 element is used as the function name.
# [ 0] = Time that needs to be charged to the parent frame's function.
# It is used so that a function call will not have to access the
# timing data for the parent frame.
# [ 1] = Total time spent in this frame's function, excluding time in
# subfunctions (this latter is tallied in cur[2]).
# [ 2] = Total time spent in subfunctions, excluding time executing the
# frame's function (this latter is tallied in cur[1]).
# [-3] = Name of the function that corresponds to this frame.
# [-2] = Actual frame that we correspond to (used to sync exception handling).
# [-1] = Our parent 6-tuple (corresponds to frame.f_back).
# Timing data for each function is stored as a 5-tuple in the dictionary
# self.timings[].  The index is always the name stored in self.cur[-3].
# The following are the definitions of the members:
# [0] = The number of times this function was called, not counting direct
# or indirect recursion,
# [1] = Number of times this function appears on the stack, minus one
# [2] = Total time spent internal to this function
# [3] = Cumulative time that this function was present on the stack.  In
# non-recursive functions, this is the total execution time from start
# to finish of each invocation of a function, including time spent in
# all subfunctions.
# [4] = A dictionary indicating for each function name, the number of times
# it was called by us.
class Profile
    
    fun trace_dispatch_c_call(frame, t: Object) is abstract
    
    fun trace_dispatch_exception(frame, t: Object) is abstract
    
    fun trace_dispatch_return(frame, t: Object) is abstract
    
    fun calibrate(m, verbose: Object) is abstract
    
    fun set_cmd(cmd: Object) is abstract
    
    fun simulate_call(name: Object) is abstract
    
    fun trace_dispatch_call(frame, t: Object) is abstract
    
    fun create_stats is abstract
    
    fun print_stats(sort: Object) is abstract
    
    fun trace_dispatch_i(frame, event, arg: Object) is abstract
    
    private fun private_calibrate_inner(m, verbose: Object) is abstract
    
    init do end
    
    fun run(cmd: Object) is abstract
    
    fun trace_dispatch_l(frame, event, arg: Object) is abstract
    
    fun trace_dispatch_mac(frame, event, arg: Object) is abstract
    
    fun dump_stats(file: Object) is abstract
    
    fun runcall(func: Object) is abstract
    
    fun simulate_cmd_complete is abstract
    
    fun runctx(cmd, globals, locals: Object) is abstract
    
    fun trace_dispatch(frame, event, arg: Object) is abstract
    
    fun snapshot_stats is abstract
    
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

