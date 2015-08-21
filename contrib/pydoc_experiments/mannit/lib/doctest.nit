# Module doctest -- a framework for running examples in docstrings.
# In simplest use, end each module M to be tested with:
# def _test():
# import doctest
# doctest.testmod()
# if __name__ == "__main__":
# _test()
# Then running the module as a script will cause the examples in the
# docstrings to get executed and verified:
# python M.py
# This won't display anything unless an example fails, in which case the
# failing example(s) and the cause(s) of the failure(s) are printed to stdout
# (why not stderr? because stderr is a lame hack <0.2 wink>), and the final
# line of output is "Test failed.".
# Run it with the -v switch instead:
# python M.py -v
# and a detailed report of all examples tried is printed to stdout, along
# with assorted summaries at the end.
# You can force verbose mode by passing "verbose=True" to testmod, or prohibit
# it by passing "verbose=False".  In either of those cases, sys.argv is not
# examined by testmod.
# There are a variety of other ways to run doctests, including integration
# with the unittest framework, and support for running non-Python text
# files containing doctests.  There are also many ways to override parts
# of doctest's default behaviors.  See the Library Reference Manual for
# details.
module doctest

import traceback
import re
import tempfile
import util
import inspect
import difflib
import sys
import linecache
import warnings
import os
import pdb
import builtins
import unittest

# A class used to check the whether the actual output from a doctest
# example matches the expected output.  `OutputChecker` defines two
# methods: `check_output`, which compares a given pair of outputs,
# and returns true if they match; and `output_difference`, which
# returns a string describing the differences between two outputs.
class OutputChecker

    # Return True iff the actual output from an example (`got`)
    # matches the expected output (`want`).  These strings are
    # always considered to match if they are identical; but
    # depending on what option flags the test runner is using,
    # several non-exact match types are also possible.  See the
    # documentation for `TestRunner` for more information about
    # option flags.
    fun check_output(got, optionflags, want: Object) is abstract

    private fun private_do_a_fancy_diff(got, optionflags, want: Object) is abstract

    # Return a string describing the differences between the
    # expected output for a given example (`example`) and the actual
    # output (`got`).  `optionflags` is the set of option flags used
    # to compare `want` and `got`.
    fun output_difference(got, optionflags, example: Object) is abstract

end

class SkipDocTestCase
    super DocTestCase

    redef fun setup is abstract

    fun test_skip is abstract

    redef fun shortdescription is abstract

    init do end

end

# A class used to parse strings containing doctest examples.
class DocTestParser

    # Return the minimum indentation of any non-blank line in `s`
    private fun private_min_indent(s: Object) is abstract

    # Given a regular expression match from `_EXAMPLE_RE` (`m`),
    # return a pair `(source, want)`, where `source` is the matched
    # example's source code (with prompts and indentation stripped);
    # and `want` is the example's expected output (with indentation
    # stripped).
    # `name` is the string's name, and `lineno` is the line number
    # where the example starts; both are used for error messages.
    private fun private_parse_example(m, name, lineno: Object) is abstract

    # Extract all doctest examples from the given string, and
    # collect them into a `DocTest` object.
    # `globs`, `name`, `filename`, and `lineno` are attributes for
    # the new `DocTest` object.  See the documentation for `DocTest`
    # for more information.
    fun get_doctest(lineno, globs, string, name, filename: Object) is abstract

    # Divide the given string into examples and intervening text,
    # and return them as a list of alternating Examples and strings.
    # Line numbers for the Examples are 0-based.  The optional
    # argument `name` is a name identifying this string, and is only
    # used for error messages.
    fun parse(string, name: Object) is abstract

    # Given the lines of a source string (including prompts and
    # leading indentation), check to make sure that every prompt is
    # followed by a space character.  If any line is not followed by
    # a space character, then raise ValueError.
    private fun private_check_prompt_blank(lines, indent, name, lineno: Object) is abstract

    # Extract all doctest examples from the given string, and return
    # them as a list of `Example` objects.  Line numbers are
    # 0-based, because it's most common in doctests that nothing
    # interesting appears on the same line as opening triple-quote,
    # and so the first interesting line is called "line 1" then.
    # The optional argument `name` is a name identifying this
    # string, and is only used for error messages.
    fun get_examples(string, name: Object) is abstract

    # Check that every line in the given list starts with the given
    # prefix; if any line does not, then raise a ValueError.
    private fun private_check_prefix(prefix, lines, lineno, name: Object) is abstract

    # Return a dictionary containing option overrides extracted from
    # option directives in the given source string.
    # `name` is the string's name, and `lineno` is the line number
    # where the example starts; both are used for error messages.
    private fun private_find_options(source, name, lineno: Object) is abstract

