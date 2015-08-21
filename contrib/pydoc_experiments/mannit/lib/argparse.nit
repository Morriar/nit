# Command-line parsing library
# This module is an optparse-inspired command-line parsing library that:
# - handles both optional and positional arguments
# - produces highly informative usage messages
# - supports parsers that dispatch to sub-parsers
# The following is a simple usage example that sums integers from the
# command-line and writes the result to a file::
# parser = argparse.ArgumentParser(
# description='sum the integers at the command line')
# parser.add_argument(
# 'integers', metavar='int', nargs='+', type=int,
# help='an integer to be summed')
# parser.add_argument(
# '--log', default=sys.stdout, type=argparse.FileType('w'),
# help='the file where the sum should be written')
# args = parser.parse_args()
# args.log.write('%s' % sum(args.integers))
# args.log.close()
# The module contains the following public classes:
# - ArgumentParser -- The main entry point for command-line parsing. As the
# example above shows, the add_argument() method is used to populate
# the parser with actions for optional and positional arguments. Then
# the parse_args() method is invoked to convert the args at the
# command-line into an object with attributes.
# - ArgumentError -- The exception raised by ArgumentParser objects when
# there are errors with the parser's actions. Errors raised while
# parsing the command-line are caught by ArgumentParser and emitted
# as command-line messages.
# - FileType -- A factory for defining types of files to be created. As the
# example above shows, instances of FileType are typically passed as
# the type= argument of add_argument() calls.
# - Action -- The base class for parser actions. Typically actions are
# selected by passing strings like 'store_true' or 'append_const' to
# the action= argument of add_argument(). However, for greater
# customization of ArgumentParser actions, subclasses of Action may
# be defined and passed as the action= argument.
# - HelpFormatter, RawDescriptionHelpFormatter, RawTextHelpFormatter,
# ArgumentDefaultsHelpFormatter -- Formatter classes which
# may be passed as the formatter_class= argument to the
# ArgumentParser constructor. HelpFormatter is the default,
# RawDescriptionHelpFormatter and RawTextHelpFormatter tell the parser
# not to change the formatting for help text, and
# ArgumentDefaultsHelpFormatter adds information about argument defaults
# to the help.
# All other classes in this module are considered implementation details.
# (Also note that HelpFormatter and RawDescriptionHelpFormatter are only
# considered public as object names -- the API of the formatter objects is
# still considered an implementation detail.)
module argparse

import textwrap
import sys
import re
import collections
import copy
import os
import builtins

private class StoreFalseAction
    super StoreConstAction
    
    init do end
    
end

private class AppendAction
    super Action
    
    init do end
    
    redef fun call(namespace, parser, values, option_string) is abstract
    
end

# Simple object for storing attributes.
# Implements equality by attribute names and values, and provides a simple
# string representation.
class Namespace
    super AttributeHolder
    
    init do end
    
    fun contains(key: Object) is abstract
    
    fun eq(other: Object) is abstract
    
    fun ne(other: Object) is abstract
    
end

# Object for parsing command line strings into Python objects.
# Keyword Arguments:
# - prog -- The name of the program (default: sys.argv[0])
# - usage -- A usage message (default: auto-generated from arguments)
# - description -- A description of what the program does
# - epilog -- Text following the argument descriptions
# - parents -- Parsers whose arguments should be copied into this one
# - formatter_class -- HelpFormatter class for printing help messages
# - prefix_chars -- Characters that prefix optional arguments
# - fromfile_prefix_chars -- Characters that prefix files containing
# additional arguments
# - argument_default -- The default value for all arguments
# - conflict_handler -- String indicating how to handle conflicts
# - add_help -- Add a -h/-help option
class ArgumentParser
    super ActionsContainer
    super AttributeHolder
    
    private fun private_get_formatter is abstract
    
    redef fun private_get_kwargs is abstract
    
    fun format_version is abstract
    
    private fun private_read_args_from_files(arg_strings: Object) is abstract
    
    fun format_usage is abstract
    
    private fun private_get_value(action, arg_string: Object) is abstract
    
    fun convert_arg_line_to_args(arg_line: Object) is abstract
    
    init do end
    
    private fun private_parse_known_args(arg_strings, namespace: Object) is abstract
    
    redef fun private_add_action(action) is abstract
    
    private fun private_match_argument(action, arg_strings_pattern: Object) is abstract
    
    fun exit(status, message: Object) is abstract
    
    private fun private_get_optional_actions is abstract
    
    fun print_help(file: Object) is abstract
    
    private fun private_parse_optional(arg_string: Object) is abstract
    
    fun parse_known_args(args, namespace: Object) is abstract
    
    private fun private_get_values(action, arg_strings: Object) is abstract
    
    private fun private_get_positional_actions is abstract
    
    private fun private_get_nargs_pattern(action: Object) is abstract
    
    fun add_subparsers is abstract
    
    private fun private_match_arguments_partial(actions, arg_strings_pattern: Object) is abstract
    
    fun parse_args(args, namespace: Object) is abstract
    
    fun format_help is abstract
    
    private fun private_check_value(action, value: Object) is abstract
    
    private fun private_print_message(message, file: Object) is abstract
    
    fun print_version(file: Object) is abstract
    
    # error(message: string)
    # Prints a usage message incorporating the message to stderr and
    # exits.
    # If you override this in a subclass, it should not return -- it
    # should either exit or raise an exception.
    fun error(message: Object) is abstract
    
    fun print_usage(file: Object) is abstract
    
    private fun private_get_option_tuples(option_string: Object) is abstract
    
