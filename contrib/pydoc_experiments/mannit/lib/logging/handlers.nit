# Logging package for Python. Based on PEP 282 and comments thereto in
# comp.lang.python.
# Copyright (C) 2001-2012 Vinay Sajip. All Rights Reserved.
# To use, simply 'import logging' and log away!
module handlers

import cstringio
import traceback
import thread
import threading
import time
import weakref
import handlers
import atexit
import config
import sys
import warnings
import codecs
import os
import builtins

# Filter instances are used to perform arbitrary filtering of LogRecords.
# Loggers and Handlers can optionally use Filter instances to filter
# records as desired. The base filter class only allows events which are
# below a certain point in the logger hierarchy. For example, a filter
# initialized with "A.B" will allow events logged by loggers "A.B",
# "A.B.C", "A.B.C.D", "A.B.D" etc. but not "A.BB", "B.A.B" etc. If
# initialized with the empty string, all events are passed.
redef class Filter
    
    # Determine if the specified record is to be logged.
    # Is the specified record to be logged? Returns 0 for no, nonzero for
    # yes. If deemed appropriate, the record may be modified in-place.
    redef fun filter(record) is abstract
    
    # Initialize a filter.
    # Initialize with the name of the logger which, together with its
    # children, will have its events allowed through the filter. If no
    # name is specified, allow every event.
    init do end
    
end

# A formatter suitable for formatting a number of records.
redef class BufferingFormatter
    
    # Return the header string for the specified records.
    redef fun formatheader(records) is abstract
    
    # Return the footer string for the specified records.
    redef fun formatfooter(records) is abstract
    
    # Optionally specify a formatter which will be used to format each
    # individual record.
    init do end
    
    # Format the specified records and return the result as a string.
    redef fun format(records) is abstract
    
end

# A handler class which writes formatted logging records to disk files.
redef class FileHandler
    
    # Open the current base file with the (original) mode and encoding.
    # Return the resulting stream.
    redef fun private_open is abstract
    
    # Closes the stream.
    redef fun close is abstract
    
    # Open the specified file and use it as the stream for logging.
    init do end
    
    # Emit a record.
    # If the stream was not opened because 'delay' was specified in the
    # constructor, open it before calling the superclass's emit.
    redef fun emit(record) is abstract
    
end

# This handler does nothing. It's intended to be used to avoid the
# "No handlers could be found for logger XXX" one-off warning. This is
# important for library code, which may contain code to log events. If a user
# of the library does not configure logging, the one-off warning might be
# produced; to avoid this, the library developer simply needs to instantiate
# a NullHandler and add it to the top-level logger of the library module or
# package.
redef class NullHandler
    
    redef fun createlock is abstract
    
    redef fun handle(record) is abstract
    
    redef fun emit(record) is abstract
    
end

# A base class for loggers and handlers which allows them to share
# common code.
redef class Filterer
    
    # Determine if a record is loggable by consulting all the filters.
    # The default is to allow the record to be logged; any filter can veto
    # this and the record is then dropped. Returns a zero value if a record
    # is to be dropped, else non-zero.
    redef fun filter(record) is abstract
    
    # Remove the specified filter from this handler.
    redef fun removefilter(filter) is abstract
    
    # Initialize the list of filters to be an empty list.
    init do end
    
    # Add the specified filter to this handler.
    redef fun addfilter(filter) is abstract
    
end

redef class Sys
    
end

# There is [under normal circumstances] just one Manager instance, which
# holds the hierarchy of loggers.
redef class Manager
    
    # Get a logger with the specified name (channel name), creating it
    # if it doesn't yet exist. This name is a dot-separated hierarchical
    # name, such as "a", "a.b", "a.b.c" or similar.
    # If a PlaceHolder existed for the specified name [i.e. the logger
    # didn't exist but a child of it did], replace it with the created
    # logger and fix up the parent/child references which pointed to the
    # placeholder to now point to the logger.
    redef fun getlogger(name) is abstract
    
    # Ensure that children of the placeholder ph are connected to the
    # specified logger.
    redef fun private_fixupchildren(ph, alogger) is abstract
    
    # Initialize the manager with the root node of the logger hierarchy.
    init do end
    
    # Set the class to be used when instantiating a logger with this Manager.
    redef fun setloggerclass(klass) is abstract
    
    # Ensure that there are either loggers or placeholders all the way
    # from the specified logger to the root of the logger hierarchy.
    redef fun private_fixupparents(alogger) is abstract
    
end