end

class DocFileCase
    super DocTestCase

    redef fun format_failure(err) is abstract

    redef fun repr is abstract

    redef fun id is abstract

end

# A DocTest example has failed in debugging mode.
# The exception instance has variables:
# - test: the DocTest object being run
# - example: the Example object that failed
# - got: the actual output
class DocTestFailure
    super Exception

    init do end

    fun str is abstract

end

# class StringIO([buffer])
# When a StringIO object is created, it can be initialized to an existing
# string by passing the string to the constructor. If no string is given,
# the StringIO will start empty.
# The StringIO object can accept either Unicode or 8-bit strings, but
# mixing the two may take some care. If both are used, 8-bit strings that
# cannot be interpreted as 7-bit ASCII (that use the 8th bit) will cause
# a UnicodeError to be raised when getvalue() is called.
class StringIO

    # Write a sequence of strings to the file. The sequence can be any
    # iterable object producing strings, typically a list of strings. There
    # is no return value.
    # (The name is intended to match readlines(); writelines() does not add
    # line separators.)
    fun writelines(iterable: Object) is abstract

    # Truncate the file's size.
    # If the optional size argument is present, the file is truncated to
    # (at most) that size. The size defaults to the current position.
    # The current file position is not changed unless the position
    # is beyond the new file size.
    # If the specified size exceeds the file's current size, the
    # file remains unchanged.
    fun truncate(size: Object) is abstract

    # Read at most size bytes from the file
    # (less if the read hits EOF before obtaining size bytes).
    # If the size argument is negative or omitted, read all data until EOF
    # is reached. The bytes are returned as a string object. An empty
    # string is returned when EOF is encountered immediately.
    fun read(n: Object) is abstract

    # Read until EOF using readline() and return a list containing the
    # lines thus read.
    # If the optional sizehint argument is present, instead of reading up
    # to EOF, whole lines totalling approximately sizehint bytes (or more
    # to accommodate a final whole line).
    fun readlines(sizehint: Object) is abstract

    fun iter is abstract

    # A file object is its own iterator, for example iter(f) returns f
    # (unless f is closed). When a file is used as an iterator, typically
    # in a for loop (for example, for line in f: print line), the next()
    # method is called repeatedly. This method returns the next input line,
    # or raises StopIteration when EOF is hit.
    fun next is abstract

    # Write a string to the file.
    # There is no return value.
    fun write(s: Object) is abstract

    init do end

    # Flush the internal buffer
    fun flush is abstract

    # Free the memory buffer.
    fun close is abstract

    # Returns False because StringIO objects are not connected to a
    # tty-like device.
    fun isatty is abstract

    # Read one entire line from the file.
    # A trailing newline character is kept in the string (but may be absent
    # when a file ends with an incomplete line). If the size argument is
    # present and non-negative, it is a maximum byte count (including the
    # trailing newline) and an incomplete line may be returned.
    # An empty string is returned only when EOF is encountered immediately.
    # Note: Unlike stdio's fgets(), the returned string contains null
    # characters ('\0') if they occurred in the input.
    fun readline(length: Object) is abstract

    # Retrieve the entire contents of the "file" at any time before
    # the StringIO object's close() method is called.
    # The StringIO object can accept either Unicode or 8-bit strings,
    # but mixing the two may take some care. If both are used, 8-bit
    # strings that cannot be interpreted as 7-bit ASCII (that use the
    # 8th bit) will cause a UnicodeError to be raised when getvalue()
    # is called.
    fun getvalue is abstract

    # Set the file's current position.
    # The mode argument is optional and defaults to 0 (absolute file
    # positioning); other values are 1 (seek relative to the current
    # position) and 2 (seek relative to the file's end).
    # There is no return value.
    fun seek(pos, mode: Object) is abstract

    # Return the file's current position.
    fun tell is abstract

