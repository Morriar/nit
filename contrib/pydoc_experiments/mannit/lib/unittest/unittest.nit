# Python unit testing framework, based on Erich Gamma's JUnit and Kent Beck's
# Smalltalk testing framework.
# This module contains the core framework classes that form the basis of
# specific test cases and suites (TestCase, TestSuite etc.), and also a
# text-based utility class for running the tests and reporting the results
# (TextTestRunner).
# Simple usage:
# import unittest
# class IntegerArithmeticTestCase(unittest.TestCase):
# def testAdd(self):  ## test method names begin 'test*'
# self.assertEqual((1 + 2), 3)
# self.assertEqual(0 + 1, 1)
# def testMultiply(self):
# self.assertEqual((0 * 10), 0)
# self.assertEqual((5 * 8), 40)
# if __name__ == '__main__':
# unittest.main()
# Further information is available in the bundled documentation, and from
# http://docs.python.org/library/unittest.html
# Copyright (c) 1999-2003 Steve Purcell
# Copyright (c) 2003-2010 Python Software Foundation
# This module is free software, and you may redistribute it and/or modify
# it under the same terms as Python itself, so long as this copyright message
# and disclaimer are retained in their original form.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT,
# SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE OF
# THIS CODE, EVEN IF THE AUTHOR HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
# DAMAGE.
# THE AUTHOR SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
# PARTICULAR PURPOSE.  THE CODE PROVIDED HEREUNDER IS ON AN "AS IS" BASIS,
# AND THERE IS NO OBLIGATION WHATSOEVER TO PROVIDE MAINTENANCE,
# SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
module unittest

import case
import result
import suite
import signals
import util
import runner
import loader
import builtins

# A test result class that can print formatted text results to a stream.
# Used by TextTestRunner.
redef class TextTestResult
    
    redef fun addsuccess(test) is abstract
    
    redef fun adderror is abstract
    
    redef fun addexpectedfailure(test, err) is abstract
    
    redef fun addfailure is abstract
    
    redef fun getdescription(test) is abstract
    
    redef fun addskip(test, reason) is abstract
    
    redef fun starttest(test) is abstract
    
    init do end
    
    redef fun addunexpectedsuccess is abstract
    
    redef fun printerrorlist(errors, flavour) is abstract
    
    redef fun printerrors is abstract
    
end

# A test case that wraps a test function.
# This is useful for slipping pre-existing test functions into the
# unittest framework. Optionally, set-up and tidy-up functions can be
# supplied. As with TestCase, the tidy-up ('tearDown') function will
# always be called if the set-up ('setUp') function ran successfully.
redef class FunctionTestCase
    
    redef fun hash is abstract
    
    redef fun teardown is abstract
    
    redef fun shortdescription is abstract
    
    redef fun setup is abstract
    
    redef fun ne(other) is abstract
    
    redef fun repr is abstract
    
    redef fun runtest is abstract
    
    init do end
    
    redef fun str is abstract
    
    redef fun eq(other) is abstract
    
    redef fun id is abstract
    
end

# Holder for test result information.
# Test results are automatically managed by the TestCase and TestSuite
# classes, and do not need to be explicitly manipulated by writers of tests.
# Each instance holds the total number of tests run, and collections of
# failures and errors that occurred among those test runs. The collections
# contain tuples of (testcase, exceptioninfo), where exceptioninfo is the
# formatted traceback of the error that occurred.
redef class TestResult
    
    # Called when a test has completed successfully
    redef fun addsuccess(test) is abstract
    
    # Called when an error has occurred. 'err' is a tuple of values as
    # returned by sys.exc_info().
    redef fun adderror is abstract
    
    # Converts a sys.exc_info()-style tuple of values into a string.
    redef fun private_exc_info_to_string(test, err) is abstract
    
    redef fun private_setupstdout is abstract
    
    redef fun private_is_relevant_tb_level(tb) is abstract
    
    # Called once after all tests are executed.
    # See stopTest for a method called after each test.
    redef fun stoptestrun is abstract
    
    # Called when the given test has been run
    redef fun stoptest(test) is abstract
    
    redef fun private_count_relevant_tb_levels(tb) is abstract
    
    # Called when an error has occurred. 'err' is a tuple of values as
    # returned by sys.exc_info().
    redef fun addfailure is abstract
    
    # Indicates that the tests should be aborted
    redef fun stop is abstract
    
    redef fun repr is abstract
    
    # Called when a test is skipped.
    redef fun addskip(test, reason) is abstract
    
    # Called when the given test is about to be run
    redef fun starttest(test) is abstract
    
    init do end
    
    # Called once before any tests are executed.
    # See startTest for a method called before each test.
    redef fun starttestrun is abstract
    
    # Called when a test was expected to fail, but succeed.
    redef fun addunexpectedsuccess is abstract
    
    # Called when an expected failure/error occured.
    redef fun addexpectedfailure(test, err) is abstract
    
    # Tells whether or not this result was a success
    redef fun wassuccessful is abstract
    
    redef fun private_restorestdout is abstract
    
    # Called by TestRunner after test run
    redef fun printerrors is abstract
    