# Handler instances dispatch logging events to specific destinations.
# The base handler class. Acts as a placeholder which defines the Handler
# interface. Handlers can optionally use Formatter instances to format
# records as desired. By default, no formatter is specified; in this case,
# the 'raw' message as determined by record.message is logged.
redef class Handler
    
    redef fun set_name(name) is abstract
    
    # Handle errors which occur during an emit() call.
    # This method should be called from handlers when an exception is
    # encountered during an emit() call. If raiseExceptions is false,
    # exceptions get silently ignored. This is what is mostly wanted
    # for a logging system - most users will not care about errors in
    # the logging system, they are more interested in application errors.
    # You could, however, replace this with a custom handler if you wish.
    # The record which was being processed is passed in to this method.
    redef fun handleerror(record) is abstract
    
    # Conditionally emit the specified logging record.
    # Emission depends on filters which may have been added to the handler.
    # Wrap the actual emission of the record with acquisition/release of
    # the I/O thread lock. Returns whether the filter passed the record for
    # emission.
    redef fun handle(record) is abstract
    
    # Format the specified record.
    # If a formatter is set, use it. Otherwise, use the default formatter
    # for the module.
    redef fun format(record) is abstract
    
    # Set the logging level of this handler.
    redef fun setlevel(level) is abstract
    
    # Acquire the I/O thread lock.
    redef fun acquire is abstract
    
    redef fun get_name is abstract
    
    # Initializes the instance - basically setting the formatter to None
    # and the filter list to empty.
    init do end
    
    # Acquire a thread lock for serializing access to the underlying I/O.
    redef fun createlock is abstract
    
    # Ensure all logging output has been flushed.
    # This version does nothing and is intended to be implemented by
    # subclasses.
    redef fun flush is abstract
    
    # Release the I/O thread lock.
    redef fun release is abstract
    
    # Tidy up any resources used by the handler.
    # This version removes the handler from an internal map of handlers,
    # _handlers, which is used for handler lookup by name. Subclasses
    # should ensure that this gets called from overridden close()
    # methods.
    redef fun close is abstract
    
    # Do whatever it takes to actually log the specified logging record.
    # This version is intended to be implemented by subclasses and so
    # raises a NotImplementedError.
    redef fun emit(record) is abstract
    
    # Set the formatter for this handler.
    redef fun setformatter(fmt) is abstract
    
end

# A LogRecord instance represents an event being logged.
# LogRecord instances are created every time something is logged. They
# contain all the information pertinent to the event being logged. The
# main information passed in is in msg and args, which are combined
# using str(msg) % args to create the message field of the record. The
# record also includes information such as when the record was created,
# the source line where the logging call was made, and any exception
# information to be logged.
redef class LogRecord
    
    # Initialize a logging record with interesting information.
    init do end
    
    # Return the message for this LogRecord.
    # Return the message for this LogRecord after merging any user-supplied
    # arguments with the message.
    redef fun getmessage is abstract
    
    redef fun str is abstract
    
end

# A handler class which writes logging records, appropriately formatted,
# to a stream. Note that this class does not close the stream, as
# sys.stdout or sys.stderr may be used.
redef class StreamHandler
    
    # Initialize the handler.
    # If stream is not specified, sys.stderr is used.
    init do end
    
    # Emit a record.
    # If a formatter is specified, it is used to format the record.
    # The record is then written to the stream with a trailing newline.  If
    # exception information is present, it is formatted using
    # traceback.print_exception and appended to the stream.  If the stream
    # has an 'encoding' attribute, it is used to determine how to do the
    # output to the stream.
    redef fun emit(record) is abstract
    
    # Flushes the stream.
    redef fun flush is abstract
    
end

# An adapter for loggers which makes it easier to specify contextual
# information in logging output.
redef class LoggerAdapter
    
    # Delegate an info call to the underlying logger, after adding
    # contextual information from this adapter instance.
    redef fun info(msg) is abstract
    
    # Delegate an exception call to the underlying logger, after adding
    # contextual information from this adapter instance.
    redef fun exception(msg) is abstract
    
    # Delegate a log call to the underlying logger, after adding
    # contextual information from this adapter instance.
    redef fun log(msg, level) is abstract
    
    # Process the logging message and keyword arguments passed in to
    # a logging call to insert contextual information. You can either
    # manipulate the message itself, the keyword args or both. Return
    # the message and kwargs modified (or not) to suit your needs.
    # Normally, you'll only need to override this one method in a
    # LoggerAdapter subclass for your specific needs.
    redef fun process(msg, kwargs) is abstract
    
    # See if the underlying logger is enabled for the specified level.
    redef fun isenabledfor(level) is abstract
    
    # Initialize the adapter with a logger and a dict-like object which
    # provides contextual information. This constructor signature allows
    # easy stacking of LoggerAdapters, if so desired.
    # You can effectively pass keyword arguments as shown in the
    # following example:
    # adapter = LoggerAdapter(someLogger, dict(p1=v1, p2="v2"))
    init do end
    
    # Delegate a warning call to the underlying logger, after adding
    # contextual information from this adapter instance.
    redef fun warning(msg) is abstract
    
    # Delegate a critical call to the underlying logger, after adding
    # contextual information from this adapter instance.
    redef fun critical(msg) is abstract
    
    # Delegate an error call to the underlying logger, after adding
    # contextual information from this adapter instance.
    redef fun error(msg) is abstract
    
    # Delegate a debug call to the underlying logger, after adding
    # contextual information from this adapter instance.
    redef fun debug(msg) is abstract
    