end

# A class used to run DocTest test cases, and accumulate statistics.
# The `run` method is used to process a single DocTest case.  It
# returns a tuple `(f, t)`, where `t` is the number of test cases
# tried, and `f` is the number of test cases that failed.
# >>> tests = DocTestFinder().find(_TestClass)
# >>> runner = DocTestRunner(verbose=False)
# >>> tests.sort(key = lambda test: test.name)
# >>> for test in tests:
# ...     print test.name, '->', runner.run(test)
# _TestClass -> TestResults(failed=0, attempted=2)
# _TestClass.__init__ -> TestResults(failed=0, attempted=2)
# _TestClass.get -> TestResults(failed=0, attempted=2)
# _TestClass.square -> TestResults(failed=0, attempted=1)
# The `summarize` method prints a summary of all the test cases that
# have been run by the runner, and returns an aggregated `(f, t)`
# tuple:
# >>> runner.summarize(verbose=1)
# 4 items passed all tests:
# 2 tests in _TestClass
# 2 tests in _TestClass.__init__
# 2 tests in _TestClass.get
# 1 tests in _TestClass.square
# 7 tests in 4 items.
# 7 passed and 0 failed.
# Test passed.
# TestResults(failed=0, attempted=7)
# The aggregated number of tried examples and failed examples is
# also available via the `tries` and `failures` attributes:
# >>> runner.tries
# 7
# >>> runner.failures
# 0
# The comparison between expected outputs and actual outputs is done
# by an `OutputChecker`.  This comparison may be customized with a
# number of option flags; see the documentation for `testmod` for
# more information.  If the option flags are insufficient, then the
# comparison may also be customized by passing a subclass of
# `OutputChecker` to the constructor.
# The test runner's display output can be controlled in two ways.
# First, an output function (`out) can be passed to
# `TestRunner.run`; this function will be called with strings that
# should be displayed.  It defaults to `sys.stdout.write`.  If
# capturing the output is not sufficient, then the display output
# can be also customized by subclassing DocTestRunner, and
# overriding the methods `report_start`, `report_success`,
# `report_unexpected_exception`, and `report_failure`.
class DocTestRunner

    # Report that the given example raised an unexpected exception.
    fun report_unexpected_exception(test, exc_info, example, out: Object) is abstract

    # Run the examples in `test`.  Write the outcome of each example
    # with one of the `DocTestRunner.report_*` methods, using the
    # writer function `out`.  `compileflags` is the set of compiler
    # flags that should be used to execute examples.  Return a tuple
    # `(f, t)`, where `t` is the number of examples tried, and `f`
    # is the number of examples that failed.  The examples are run
    # in the namespace `test.globs`.
    fun run(test, compileflags, out: Object) is abstract

    # Report that the test runner is about to process the given
    # example.  (Only displays a message if verbose=True)
    fun report_start(test, example, out: Object) is abstract

    fun patched_linecache_getlines(module_globals, filename: Object) is abstract

    # Create a new test runner.
    # Optional keyword arg `checker` is the `OutputChecker` that
    # should be used to compare the expected outputs and actual
    # outputs of doctest examples.
    # Optional keyword arg 'verbose' prints lots of stuff if true,
    # only failures if false; by default, it's true iff '-v' is in
    # sys.argv.
    # Optional argument `optionflags` can be used to control how the
    # test runner compares expected output to actual output, and how
    # it displays failures.  See the documentation for `testmod` for
    # more information.
    init do end

    # Record the fact that the given DocTest (`test`) generated `f`
    # failures out of `t` tried examples.
    fun record_outcome(test, t, f: Object) is abstract

    fun merge(other: Object) is abstract

    # Report that the given example ran successfully.  (Only
    # displays a message if verbose=True)
    fun report_success(test, got, example, out: Object) is abstract

    # Report that the given example failed.
    fun report_failure(test, got, example, out: Object) is abstract

    private fun private_failure_header(test, example: Object) is abstract

    # Print a summary of all the test cases that have been run by
    # this DocTestRunner, and return a tuple `(f, t)`, where `f` is
    # the total number of failed examples, and `t` is the total
    # number of tried examples.
    # The optional `verbose` argument controls how detailed the
    # summary is.  If the verbosity is not specified, then the
    # DocTestRunner's verbosity is used.
    fun summarize(verbose: Object) is abstract

