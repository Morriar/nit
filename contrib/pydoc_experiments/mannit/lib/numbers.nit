# Abstract Base Classes (ABCs) for numbers, according to PEP 3141.
# TODO: Fill out more detailed documentation on the operators.
module numbers

import builtins

# To Complex, Real adds the operations that work on real numbers.
# In short, those are: a conversion to float, trunc(), divmod,
# %, <, <=, >, and >=.
# Real also provides defaults for the derived operations.
class Real
    super Complex

    # divmod(other, self): The pair (self // other, self % other).
    # Sometimes this can be computed faster than the pair of
    # operations.
    fun rdivmod(other: Object) is abstract

    # self <= other
    fun le(other: Object) is abstract

    # other // self: The floor() of other/self.
    fun rfloordiv(other: Object) is abstract

    # Any Real can be converted to a native float object.
    # Called for float(self).
    fun float is abstract

    # self // other: The floor() of self/other.
    fun floordiv(other: Object) is abstract

    # self < other
    # < on Reals defines a total ordering, except perhaps for NaN.
    fun lt(other: Object) is abstract

    # complex(self) == complex(float(self), 0)
    redef fun complex is abstract

    # divmod(self, other): The pair (self // other, self % other).
    # Sometimes this can be computed faster than the pair of
    # operations.
    fun divmod(other: Object) is abstract

    # Conjugate is a no-op for Reals.
    redef fun conjugate is abstract

    # other % self
    fun rmod(other: Object) is abstract

    # self % other
    fun mod(other: Object) is abstract

    # trunc(self): Truncates self to an Integral.
    # Returns an Integral i such that:
    # * i>0 iff self>0;
    # * abs(i) <= abs(self);
    # * for any Integral j satisfying the first two conditions,
    # abs(i) >= abs(j) [i.e. i has "maximal" abs among those].
    # i.e. "truncate towards 0".
    fun trunc is abstract

end

# Metaclass for defining Abstract Base Classes (ABCs).
# Use this metaclass to create an ABC.  An ABC can be subclassed
# directly, and then acts as a mix-in class.  You can also register
# unrelated concrete classes (even built-in classes) and unrelated
# ABCs as 'virtual subclasses' -- these and their descendants will
# be considered subclasses of the registering ABC by the built-in
# issubclass() function, but the registering ABC won't show up in
# their MRO (Method Resolution Order) nor will method
# implementations defined by the registering ABC be callable (not
# even via super()).
class ABCMeta
    super Type

    # Override for issubclass(subclass, cls).
    fun subclasscheck(subclass, cls: Object) is abstract

    # Override for isinstance(instance, cls).
    fun instancecheck(instance, cls: Object) is abstract

    # Register a virtual subclass of an ABC.
    fun register(subclass, cls: Object) is abstract

    # Debug helper to print the ABC registry.
    private fun private_dump_registry(file, cls: Object) is abstract

end

# Integral adds a conversion to long and the bit-string operations.
class Integral
    super Rational

    # other & self
    fun rand(other: Object) is abstract

    # self ^ other
    fun xor(other: Object) is abstract

    # self >> other
    fun rshift(other: Object) is abstract

    # Called whenever an index is needed, such as in slicing
    fun index is abstract

    # self ** exponent % modulus, but maybe faster.
    # Accept the modulus argument if you want to support the
    # 3-argument version of pow(). Raise a TypeError if exponent < 0
    # or any argument isn't Integral. Otherwise, just implement the
    # 2-argument version described in Complex.
    fun pow2(modulus, exponent: Object) is abstract

    # ~self
    fun invert is abstract

    # float(self) == float(long(self))
    redef fun float is abstract

    # long(self)
    fun long is abstract

    # self << other
    fun lshift(other: Object) is abstract

    # other ^ self
    fun rxor(other: Object) is abstract

    # self & other
    fun py_and(other: Object) is abstract

    # other | self
    fun ror(other: Object) is abstract

    # other << self
    fun rlshift(other: Object) is abstract

    # self | other
    fun py_or(other: Object) is abstract

    # other >> self
    fun rrshift(other: Object) is abstract

end

# All numbers inherit from this class.
# If you just want to check if an argument x is a number, without
# caring what kind, use isinstance(x, Number).
class Number

end

redef class Sys

end

# A decorator indicating abstract properties.
# Requires that the metaclass is ABCMeta or derived from it.  A
# class that has a metaclass derived from ABCMeta cannot be
# instantiated unless all of its abstract properties are overridden.
# The abstract properties can be called using any of the normal
# 'super' call mechanisms.
# Usage:
# class C:
# __metaclass__ = ABCMeta
# @abstractproperty
# def my_abstract_property(self):
# ...
# This defines a read-only property; you can also define a read-write
# abstract property using the 'long' form of property declaration:
# class C:
# __metaclass__ = ABCMeta
# def getx(self): ...
# def setx(self, value): ...
# x = abstractproperty(getx, setx)
class Abstractproperty
    super Property

end

# Complex defines the operations that work on the builtin complex type.
# In short, those are: a conversion to complex, .real, .imag, +, -,
# *, /, abs(), .conjugate, ==, and !=.
# If it is given heterogenous arguments, and doesn't have special
# knowledge about them, it should fall back to the builtin complex
# type as described below.
class Complex
    super Number

    # True if self != 0. Called for bool(self).
    fun nonzero is abstract

    # self * other
    fun mul(other: Object) is abstract

    # other + self
    fun radd(other: Object) is abstract

    # other * self
    fun rmul(other: Object) is abstract

    # Returns the Real distance from 0. Called for abs(self).
    fun abs is abstract

    # other / self with __future__ division
    fun rtruediv(other: Object) is abstract

    # other - self
    fun rsub(other: Object) is abstract

    # self**exponent; should promote to float or complex when necessary.
    fun pow(exponent: Object) is abstract

    # self != other
    fun ne(other: Object) is abstract

    # -self
    fun neg is abstract

    # other / self without __future__ division
    fun rdiv(other: Object) is abstract

    # self + other
    fun add(other: Object) is abstract

    # Return a builtin complex instance. Called for complex(self).
    fun complex is abstract

    # +self
    fun pos is abstract

    # self / other with __future__ division.
    # Should promote to float when necessary.
    fun truediv(other: Object) is abstract

    # (x+y*i).conjugate() returns (x-y*i).
    fun conjugate is abstract

    # base ** self
    fun rpow(base: Object) is abstract

    # self / other without __future__ division
    # May promote to float.
    fun div(other: Object) is abstract

    # self == other
    fun eq(other: Object) is abstract

    # self - other
    fun sub(other: Object) is abstract

end

# .numerator and .denominator should be in lowest terms.
class Rational
    super Real

    # float(self) = self.numerator / self.denominator
    # It's important that this conversion use the integer's "true"
    # division rather than casting one side to float before dividing
    # so that ratios of huge integers convert without overflowing.
    redef fun float is abstract

end