end

private class StoreTrueAction
    super StoreConstAction
    
    init do end
    
end

private class VersionAction
    super Action
    
    init do end
    
    redef fun call(namespace, parser, values, option_string) is abstract
    
end

# Formatter for generating usage messages and argument help strings.
# Only the name of this class is considered a public API. All the methods
# provided by the class are considered an implementation detail.
class HelpFormatter
    
    private fun private_join_parts(part_strings: Object) is abstract
    
    private fun private_expand_help(action: Object) is abstract
    
    private fun private_get_help_string(action: Object) is abstract
    
    private fun private_format_text(text: Object) is abstract
    
    private fun private_indent is abstract
    
    private fun private_format_action_invocation(action: Object) is abstract
    
    private fun private_format_usage(usage, prefix, actions, groups: Object) is abstract
    
    private fun private_format_actions_usage(actions, groups: Object) is abstract
    
    private fun private_fill_text(text, indent, width: Object) is abstract
    
    init do end
    
    private fun private_add_item(args, func: Object) is abstract
    
    fun add_usage(usage, prefix, actions, groups: Object) is abstract
    
    private fun private_split_lines(text, width: Object) is abstract
    
    fun add_argument(action: Object) is abstract
    
    fun start_section(heading: Object) is abstract
    
    private fun private_format_args(action, default_metavar: Object) is abstract
    
    private fun private_metavar_formatter(action, default_metavar: Object) is abstract
    
    fun format_help is abstract
    
    private fun private_format_action(action: Object) is abstract
    
    fun end_section is abstract
    
    private fun private_dedent is abstract
    
    fun add_text(text: Object) is abstract
    
    private fun private_iter_indented_subactions(action: Object) is abstract
    
    fun add_arguments(actions: Object) is abstract
    
end

# Help message formatter which retains formatting of all help text.
# Only the name of this class is considered a public API. All the methods
# provided by the class are considered an implementation detail.
class RawTextHelpFormatter
    super RawDescriptionHelpFormatter
    
    redef fun private_split_lines(text, width) is abstract
    
end

private class AppendConstAction
    super Action
    
    init do end
    
    redef fun call(namespace, parser, values, option_string) is abstract
    
end

private class CountAction
    super Action
    
    init do end
    
    redef fun call(namespace, parser, values, option_string) is abstract
    
end

private class StoreConstAction
    super Action
    
    init do end
    
    redef fun call(namespace, parser, values, option_string) is abstract
    
end

redef class Sys
    
end

private class ActionsContainer
    
    private fun private_handle_conflict_error(action, conflicting_actions: Object) is abstract
    
    private fun private_add_action(action: Object) is abstract
    
    init do end
    
    fun get_default(dest: Object) is abstract
    
    private fun private_check_conflict(action: Object) is abstract
    
    fun add_mutually_exclusive_group is abstract
    
    fun set_defaults is abstract
    
    fun register(object, registry_name, value: Object) is abstract
    
    # add_argument(dest, ..., name=value, ...)
    # add_argument(option_string, option_string, ..., name=value, ...)
    fun add_argument is abstract
    
    private fun private_get_handler is abstract
    
    private fun private_get_positional_kwargs(dest: Object) is abstract
    
    private fun private_handle_conflict_resolve(action, conflicting_actions: Object) is abstract
    
    private fun private_pop_action_class(default, kwargs: Object) is abstract
    
    private fun private_get_optional_kwargs is abstract
    
    private fun private_add_container_actions(container: Object) is abstract
    
    private fun private_remove_action(action: Object) is abstract
    
    private fun private_registry_get(default, registry_name, value: Object) is abstract
    
    fun add_argument_group is abstract
    