end

# A pointless class, for sanity-checking of docstring testing.
# Methods:
# square()
# get()
# >>> _TestClass(13).get() + _TestClass(-12).get()
# 1
# >>> hex(_TestClass(13).square().get())
# '0xa9'
private class TestClass

    # val -> _TestClass object with associated value val.
    # >>> t = _TestClass(123)
    # >>> print t.get()
    # 123
    init do end

    # square() -> square TestClass's associated value
    # >>> _TestClass(13).square().get()
    # 169
    fun square is abstract

    # get() -> return TestClass's associated value.
    # >>> x = _TestClass(-42)
    # >>> print x.get()
    # -42
    fun get is abstract

end

redef class Sys

end

class Tester

    fun run__test(d, name: Object) is abstract

    fun runstring(s, name: Object) is abstract

    fun merge(other: Object) is abstract

    fun rundoc(object, name, py_module: Object) is abstract

    init do end

    fun rundict(d, name, py_module: Object) is abstract

    fun summarize(verbose: Object) is abstract

end

# A class used to extract the DocTests that are relevant to a given
# object, from its docstring and the docstrings of its contained
# objects.  Doctests can currently be extracted from the following
# object types: modules, functions, classes, methods, staticmethods,
# classmethods, and properties.
class DocTestFinder

    # Return true if the given object is defined in the given
    # module.
    private fun private_from_module(object, py_module: Object) is abstract

    # Find tests for the given object and any contained objects, and
    # add them to `tests`.
    private fun private_find(tests, obj, name, py_module, seen, source_lines, globs: Object) is abstract

    # Return a line number of the given object's docstring.  Note:
    # this method assumes that the object has a docstring.
    private fun private_find_lineno(source_lines, obj: Object) is abstract

    # Create a new doctest finder.
    # The optional argument `parser` specifies a class or
    # function that should be used to create new DocTest objects (or
    # objects that implement the same interface as DocTest).  The
    # signature for this factory function should match the signature
    # of the DocTest constructor.
    # If the optional argument `recurse` is false, then `find` will
    # only examine the given object, and not any contained objects.
    # If the optional argument `exclude_empty` is false, then `find`
    # will include tests for objects with empty docstrings.
    init do end

    # Return a DocTest for the given object, if it defines a docstring;
    # otherwise, return None.
    private fun private_get_test(globs, source_lines, obj, name, py_module: Object) is abstract

    # Return a list of the DocTests that are defined by the given
    # object's docstring, or by any of its contained objects'
    # docstrings.
    # The optional parameter `module` is the module that contains
    # the given object.  If the module is not specified or is None, then
    # the test finder will attempt to automatically determine the
    # correct module.  The object's module is used:
    # - As a default namespace, if `globs` is not specified.
    # - To prevent the DocTestFinder from extracting DocTests
    # from objects that are imported from other modules.
    # - To find the name of the file containing the object.
    # - To help find the line number of the object within its
    # file.
    # Contained objects whose module does not match `module` are ignored.
    # If `module` is False, no attempt to find the module will be made.
    # This is obscure, of use mostly in tests:  if `module` is False, or
    # is None but cannot be found automatically, then all objects are
    # considered to belong to the (non-existent) module, so all contained
    # objects will (recursively) be searched for doctests.
    # The globals for each DocTest is formed by combining `globs`
    # and `extraglobs` (bindings in `extraglobs` override bindings
    # in `globs`).  A new copy of the globals dictionary is created
    # for each DocTest.  If `globs` is not specified, then it
    # defaults to the module's `__dict__`, if specified, or {}
    # otherwise.  If `extraglobs` is not specified, then it defaults
    # to {}.
    fun find(globs, extraglobs, obj, name, py_module: Object) is abstract