end

# A test suite is a composite test consisting of a number of TestCases.
# For use, create an instance of TestSuite, then add test case instances.
# When all tests have been added, the suite can be passed to a test
# runner, such as TextTestRunner. It will run the individual test cases
# in the order in which they were added, aggregating the results. When
# subclassing, do not forget to call the base class constructor.
redef class TestSuite
    
    redef fun run(result) is abstract
    
    redef fun private_handlemoduleteardown(result) is abstract
    
    redef fun private_handleclasssetup(test, result) is abstract
    
    redef fun private_get_previous_module(result) is abstract
    
    # Run the tests without collecting errors in a TestResult
    redef fun debug is abstract
    
    redef fun private_teardownpreviousclass(test, result) is abstract
    
    redef fun private_handlemodulefixture(test, result) is abstract
    
    redef fun private_addclassormodulelevelexception(exception, result, errorname) is abstract
    
end

# A simple test suite that doesn't provide class or module shared fixtures.
redef class BaseTestSuite
    
    redef fun run(result) is abstract
    
    redef fun addtests(tests) is abstract
    
    redef fun repr is abstract
    
    redef fun iter is abstract
    
    redef fun ne(other) is abstract
    
    init do end
    
    redef fun call is abstract
    
    # Run the tests without collecting errors in a TestResult
    redef fun debug is abstract
    
    redef fun addtest(test) is abstract
    
    redef fun eq(other) is abstract
    
    redef fun counttestcases is abstract
    
end

# Raise this exception in a test to skip it.
# Usually you can use TestCase.skipTest() or one of the skipping decorators
# instead of raising this directly.
redef class SkipTest
    
end

# A command-line program that runs a set of tests; this is primarily
# for making test modules conveniently executable.
redef class TestProgram
    
    redef fun parseargs(argv) is abstract
    
    redef fun createtests is abstract
    
    redef fun private_do_discovery(argv, loader) is abstract
    
    init do end
    
    redef fun usageexit(msg) is abstract
    
    redef fun runtests is abstract
    
end

redef class Sys
    
end