end

# Instances of the Logger class represent a single logging channel. A
# "logging channel" indicates an area of an application. Exactly how an
# "area" is defined is up to the application developer. Since an
# application can have any number of areas, logging channels are identified
# by a unique string. Application areas can be nested (e.g. an area
# of "input processing" might include sub-areas "read CSV files", "read
# XLS files" and "read Gnumeric files"). To cater for this natural nesting,
# channel names are organized into a namespace hierarchy where levels are
# separated by periods, much like the Java or Python package namespace. So
# in the instance given above, channel names might be "input" for the upper
# level, and "input.csv", "input.xls" and "input.gnu" for the sub-levels.
# There is no arbitrary limit to the depth of nesting.
redef class Logger
    
    # Log 'msg % args' with severity 'INFO'.
    # To pass exception information, use the keyword argument exc_info with
    # a true value, e.g.
    # logger.info("Houston, we have a %s", "interesting problem", exc_info=1)
    redef fun info(msg) is abstract
    
    # Low-level logging routine which creates a LogRecord and then calls
    # all the handlers of this logger to handle the record.
    redef fun private_log(msg, exc_info, level, args, extra) is abstract
    
    # Convenience method for logging an ERROR with exception information.
    redef fun exception(msg) is abstract
    
    # Call the handlers for the specified record.
    # This method is used for unpickled records received from a socket, as
    # well as those created locally. Logger-level filtering is applied.
    redef fun handle(record) is abstract
    
    # Log 'msg % args' with the integer severity 'level'.
    # To pass exception information, use the keyword argument exc_info with
    # a true value, e.g.
    # logger.log(level, "We have a %s", "mysterious problem", exc_info=1)
    redef fun log(msg, level) is abstract
    
    # Remove the specified handler from this logger.
    redef fun removehandler(hdlr) is abstract
    
    # Log 'msg % args' with severity 'DEBUG'.
    # To pass exception information, use the keyword argument exc_info with
    # a true value, e.g.
    # logger.debug("Houston, we have a %s", "thorny problem", exc_info=1)
    redef fun debug(msg) is abstract
    
    # Set the logging level of this logger.
    redef fun setlevel(level) is abstract
    
    # Initialize the logger with a name and an optional level.
    init do end
    
    # Add the specified handler to this logger.
    redef fun addhandler(hdlr) is abstract
    
    # Is this logger enabled for level 'level'?
    redef fun isenabledfor(level) is abstract
    
    # Find the stack frame of the caller so that we can note the source
    # file name, line number and function name.
    redef fun findcaller is abstract
    
    # Log 'msg % args' with severity 'WARNING'.
    # To pass exception information, use the keyword argument exc_info with
    # a true value, e.g.
    # logger.warning("Houston, we have a %s", "bit of a problem", exc_info=1)
    redef fun warning(msg) is abstract
    
    # Log 'msg % args' with severity 'CRITICAL'.
    # To pass exception information, use the keyword argument exc_info with
    # a true value, e.g.
    # logger.critical("Houston, we have a %s", "major disaster", exc_info=1)
    redef fun critical(msg) is abstract
    
    # Get a logger which is a descendant to this one.
    # This is a convenience method, such that
    # logging.getLogger('abc').getChild('def.ghi')
    # is the same as
    # logging.getLogger('abc.def.ghi')
    # It's useful, for example, when the parent logger is named using
    # __name__ rather than a literal string.
    redef fun getchild(suffix) is abstract
    
    # Log 'msg % args' with severity 'ERROR'.
    # To pass exception information, use the keyword argument exc_info with
    # a true value, e.g.
    # logger.error("Houston, we have a %s", "major problem", exc_info=1)
    redef fun error(msg) is abstract
    
    # Pass a record to all relevant handlers.
    # Loop through all handlers for this logger and its parents in the
    # logger hierarchy. If no handler was found, output a one-off error
    # message to sys.stderr. Stop searching up the hierarchy whenever a
    # logger with the "propagate" attribute set to zero is found - that
    # will be the last logger whose handlers are called.
    redef fun callhandlers(record) is abstract
    
    # Get the effective level for this logger.
    # Loop through this logger and its parents in the logger hierarchy,
    # looking for a non-zero logging level. Return the first one found.
    redef fun geteffectivelevel is abstract
    
    # A factory method which can be overridden in subclasses to create
    # specialized LogRecords.
    redef fun makerecord(extra, name, level, args, lno, func, msg, exc_info, fn) is abstract
    