end

# Run doc tests but raise an exception as soon as there is a failure.
# If an unexpected exception occurs, an UnexpectedException is raised.
# It contains the test, the example, and the original exception:
# >>> runner = DebugRunner(verbose=False)
# >>> test = DocTestParser().get_doctest('>>> raise KeyError\n42',
# ...                                    {}, 'foo', 'foo.py', 0)
# >>> try:
# ...     runner.run(test)
# ... except UnexpectedException, failure:
# ...     pass
# >>> failure.test is test
# True
# >>> failure.example.want
# '42\n'
# >>> exc_info = failure.exc_info
# >>> raise exc_info[0], exc_info[1], exc_info[2]
# Traceback (most recent call last):
# ...
# KeyError
# We wrap the original exception to give the calling application
# access to the test and example information.
# If the output doesn't match, then a DocTestFailure is raised:
# >>> test = DocTestParser().get_doctest('''
# ...      >>> x = 1
# ...      >>> x
# ...      2
# ...      ''', {}, 'foo', 'foo.py', 0)
# >>> try:
# ...    runner.run(test)
# ... except DocTestFailure, failure:
# ...    pass
# DocTestFailure objects provide access to the test:
# >>> failure.test is test
# True
# As well as to the example:
# >>> failure.example.want
# '2\n'
# and the actual output:
# >>> failure.got
# '1\n'
# If a failure or error occurs, the globals are left intact:
# >>> del test.globs['__builtins__']
# >>> test.globs
# {'x': 1}
# >>> test = DocTestParser().get_doctest('''
# ...      >>> x = 2
# ...      >>> raise KeyError
# ...      ''', {}, 'foo', 'foo.py', 0)
# >>> runner.run(test)
# Traceback (most recent call last):
# ...
# UnexpectedException: <DocTest foo from foo.py:0 (2 examples)>
# >>> del test.globs['__builtins__']
# >>> test.globs
# {'x': 2}
# But the globals are cleared if there is no error:
# >>> test = DocTestParser().get_doctest('''
# ...      >>> x = 2
# ...      ''', {}, 'foo', 'foo.py', 0)
# >>> runner.run(test)
# TestResults(failed=0, attempted=1)
# >>> test.globs
# {}
class DebugRunner
    super DocTestRunner

    redef fun report_unexpected_exception(test, exc_info, example, out) is abstract

    redef fun report_failure(test, got, example, out) is abstract

    redef fun run(test, compileflags, out) is abstract

end

# A collection of doctest examples that should be run in a single
# namespace.  Each `DocTest` defines the following attributes:
# - examples: the list of examples.
# - globs: The namespace (aka globals) that the examples should
# be run in.
# - name: A name identifying the DocTest (typically, the name of
# the object whose docstring this DocTest was extracted from).
# - filename: The name of the file that this DocTest was extracted
# from, or `None` if the filename is unknown.
# - lineno: The line number within filename where this DocTest
# begins, or `None` if the line number is unavailable.  This
# line number is zero-based, with respect to the beginning of
# the file.
# - docstring: The string that the examples were extracted from,
# or `None` if the string is unavailable.
class DocTest

    fun hash is abstract

    fun ne(other: Object) is abstract

    fun repr is abstract

    # Create a new DocTest containing the given examples.  The
    # DocTest's globals are initialized with a copy of `globs`.
    init do end

    fun eq(other: Object) is abstract

    fun cmp(other: Object) is abstract

end

# TestResults(failed, attempted)
class TestResults
    super Tuple

    # Exclude the OrderedDict from pickling
    fun getstate is abstract

    # Return a nicely formatted representation string
    fun repr is abstract

    # Make a new TestResults object from a sequence or iterable
    private fun private_make(py_new, iterable, len, cls: Object) is abstract

    # Return a new TestResults object replacing specified fields with new values
    private fun private_replace(py_self: Object) is abstract

    # Return self as a plain tuple.  Used by copy and pickle.
    fun getnewargs is abstract

    # Return a new OrderedDict which maps field names to their values
    private fun private_asdict is abstract

end

