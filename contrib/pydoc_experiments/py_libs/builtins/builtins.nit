import end

interface Object
end

class Sys
end

# Builtin exceptions

# The base class for all built-in exceptions.
#
# It is not meant to be directly inherited by user-defined classes (for that, use Exception).
# If str() or unicode() is called on an instance of this class, the representation of
# the argument(s) to the instance are returned, or the empty string when there were no arguments.
#
# New in version 2.5.
class BaseException
end

# All built-in, non-system-exiting exceptions are derived from this class.
#
# All user-defined exceptions should also be derived from this class.
#
# Changed in version 2.5: Changed to inherit from `BaseException`.
class Exception
	super BaseException
end

# The base class for those built-in exceptions that are raised for various arithmetic errors: OverflowError, ZeroDivisionError, FloatingPointError.
class ArithmeticError
	super Exception
end

# Raised when a built-in operation or function receives an argument that has the right type but an inappropriate value, and the situation is not described by a more precise exception such as IndexError.
class ValueError
	super Exception
end

# Raised when the second argument of a division or modulo operation is zero. The associated value is a string indicating the type of the operands and the operation.
class ZeroDivisionError
	super Exception
end

class IOError
	super Exception
end

class EnvironmentError
	super Exception
end

class StandardError
	super Exception
end

class DBError
	super Exception
end

class KeyError
	super Exception
end

class Error
	super Exception
end

class Tuple
end

class Dict
end

class Set
	fun iter is abstract
	fun contains(item: Object) is abstract
end

class List
end

class Basestring
end

class Random
end

class Type
end

class Module
end

class Class
end

class Property
end

class Instancemethod
end

class Local
end

class Profiler
end