end

# Formatter instances are used to convert a LogRecord to text.
# Formatters need to know how a LogRecord is constructed. They are
# responsible for converting a LogRecord to (usually) a string which can
# be interpreted by either a human or an external system. The base Formatter
# allows a formatting string to be specified. If none is supplied, the
# default value of "%s(message)\n" is used.
# The Formatter can be initialized with a format string which makes use of
# knowledge of the LogRecord attributes - e.g. the default value mentioned
# above makes use of the fact that the user's message and arguments are pre-
# formatted into a LogRecord's message attribute. Currently, the useful
# attributes in a LogRecord are described by:
# %(name)s            Name of the logger (logging channel)
# %(levelno)s         Numeric logging level for the message (DEBUG, INFO,
# WARNING, ERROR, CRITICAL)
# %(levelname)s       Text logging level for the message ("DEBUG", "INFO",
# "WARNING", "ERROR", "CRITICAL")
# %(pathname)s        Full pathname of the source file where the logging
# call was issued (if available)
# %(filename)s        Filename portion of pathname
# %(module)s          Module (name portion of filename)
# %(lineno)d          Source line number where the logging call was issued
# (if available)
# %(funcName)s        Function name
# %(created)f         Time when the LogRecord was created (time.time()
# return value)
# %(asctime)s         Textual time when the LogRecord was created
# %(msecs)d           Millisecond portion of the creation time
# %(relativeCreated)d Time in milliseconds when the LogRecord was created,
# relative to the time the logging module was loaded
# (typically at application startup time)
# %(thread)d          Thread ID (if available)
# %(threadName)s      Thread name (if available)
# %(process)d         Process ID (if available)
# %(message)s         The result of record.getMessage(), computed just as
# the record is emitted
redef class Formatter
    
    # Format and return the specified exception information as a string.
    # This default implementation just uses
    # traceback.print_exception()
    redef fun formatexception(ei) is abstract
    
    # Initialize the formatter with specified format strings.
    # Initialize the formatter either with the specified format string, or a
    # default as described above. Allow for specialized date formatting with
    # the optional datefmt argument (if omitted, you get the ISO8601 format).
    init do end
    
    # Check if the format uses the creation time of the record.
    redef fun usestime is abstract
    
    # Return the creation time of the specified LogRecord as formatted text.
    # This method should be called from format() by a formatter which
    # wants to make use of a formatted time. This method can be overridden
    # in formatters to provide for any specific requirement, but the
    # basic behaviour is as follows: if datefmt (a string) is specified,
    # it is used with time.strftime() to format the creation time of the
    # record. Otherwise, the ISO8601 format is used. The resulting
    # string is returned. This function uses a user-configurable function
    # to convert the creation time to a tuple. By default, time.localtime()
    # is used; to change this for a particular formatter instance, set the
    # 'converter' attribute to a function with the same signature as
    # time.localtime() or time.gmtime(). To change it for all formatters,
    # for example if you want all logging times to be shown in GMT,
    # set the 'converter' attribute in the Formatter class.
    redef fun formattime(record, datefmt) is abstract
    
    # Format the specified record as text.
    # The record's attribute dictionary is used as the operand to a
    # string formatting operation which yields the returned string.
    # Before formatting the dictionary, a couple of preparatory steps
    # are carried out. The message attribute of the record is computed
    # using LogRecord.getMessage(). If the formatting string uses the
    # time (as determined by a call to usesTime(), formatTime() is
    # called to format the event time. If there is exception information,
    # it is formatted using formatException() and appended to the message.
    redef fun format(record) is abstract
    
end

# PlaceHolder instances are used in the Manager logger hierarchy to take
# the place of nodes for which no loggers have been defined. This class is
# intended for internal use only and not as part of the public API.
redef class PlaceHolder
    
    # Initialize with the specified logger being a child of this placeholder.
    init do end
    
    # Add the specified logger as a child of this placeholder.
    redef fun append(alogger) is abstract
    
end

# A root logger is not that different to any other logger, except that
# it must have a logging level and there is only one instance of it in
# the hierarchy.
redef class RootLogger
    
    # Initialize the logger with the name "root".
    init do end
    
end