private class SpoofOut
    super StringIO

    redef fun truncate(size) is abstract

    redef fun getvalue is abstract

end

# A specialized version of the python debugger that redirects stdout
# to a given stream when interacting with the user.  Stdout is *not*
# redirected when traced code is executed.
private class OutputRedirectingPdb
    super Pdb

    redef fun set_continue is abstract

    redef fun trace_dispatch(frame, event, arg) is abstract

    redef fun set_trace(frame) is abstract

    init do end

end

# A DocTest example has encountered an unexpected exception
# The exception instance has variables:
# - test: the DocTest object being run
# - example: the Example object that failed
# - exc_info: the exception info
class UnexpectedException
    super Exception

    init do end

    fun str is abstract

end

# A single doctest example, consisting of source code and expected
# output.  `Example` defines the following attributes:
# - source: A single Python statement, always ending with a newline.
# The constructor adds a newline if needed.
# - want: The expected output from running the source code (either
# from stdout, or a traceback in case of exception).  `want` ends
# with a newline unless it's empty, in which case it's an empty
# string.  The constructor adds a newline if needed.
# - exc_msg: The exception message generated by the example, if
# the example is expected to generate an exception; or `None` if
# it is not expected to generate an exception.  This exception
# message is compared against the return value of
# `traceback.format_exception_only()`.  `exc_msg` ends with a
# newline unless it's `None`.  The constructor adds a newline
# if needed.
# - lineno: The line number within the DocTest string containing
# this Example where the Example begins.  This line number is
# zero-based, with respect to the beginning of the DocTest.
# - indent: The example's indentation in the DocTest string.
# I.e., the number of space characters that precede the
# example's first prompt.
# - options: A dictionary mapping from option flags to True or
# False, which is used to override default options for this
# example.  Any option flags not contained in this dictionary
# are left at their default value (as specified by the
# DocTestRunner's optionflags).  By default, no options are set.
class Example

    fun eq(other: Object) is abstract

    init do end

    fun hash is abstract

    fun ne(other: Object) is abstract

end

class DocTestCase
    super TestCase

    redef fun hash is abstract

    redef fun teardown is abstract

    redef fun shortdescription is abstract

    redef fun setup is abstract

    redef fun ne(other) is abstract

    redef fun repr is abstract

    fun runtest is abstract

    init do end

    fun format_failure(err: Object) is abstract

    # Run the test case without results and without catching exceptions
    # The unit test framework includes a debug method on test cases
    # and test suites to support post-mortem debugging.  The test code
    # is run in such a way that errors are not caught.  This way a
    # caller can catch the errors and initiate post-mortem debugging.
    # The DocTestCase provides a debug method that raises
    # UnexpectedException errors if there is an unexpected
    # exception:
    # >>> test = DocTestParser().get_doctest('>>> raise KeyError\n42',
    # ...                {}, 'foo', 'foo.py', 0)
    # >>> case = DocTestCase(test)
    # >>> try:
    # ...     case.debug()
    # ... except UnexpectedException, failure:
    # ...     pass
    # The UnexpectedException contains the test, the example, and
    # the original exception:
    # >>> failure.test is test
    # True
    # >>> failure.example.want
    # '42\n'
    # >>> exc_info = failure.exc_info
    # >>> raise exc_info[0], exc_info[1], exc_info[2]
    # Traceback (most recent call last):
    # ...
    # KeyError
    # If the output doesn't match, then a DocTestFailure is raised:
    # >>> test = DocTestParser().get_doctest('''
    # ...      >>> x = 1
    # ...      >>> x
    # ...      2
    # ...      ''', {}, 'foo', 'foo.py', 0)
    # >>> case = DocTestCase(test)
    # >>> try:
    # ...    case.debug()
    # ... except DocTestFailure, failure:
    # ...    pass
    # DocTestFailure objects provide access to the test:
    # >>> failure.test is test
    # True
    # As well as to the example:
    # >>> failure.example.want
    # '2\n'
    # and the actual output:
    # >>> failure.got
    # '1\n'
    redef fun debug is abstract

    redef fun eq(other) is abstract

    redef fun id is abstract

end