end

private class MutuallyExclusiveGroup
    super ArgumentGroup
    
    redef fun private_remove_action(action) is abstract
    
    init do end
    
    redef fun private_add_action(action) is abstract
    
end

private class SubParsersAction
    super Action
    
    private fun private_get_subactions is abstract
    
    fun add_parser(name: Object) is abstract
    
    redef fun call(namespace, parser, values, option_string) is abstract
    
    init do end
    
end

# Factory for creating file object types
# Instances of FileType are typically passed as type= arguments to the
# ArgumentParser add_argument() method.
# Keyword Arguments:
# - mode -- A string indicating how the file is to be opened. Accepts the
# same values as the builtin open() function.
# - bufsize -- The file's desired buffer size. Accepts the same values as
# the builtin open() function.
class FileType
    
    init do end
    
    fun call(string: Object) is abstract
    
    fun repr is abstract
    
end

# Help message formatter which adds default values to argument help.
# Only the name of this class is considered a public API. All the methods
# provided by the class are considered an implementation detail.
class ArgumentDefaultsHelpFormatter
    super HelpFormatter
    
    redef fun private_get_help_string(action) is abstract
    
end

private class ArgumentGroup
    super ActionsContainer
    
    redef fun private_remove_action(action) is abstract
    
    init do end
    
    redef fun private_add_action(action) is abstract
    
end

private class HelpAction
    super Action
    
    init do end
    
    redef fun call(namespace, parser, values, option_string) is abstract
    
end

# Abstract base class that provides __repr__.
# The __repr__ method returns a string in the format::
# ClassName(attr=name, attr=name, ...)
# The attributes are determined either by a class-level attribute,
# '_kwarg_names', or by inspecting the instance __dict__.
private class AttributeHolder
    
    private fun private_get_kwargs is abstract
    
    private fun private_get_args is abstract
    
    fun repr is abstract
    
end

# Information about how to convert command line strings to Python objects.
# Action objects are used by an ArgumentParser to represent the information
# needed to parse a single argument from one or more strings from the
# command line. The keyword arguments to the Action constructor are also
# all attributes of Action instances.
# Keyword Arguments:
# - option_strings -- A list of command-line option strings which
# should be associated with this action.
# - dest -- The name of the attribute to hold the created object(s)
# - nargs -- The number of command-line arguments that should be
# consumed. By default, one argument will be consumed and a single
# value will be produced.  Other values include:
# - N (an integer) consumes N arguments (and produces a list)
# - '?' consumes zero or one arguments
# - '*' consumes zero or more arguments (and produces a list)
# - '+' consumes one or more arguments (and produces a list)
# Note that the difference between the default and nargs=1 is that
# with the default, a single value will be produced, while with
# nargs=1, a list containing a single value will be produced.
# - const -- The value to be produced if the option is specified and the
# option uses an action that takes no values.
# - default -- The value to be produced if the option is not specified.
# - type -- A callable that accepts a single string argument, and
# returns the converted value.  The standard Python types str, int,
# float, and complex are useful examples of such callables.  If None,
# str is used.
# - choices -- A container of values that should be allowed. If not None,
# after a command-line argument has been converted to the appropriate
# type, an exception will be raised if it is not a member of this
# collection.
# - required -- True if the action must always be specified at the
# command line. This is only meaningful for optional command-line
# arguments.
# - help -- The help string describing the argument.
# - metavar -- The name to be used for the option's argument with the
# help string. If None, the 'dest' value will be used as the name.
class Action
    super AttributeHolder
    
    redef fun private_get_kwargs is abstract
    
    init do end
    
    fun call(namespace, parser, values, option_string: Object) is abstract
    
end

# An error from trying to convert a command line string to a type.
class ArgumentTypeError
    super Exception
    
end

# Help message formatter which retains any formatting in descriptions.
# Only the name of this class is considered a public API. All the methods
# provided by the class are considered an implementation detail.
class RawDescriptionHelpFormatter
    super HelpFormatter
    
    redef fun private_fill_text(text, indent, width) is abstract
    
end

private class StoreAction
    super Action
    
    init do end
    
    redef fun call(namespace, parser, values, option_string) is abstract
    
end

# An error from creating or using an argument (optional or positional).
# The string value of this exception is the message, augmented with
# information about the argument that caused it.
class ArgumentError
    super Exception
    
    init do end
    
    fun str is abstract
    
end