# A class whose instances are single test cases.
# By default, the test code itself should be placed in a method named
# 'runTest'.
# If the fixture may be used for many test cases, create as
# many test methods as are needed. When instantiating such a TestCase
# subclass, specify in the constructor arguments the name of the test method
# that the instance is to execute.
# Test authors should subclass TestCase for their own tests. Construction
# and deconstruction of the test's environment ('fixture') can be
# implemented by overriding the 'setUp' and 'tearDown' methods respectively.
# If it is necessary to override the __init__ method, the base class
# __init__ method must always be called. It is important that subclasses
# should not change the signature of their __init__ method, since instances
# of the classes are instantiated automatically by parts of the framework
# in order to be run.
# When subclassing TestCase, you can set these attributes:
# * failureException: determines which exception will be raised when
# the instance's assertion methods fail; test methods raising this
# exception will be deemed to have 'failed' rather than 'errored'.
# * longMessage: determines whether long messages (including repr of
# objects used in assert methods) will be printed on failure in *addition*
# to any explicit message passed.
# * maxDiff: sets the maximum length of a diff in failure messages
# by assert methods using difflib. It is looked up as an instance
# attribute so can be configured by individual tests if required.
redef class TestCase
    
    # The default assertEqual implementation, not type specific.
    redef fun private_baseassertequal(msg, second, first) is abstract
    
    redef fun assertdictequal(msg, d2, d1) is abstract
    
    redef fun hash is abstract
    
    # Assert that two multi-line strings are equal.
    redef fun assertmultilineequal(msg, second, first) is abstract
    
    # Included for symmetry with assertIsNone.
    redef fun assertisnotnone(msg, obj) is abstract
    
    # Fail if the two objects are equal as determined by their
    # difference rounded to the given number of decimal places
    # (default 7) and comparing to zero, or by comparing that the
    # between the two objects is less than the given delta.
    # Note that decimal places (from zero) are usually not the same
    # as significant digits (measured from the most signficant digit).
    # Objects that are equal automatically fail.
    redef fun assertnotalmostequal(msg, second, first, places, delta) is abstract
    
    # Check that the expression is false.
    redef fun assertfalse(msg, expr) is abstract
    
    # Checks whether actual is a superset of expected.
    redef fun assertdictcontainssubset(expected, msg, actual) is abstract
    
    # A tuple-specific equality assertion.
    # Args:
    # tuple1: The first tuple to compare.
    # tuple2: The second tuple to compare.
    # msg: Optional message to use on failure instead of a list of
    # differences.
    redef fun asserttupleequal(msg, tuple1, tuple2) is abstract
    
    # Fail immediately, with the given message.
    redef fun fail(msg) is abstract
    
    # Returns a one-line description of the test, or None if no
    # description has been provided.
    # The default implementation of this method returns the first line of
    # the specified test method's docstring.
    redef fun shortdescription is abstract
    
    # Honour the longMessage attribute when generating failure messages.
    # If longMessage is False this means:
    # * Use only an explicit message if it is provided
    # * Otherwise use the standard message for the assert
    # If longMessage is True:
    # * Use the standard message
    # * If an explicit message is provided, plus ' : ' and the explicit message
    redef fun private_formatmessage(msg, standardmsg) is abstract
    
    redef fun eq(other) is abstract
    
    redef fun id is abstract
    
    redef fun deprecated_func is abstract
    
    # Add a type specific assertEqual style function to compare a type.
    # This method is for use by TestCase subclasses that need to register
    # their own type equality functions to provide nicer error messages.
    # Args:
    # typeobj: The data type to call this function on when both values
    # are of the same type in assertEqual().
    # function: The callable taking two arguments and an optional
    # msg= argument that raises self.failureException with a
    # useful error message when the two arguments are not equal.
    redef fun addtypeequalityfunc(typeobj, function) is abstract
    
    # Fail if the two objects are unequal as determined by their
    # difference rounded to the given number of decimal places
    # (default 7) and comparing to zero, or by comparing that the
    # between the two objects is more than the given delta.
    # Note that decimal places (from zero) are usually not the same
    # as significant digits (measured from the most signficant digit).
    # If the two objects compare equal then they will automatically
    # compare almost equal.
    redef fun assertalmostequal(msg, second, first, places, delta) is abstract
    
    redef fun call is abstract
    
    redef fun private_truncatemessage(diff, message) is abstract
    
    # A list-specific equality assertion.
    # Args:
    # list1: The first list to compare.
    # list2: The second list to compare.
    # msg: Optional message to use on failure instead of a list of
    # differences.
    redef fun assertlistequal(msg, list1, list2) is abstract
    
    # Just like self.assertTrue(a >= b), but with a nicer default message.
    redef fun assertgreaterequal(a, msg, b) is abstract
    
    redef fun ne(other) is abstract
    
    # Fail the test unless the text matches the regular expression.
    redef fun assertregexpmatches(msg, text, expected_regexp) is abstract
    
    # Create an instance of the class that will use the named test
    # method when executed. Raises a ValueError if the instance does
    # not have a method with the specified name.
    init do end
    
    # Included for symmetry with assertIsInstance.
    redef fun assertnotisinstance(msg, obj, cls) is abstract
    
    # Just like self.assertTrue(a <= b), but with a nicer default message.
    redef fun assertlessequal(a, msg, b) is abstract
    
    redef fun defaulttestresult is abstract
    
    # Fail if the two objects are unequal as determined by the '=='
    # operator.
    redef fun assertequal(msg, second, first) is abstract
    
    # Just like self.assertTrue(a > b), but with a nicer default message.
    redef fun assertgreater(a, msg, b) is abstract
    
    # Check that the expression is true.
    redef fun asserttrue(msg, expr) is abstract
    
    # Just like self.assertTrue(a < b), but with a nicer default message.
    redef fun assertless(a, msg, b) is abstract
    
    redef fun run(result) is abstract
    
    redef fun str is abstract
    
    # Just like self.assertTrue(a not in b), but with a nicer default message.
    redef fun assertnotin(member, msg, container) is abstract
    
    # Skip this test.
    redef fun skiptest(reason) is abstract
    
    # An equality assertion for ordered sequences (like lists and tuples).
    # For the purposes of this function, a valid ordered sequence type is one
    # which can be indexed, has a length, and has an equality operator.
    # Args:
    # seq1: The first sequence to compare.
    # seq2: The second sequence to compare.
    # seq_type: The expected datatype of the sequences, or None if no
    # datatype should be enforced.
    # msg: Optional message to use on failure instead of a list of
    # differences.
    redef fun assertsequenceequal(msg, seq2, seq1, seq_type) is abstract
    
    # Add a function, with arguments, to be called when the test is
    # completed. Functions added are called on a LIFO basis and are
    # called after tearDown on test failure or success.
    # Cleanup items are called even if setUp fails (unlike tearDown).
    redef fun addcleanup(function) is abstract
    
    redef fun repr is abstract
    
    # Get a detailed comparison function for the types of the two args.
    # Returns: A callable accepting (first, second, msg=None) that will
    # raise a failure exception if first != second with a useful human
    # readable error message for those types.
    redef fun private_getassertequalityfunc(second, first) is abstract
    
    # Execute all cleanup functions. Normally called for you after
    # tearDown.
    redef fun docleanups is abstract
    
    # Same as self.assertTrue(obj is None), with a nicer default message.
    redef fun assertisnone(msg, obj) is abstract
    
    # Same as self.assertTrue(isinstance(obj, cls)), with a nicer
    # default message.
    redef fun assertisinstance(msg, obj, cls) is abstract
    
    redef fun counttestcases is abstract
    
    redef fun private_deprecate(original_func) is abstract
    
    # Just like self.assertTrue(a in b), but with a nicer default message.
    redef fun assertin(member, msg, container) is abstract
    
    # Fail if the two objects are equal as determined by the '!='
    # operator.
    redef fun assertnotequal(msg, second, first) is abstract
    
    # Just like self.assertTrue(a is not b), but with a nicer default message.
    redef fun assertisnot(expr2, msg, expr1) is abstract
    
    # Hook method for setting up class fixture before running tests in the class.
    redef fun setupclass(cls) is abstract
    
    # Asserts that the message in a raised exception matches a regexp.
    # Args:
    # expected_exception: Exception class expected to be raised.
    # expected_regexp: Regexp (re pattern object or string) expected
    # to be found in error message.
    # callable_obj: Function to be called.
    # args: Extra args.
    # kwargs: Extra kwargs.
    redef fun assertraisesregexp(expected_exception, callable_obj, expected_regexp) is abstract
    
    # Fail the test if the text matches the regular expression.
    redef fun assertnotregexpmatches(msg, text, unexpected_regexp) is abstract
    
    # Hook method for deconstructing the test fixture after testing it.
    redef fun teardown is abstract
    
    # Hook method for deconstructing the class fixture after running all tests in the class.
    redef fun teardownclass(cls) is abstract
    
    # An unordered sequence specific comparison. It asserts that
    # actual_seq and expected_seq have the same element counts.
    # Equivalent to::
    # self.assertEqual(Counter(iter(actual_seq)),
    # Counter(iter(expected_seq)))
    # Asserts that each element has the same count in both sequences.
    # Example:
    # - [0, 1, 1] and [1, 0, 1] compare equal.
    # - [0, 0, 1] and [0, 1] compare unequal.
    redef fun assertitemsequal(expected_seq, msg, actual_seq) is abstract
    
    # Fail unless an exception of class excClass is raised
    # by callableObj when invoked with arguments args and keyword
    # arguments kwargs. If a different type of exception is
    # raised, it will not be caught, and the test case will be
    # deemed to have suffered an error, exactly as for an
    # unexpected exception.
    # If called with callableObj omitted or None, will return a
    # context object used like this::
    # with self.assertRaises(SomeException):
    # do_something()
    # The context manager keeps a reference to the exception as
    # the 'exception' attribute. This allows you to inspect the
    # exception after the assertion::
    # with self.assertRaises(SomeException) as cm:
    # do_something()
    # the_exception = cm.exception
    # self.assertEqual(the_exception.error_code, 3)
    redef fun assertraises(callableobj, excclass) is abstract
    
    # Run the test without collecting errors in a TestResult
    redef fun debug is abstract
    
    # Just like self.assertTrue(a is b), but with a nicer default message.
    redef fun assertis(expr2, msg, expr1) is abstract
    
    redef fun private_addskip(reason, result) is abstract
    
    # A set-specific equality assertion.
    # Args:
    # set1: The first set to compare.
    # set2: The second set to compare.
    # msg: Optional message to use on failure instead of a list of
    # differences.
    # assertSetEqual uses ducktyping to support different types of sets, and
    # is optimized for sets specifically (parameters must support a
    # difference method).
    redef fun assertsetequal(msg, set1, set2) is abstract
    
    # Hook method for setting up the test fixture before exercising it.
    redef fun setup is abstract
    
end

# A test runner class that displays results in textual form.
# It prints out the names of tests as they are run, errors as they
# occur, and a summary of the results at the end of the test run.
redef class TextTestRunner
    
    init do end
    
    # Run the given test case or test suite.
    redef fun run(test) is abstract
    
    redef fun private_makeresult is abstract
    
end

# This class is responsible for loading tests according to various criteria
# and returning them wrapped in a TestSuite
redef class TestLoader
    
    redef fun private_get_module_from_name(name) is abstract
    
    # Return a suite of all tests cases found using the given sequence
    # of string specifiers. See 'loadTestsFromName()'.
    redef fun loadtestsfromnames(names, py_module) is abstract
    
    # Used by discovery. Yields test suites it loads.
    redef fun private_find_tests(start_dir, pattern) is abstract
    
    # Return a suite of all tests cases given a string specifier.
    # The name may resolve either to a module, a test case class, a
    # test method within a test case class, or a callable object which
    # returns a TestCase or TestSuite instance.
    # The method optionally resolves the names relative to a given module.
    redef fun loadtestsfromname(name, py_module) is abstract
    
    # Find and return all test modules from the specified start
    # directory, recursing into subdirectories to find them. Only test files
    # that match the pattern will be loaded. (Using shell style pattern
    # matching.)
    # All test modules must be importable from the top level of the project.
    # If the start directory is not the top level directory then the top
    # level directory must be specified separately.
    # If a test package name (directory with '__init__.py') matches the
    # pattern then the package will be checked for a 'load_tests' function. If
    # this exists then it will be called with loader, tests, pattern.
    # If load_tests exists then discovery does  *not* recurse into the package,
    # load_tests is responsible for loading all tests in the package.
    # The pattern is deliberately not stored as a loader attribute so that
    # packages can continue discovery themselves. top_level_dir is stored so
    # load_tests does not need to pass this argument in to loader.discover().
    redef fun discover(start_dir, pattern, top_level_dir) is abstract
    
    redef fun private_get_name_from_path(path) is abstract
    
    redef fun private_get_directory_containing_module(module_name) is abstract
    
    # Return a suite of all tests cases contained in testCaseClass
    redef fun loadtestsfromtestcase(testcaseclass) is abstract
    
    redef fun private_match_path(path, full_path, pattern) is abstract
    
    # Return a suite of all tests cases contained in the given module
    redef fun loadtestsfrommodule(use_load_tests, py_module) is abstract
    
    # Return a sorted sequence of method names found within testCaseClass
    redef fun gettestcasenames(testcaseclass) is abstract
    
end

