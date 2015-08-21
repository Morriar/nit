# This is a Py2.3 implementation of decimal floating point arithmetic based on
# the General Decimal Arithmetic Specification:
# http://speleotrove.com/decimal/decarith.html
# and IEEE standard 854-1987:
# http://en.wikipedia.org/wiki/IEEE_854-1987
# Decimal floating point has finite precision with arbitrarily large bounds.
# The purpose of this module is to support arithmetic using familiar
# "schoolhouse" rules and to avoid some of the tricky representation
# issues associated with binary floating point.  The package is especially
# useful for financial applications or for contexts where users have
# expectations that are at odds with binary floating point (for instance,
# in binary floating point, 1.00 % 0.1 gives 0.09999999999999995 instead
# of the expected Decimal('0.00') returned by decimal floating point).
# Here are some examples of using the decimal module:
# >>> from decimal import *
# >>> setcontext(ExtendedContext)
# >>> Decimal(0)
# Decimal('0')
# >>> Decimal('1')
# Decimal('1')
# >>> Decimal('-.0123')
# Decimal('-0.0123')
# >>> Decimal(123456)
# Decimal('123456')
# >>> Decimal('123.45e12345678901234567890')
# Decimal('1.2345E+12345678901234567892')
# >>> Decimal('1.33') + Decimal('1.27')
# Decimal('2.60')
# >>> Decimal('12.34') + Decimal('3.87') - Decimal('18.41')
# Decimal('-2.20')
# >>> dig = Decimal(1)
# >>> print dig / Decimal(3)
# 0.333333333
# >>> getcontext().prec = 18
# >>> print dig / Decimal(3)
# 0.333333333333333333
# >>> print dig.sqrt()
# 1
# >>> print Decimal(3).sqrt()
# 1.73205080756887729
# >>> print Decimal(3) ** 123
# 4.85192780976896427E+58
# >>> inf = Decimal(1) / Decimal(0)
# >>> print inf
# Infinity
# >>> neginf = Decimal(-1) / Decimal(0)
# >>> print neginf
# -Infinity
# >>> print neginf + inf
# NaN
# >>> print neginf * inf
# -Infinity
# >>> print dig / 0
# Infinity
# >>> getcontext().traps[DivisionByZero] = 1
# >>> print dig / 0
# Traceback (most recent call last):
# ...
# ...
# ...
# DivisionByZero: x / 0
# >>> c = Context()
# >>> c.traps[InvalidOperation] = 0
# >>> print c.flags[InvalidOperation]
# 0
# >>> c.divide(Decimal(0), Decimal(0))
# Decimal('NaN')
# >>> c.traps[InvalidOperation] = 1
# >>> print c.flags[InvalidOperation]
# 1
# >>> c.flags[InvalidOperation] = 0
# >>> print c.flags[InvalidOperation]
# 0
# >>> print c.divide(Decimal(0), Decimal(0))
# Traceback (most recent call last):
# ...
# ...
# ...
# InvalidOperation: 0 / 0
# >>> print c.flags[InvalidOperation]
# 1
# >>> c.flags[InvalidOperation] = 0
# >>> c.traps[InvalidOperation] = 0
# >>> print c.divide(Decimal(0), Decimal(0))
# NaN
# >>> print c.flags[InvalidOperation]
# 1
# >>>
module decimal

import locale
import copy
import numbers
import math
import builtins

# Base exception class.
# Used exceptions derive from this.
# If an exception derives from another exception besides this (such as
# Underflow (Inexact, Rounded, Subnormal) that indicates that it is only
# called if the others are present.  This isn't actually used for
# anything, though.
# handle  -- Called when context._raise_error is called and the
# trap_enabler is not set.  First argument is self, second is the
# context.  More arguments can be given, those being after
# the explanation in _raise_error (For example,
# context._raise_error(NewError, '(-x)!', self._sign) would
# call NewError().handle(context, self._sign).)
# To define a new exception, it should be sufficient to have it derive
# from DecimalException.
class DecimalException
    super ArithmeticError
    
    fun handle(context: Object) is abstract
    
end

# Exponent < Emin before rounding.
# This occurs and signals subnormal whenever the result of a conversion or
# operation is subnormal (that is, its adjusted exponent is less than
# Emin, before any rounding).  The result in all cases is unchanged.
# The subnormal signal may be tested (or trapped) to determine if a given
# or operation (or sequence of operations) yielded a subnormal result.
class Subnormal
    super DecimalException
    
end

# Number got rounded (not  necessarily changed during rounding).
# This occurs and signals rounded whenever the result of an operation is
# rounded (that is, some zero or non-zero digits were discarded from the
# coefficient), or if an overflow or underflow condition occurs.  The
# result in all cases is unchanged.
# The rounded signal may be tested (or trapped) to determine if a given
# operation (or sequence of operations) caused a loss of precision.
class Rounded
    super DecimalException
    
end

# Numerical overflow.
# This occurs and signals overflow if the adjusted exponent of a result
# (from a conversion or from an operation that is not an attempt to divide
# by zero), after rounding, would be greater than the largest value that
# can be handled by the implementation (the value Emax).
# The result depends on the rounding mode:
# For round-half-up and round-half-even (and for round-half-down and
# round-up, if implemented), the result of the operation is [sign,inf],
# where sign is the sign of the intermediate result.  For round-down, the
# result is the largest finite number that can be represented in the
# current precision, with the sign of the intermediate result.  For
# round-ceiling, the result is the same as for round-down if the sign of
# the intermediate result is 1, or is [0,inf] otherwise.  For round-floor,
# the result is the same as for round-down if the sign of the intermediate
# result is 0, or is [1,inf] otherwise.  In all cases, Inexact and Rounded
# will also be raised.
class Overflow
    super Rounded
    super Inexact
    
    redef fun handle(context) is abstract
    
end

# Invalid context.  Unknown rounding, for example.
# This occurs and signals invalid-operation if an invalid context was
# detected during an operation.  This can occur if contexts are not checked
# on creation and either the precision exceeds the capability of the
# underlying concrete representation or an unknown or unsupported rounding
# was specified.  These aspects of the context need only be checked when
# the values are required to be used.  The result is [0,qNaN].
class InvalidContext
    super InvalidOperation
    
    redef fun handle(context) is abstract
    
end

# Floating point class for decimal arithmetic.
class Decimal
    
    # Swaps self/other and returns __divmod__.
    fun rdivmod(other, context: Object) is abstract
    
    # Just returns 10, as this is Decimal, :)
    fun radix is abstract
    
    fun ge(other, context: Object) is abstract
    
    fun gt(other, context: Object) is abstract
    
    # Return True if self is negative; otherwise return False.
    fun is_signed is abstract
    
    # Compare the two non-NaN decimal instances self and other.
    # Returns -1 if self < other, 0 if self == other and 1
    # if self > other.  This routine is for internal use only.
    private fun private_cmp(other: Object) is abstract
    
    # Swaps self/other and returns __truediv__.
    fun rtruediv(other, context: Object) is abstract
    
    # Returns self with the sign of other.
    fun copy_sign(other: Object) is abstract
    
    fun lt(other, context: Object) is abstract
    
    # Compares self to other using the abstract representations.
    # This is not like the standard compare, which use their numerical
    # value. Note that a total ordering is defined for all possible abstract
    # representations.
    fun compare_total(other: Object) is abstract
    
    # Return True if self is infinite; otherwise return False.
    fun is_infinite is abstract
    
    # Format a Decimal instance according to the given specifier.
    # The specifier should be a standard format specifier, with the
    # form described in PEP 3101.  Formatting types 'e', 'E', 'f',
    # 'F', 'g', 'G', 'n' and '%' are supported.  If the formatting
    # type is omitted it defaults to 'g' or 'G', depending on the
    # value of context.capitals.
    fun format(specifier, localeconv, context: Object) is abstract
    
    # Round 5 to even, rest to nearest.
    private fun private_round_half_even(prec: Object) is abstract
    
    # Represents the number as an instance of Decimal.
    fun repr is abstract
    
    # Remainder nearest to 0-  abs(remainder-near) <= other/2
    fun remainder_near(other, context: Object) is abstract
    
    # Returns whether self is an integer
    private fun private_isinteger is abstract
    
    # Compares the values numerically with their sign ignored.
    fun min_mag(other, context: Object) is abstract
    
    # self % other
    fun mod(other, context: Object) is abstract
    
    # Returns a rotated copy of self, value-of-other times.
    fun rotate(other, context: Object) is abstract
    
    # Rounds to the nearest integer, without raising inexact, rounded.
    fun to_integral_value(rounding, context: Object) is abstract
    
    # Swaps self/other and returns __floordiv__.
    fun rfloordiv(other, context: Object) is abstract
    
    # Return (self // other, self % other), to context.prec precision.
    # Assumes that neither self nor other is a NaN, that self is not
    # infinite and that other is nonzero.
    private fun private_divide(other, context: Object) is abstract
    
    # Round down unless digit prec-1 is 0 or 5.
    private fun private_round_05up(prec: Object) is abstract
    
    # Returns the smallest representable number larger than itself.
    fun next_plus(context: Object) is abstract
    
    # Rounds 5 up (away from 0)
    private fun private_round_half_up(prec: Object) is abstract
    
    # Converts a float to a decimal number, exactly.
    # Note that Decimal.from_float(0.1) is not the same as Decimal('0.1').
    # Since 0.1 is not exactly representable in binary floating point, the
    # value is stored as the nearest representable value which is
    # 0x1.999999999999ap-4.  The exact equivalent of the value in decimal
    # is 0.1000000000000000055511151231257827021181583404541015625.
    # >>> Decimal.from_float(0.1)
    # Decimal('0.1000000000000000055511151231257827021181583404541015625')
    # >>> Decimal.from_float(float('nan'))
    # Decimal('NaN')
    # >>> Decimal.from_float(float('inf'))
    # Decimal('Infinity')
    # >>> Decimal.from_float(-float('inf'))
    # Decimal('-Infinity')
    # >>> Decimal.from_float(-0.0)
    # Decimal('-0')
    fun from_float(cls, f: Object) is abstract
    
    fun reduce is abstract
    
    # Returns the exponent of the magnitude of self's MSD.
    # The result is the integer which is the exponent of the magnitude
    # of the most significant digit of self (as though it were truncated
    # to a single digit while maintaining the value of that digit and
    # without limiting the resulting exponent).
    fun logb(context: Object) is abstract
    
    # Return True if self is a qNaN or sNaN; otherwise return False.
    fun is_nan is abstract
    
    fun eq(other, context: Object) is abstract
    
    # Returns the same Decimal object.
    # As we do not have different encodings for the same number, the
    # received object already is in its canonical form.
    fun canonical(context: Object) is abstract
    
    # Return True if self is nonzero; otherwise return False.
    # NaNs and infinities are considered nonzero.
    fun nonzero is abstract
    
    # Return self - other
    fun sub(other, context: Object) is abstract
    
    # Returns a copy with the sign switched.
    # Rounds, if it has reason.
    fun neg(context: Object) is abstract
    
    # Returns the absolute value of self.
    # If the keyword argument 'round' is false, do not round.  The
    # expression self.__abs__(round=False) is equivalent to
    # self.copy_abs().
    fun abs(round, context: Object) is abstract
    
    # Returns the largest representable number smaller than itself.
    fun next_minus(context: Object) is abstract
    
    # Return self * other.
    # (+-) INF * 0 (or its reverse) raise InvalidOperation.
    fun mul(other, context: Object) is abstract
    
    # Return True if self is canonical; otherwise return False.
    # Currently, the encoding of a Decimal instance is always
    # canonical, so this method returns True for any Decimal.
    fun is_canonical is abstract
    
    # x.__hash__() <==> hash(x)
    fun hash is abstract
    
    # Return True if self is a signaling NaN; otherwise return False.
    fun is_snan is abstract
    
    # Returns whether the number is not actually one.
    # 0 if a number
    # 1 if NaN
    # 2 if sNaN
    private fun private_isnan is abstract
    
    private fun private_fill_logical(context, opa, opb: Object) is abstract
    
    fun le(other, context: Object) is abstract
    
    # Version of _check_nans used for the signaling comparisons
    # compare_signal, __le__, __lt__, __ge__, __gt__.
    # Signal InvalidOperation if either self or other is a (quiet
    # or signaling) NaN.  Signaling NaNs take precedence over quiet
    # NaNs.
    # Return 0 if neither operand is a NaN.
    private fun private_compare_check_nans(other, context: Object) is abstract
    
    # Compares the values numerically with their sign ignored.
    fun max_mag(other, context: Object) is abstract
    
    # Swaps self/other and returns __pow__.
    fun rpow(other, context: Object) is abstract
    
    # Return other - self
    fun rsub(other, context: Object) is abstract
    
    # Returns a shifted copy of self, value-of-other times.
    fun shift(other, context: Object) is abstract
    
    # Invert all its digits.
    fun logical_invert(context: Object) is abstract
    
    # Attempt to compute self**other exactly.
    # Given Decimals self and other and an integer p, attempt to
    # compute an exact result for the power self**other, with p
    # digits of precision.  Return None if self**other is not
    # exactly representable in p digits.
    # Assumes that elimination of special cases has already been
    # performed: self and other must both be nonspecial; self must
    # be positive and not numerically equal to 1; other must be
    # nonzero.  For efficiency, other._exp should not be too large,
    # so that 10**abs(other._exp) is a feasible calculation.
    private fun private_power_exact(p, other: Object) is abstract
    
    # Returns the natural (base e) logarithm of self.
    fun ln(context: Object) is abstract
    
    # Rounds to a nearby integer.
    # If no rounding mode is specified, take the rounding mode from
    # the context.  This method raises the Rounded and Inexact flags
    # when appropriate.
    # See also: to_integral_value, which does exactly the same as
    # this method except that it doesn't raise Inexact or Rounded.
    fun to_integral_exact(rounding, context: Object) is abstract
    
    # Returns whether the number is not actually one.
    # if self, other are sNaN, signal
    # if self, other are NaN return nan
    # return 0
    # Done before operations.
    private fun private_check_nans(other, context: Object) is abstract
    
    # Returns a copy with the sign set to 0.
    fun copy_abs is abstract
    
    # Round 5 down
    private fun private_round_half_down(prec: Object) is abstract
    
    # Return the adjusted exponent of self
    fun adjusted is abstract
    
    # Return self ** other [ % modulo].
    # With two arguments, compute self**other.
    # With three arguments, compute (self**other) % modulo.  For the
    # three argument form, the following restrictions on the
    # arguments hold:
    # - all three arguments must be integral
    # - other must be nonnegative
    # - either self or other (or both) must be nonzero
    # - modulo must be nonzero and must have at most p digits,
    # where p is the context precision.
    # If any of these restrictions is violated the InvalidOperation
    # flag is raised.
    # The result of pow(self, other, modulo) is identical to the
    # result that would be obtained by computing (self**other) %
    # modulo with unbounded precision, but is computed more
    # efficiently.  It is always exact.
    fun pow(other, modulo, context: Object) is abstract
    
    # Return True if self is subnormal; otherwise return False.
    fun is_subnormal(context: Object) is abstract
    
    # Float representation.
    fun float is abstract
    
    # Return True if self is a logical operand.
    # For being logical, it must be a finite number with a sign of 0,
    # an exponent of 0, and a coefficient whose digits must all be
    # either 0 or 1.
    private fun private_islogical is abstract
    
    # Returns a copy, unless it is a sNaN.
    # Rounds the number (if more then precision digits)
    fun pos(context: Object) is abstract
    
    # Compares self to the other operand numerically.
    # It's pretty much like compare(), but all NaNs signal, with signaling
    # NaNs taking precedence over quiet NaNs.
    fun compare_signal(other, context: Object) is abstract
    
    # Rounds away from 0.
    private fun private_round_up(prec: Object) is abstract
    
    # Return (self // other, self % other)
    fun divmod(other, context: Object) is abstract
    
    # Returns self operand after adding the second value to its exp.
    fun scaleb(other, context: Object) is abstract
    
    # Returns whether the number is infinite
    # 0 if finite or not a number
    # 1 if +INF
    # -1 if -INF
    private fun private_isinfinity is abstract
    
    # Represents the number as a triple tuple.
    # To show the internals exactly as they are.
    fun as_tuple is abstract
    
    # Applies an 'xor' operation between self and other's digits.
    fun logical_xor(other, context: Object) is abstract
    
    # Return True if self and other have the same exponent; otherwise
    # return False.
    # If either operand is a special value, the following rules are used:
    # * return True if both operands are infinities
    # * return True if both operands are NaNs
    # * otherwise, return False.
    fun same_quantum(other: Object) is abstract
    
    # Returns self + other.
    # -INF + INF (or the reverse) cause InvalidOperation errors.
    fun add(other, context: Object) is abstract
    
    # Converts to a long.
    # Equivalent to long(int(self))
    fun long is abstract
    
    # Return True if self is a zero; otherwise return False.
    fun is_zero is abstract
    
    # Round a nonzero, nonspecial Decimal to a fixed number of
    # significant figures, using the given rounding mode.
    # Infinities, NaNs and zeros are returned unaltered.
    # This operation is quiet: it raises no flags, and uses no
    # information from the context.
    private fun private_round(rounding, places: Object) is abstract
    
    # Swaps self/other and returns __mod__.
    fun rmod(other, context: Object) is abstract
    
    # Returns the base 10 logarithm of self.
    fun log10(context: Object) is abstract
    
    # Returns True if self is even.  Assumes self is an integer.
    private fun private_iseven is abstract
    
    # Fused multiply-add.
    # Returns self*other+third with no rounding of the intermediate
    # product self*other.
    # self and other are multiplied together, with no rounding of
    # the result.  The third operand is then added to the result,
    # and a single final rounding is performed.
    fun fma(other, third, context: Object) is abstract
    
    # Round if it is necessary to keep self within prec precision.
    # Rounds and fixes the exponent.  Does not raise on a sNaN.
    # Arguments:
    # self - Decimal instance
    # context - context used.
    private fun private_fix(context: Object) is abstract
    
    # Decapitate the payload of a NaN to fit the context
    private fun private_fix_nan(context: Object) is abstract
    
    # Also known as round-towards-0, truncate.
    private fun private_round_down(prec: Object) is abstract
    
    fun copy is abstract
    
    # Return True if self is a quiet NaN; otherwise return False.
    fun is_qnan is abstract
    
    # Quantize self so its exponent is the same as that of exp.
    # Similar to self._rescale(exp._exp) but with error checking.
    fun quantize(rounding, exp, context, watchexp: Object) is abstract
    
    # Convert to engineering-type string.
    # Engineering notation has an exponent which is a multiple of 3, so there
    # are up to 3 digits left of the decimal place.
    # Same rules for when in exponential and when as a value as in __str__.
    fun to_eng_string(context: Object) is abstract
    
    # Returns the number closest to self, in the direction towards other.
    # The result is the closest representable number to self
    # (excluding self) that is in the direction towards other,
    # unless both have the same value.  If the two operands are
    # numerically equal, then the result is a copy of self with the
    # sign set to be the same as the sign of other.
    fun next_toward(other, context: Object) is abstract
    
    # Return string representation of the number in scientific notation.
    # Captures all of the information in the underlying representation.
    fun str(context, eng: Object) is abstract
    
    # Applies an 'and' operation between self and other's digits.
    fun logical_and(other, context: Object) is abstract
    
    # Return True if self is a normal number; otherwise return False.
    fun is_normal(context: Object) is abstract
    
    # Compares one to another.
    # -1 => a < b
    # 0  => a = b
    # 1  => a > b
    # NaN => one is NaN
    # Like __cmp__, but returns Decimal instances.
    fun compare(other, context: Object) is abstract
    
    # Converts self to an int, truncating if necessary.
    fun int is abstract
    
    # Applies an 'or' operation between self and other's digits.
    fun logical_or(other, context: Object) is abstract
    
    # Returns an indication of the class of self.
    # The class is one of the following strings:
    # sNaN
    # NaN
    # -Infinity
    # -Normal
    # -Subnormal
    # -Zero
    # +Zero
    # +Subnormal
    # +Normal
    # +Infinity
    fun number_class(context: Object) is abstract
    
    fun conjugate is abstract
    
    fun deepcopy(memo: Object) is abstract
    
    # Returns a copy with the sign inverted.
    fun copy_negate is abstract
    
    # Normalize- strip trailing 0s, change anything equal to 0 to 0e0
    fun normalize(context: Object) is abstract
    
    # Returns the smaller value.
    # Like min(self, other) except if one is not a number, returns
    # NaN (and signals if one is sNaN).  Also rounds.
    fun min(other, context: Object) is abstract
    
    fun ne(other, context: Object) is abstract
    
    # Return the square root of self.
    fun sqrt(context: Object) is abstract
    
    fun complex is abstract
    
    # Return self / other.
    fun truediv(other, context: Object) is abstract
    
    # Rounds down (not towards 0 if negative)
    private fun private_round_floor(prec: Object) is abstract
    
    # Returns the larger value.
    # Like max(self, other) except if one is not a number, returns
    # NaN (and signals if one is sNaN).  Also rounds.
    fun max(other, context: Object) is abstract
    
    # Return True if self is finite; otherwise return False.
    # A Decimal instance is considered finite if it is neither
    # infinite nor a NaN.
    fun is_finite is abstract
    
    # Rescale self so that the exponent is exp, either by padding with zeros
    # or by truncating digits, using the given rounding mode.
    # Specials are returned without change.  This operation is
    # quiet: it raises no flags, and uses no information from the
    # context.
    # exp = exp to scale to (an integer)
    # rounding = rounding mode
    private fun private_rescale(rounding, exp: Object) is abstract
    
    # Compares self to other using abstract repr., ignoring sign.
    # Like compare_total, but with operand's sign ignored and assumed to be 0.
    fun compare_total_mag(other: Object) is abstract
    
    # Three argument version of __pow__
    private fun private_power_modulo(other, modulo, context: Object) is abstract
    
    # Rounds up (not away from 0 if negative.)
    private fun private_round_ceiling(prec: Object) is abstract
    
    # self // other
    fun floordiv(other, context: Object) is abstract
    
    # Returns e ** self.
    fun exp(context: Object) is abstract
    
    # Compute a lower bound for the adjusted exponent of self.log10().
    # In other words, find r such that self.log10() >= 10**r.
    # Assumes that self is finite and positive and that self != 1.
    private fun private_log10_exp_bound is abstract
    
    # Compute a lower bound for the adjusted exponent of self.ln().
    # In other words, compute r such that self.ln() >= 10**r.  Assumes
    # that self is finite and positive and that self != 1.
    private fun private_ln_exp_bound is abstract
    
end

# Had to round, losing information.
# This occurs and signals inexact whenever the result of an operation is
# not exact (that is, it needed to be rounded and any discarded digits
# were non-zero), or if an overflow or underflow condition occurs.  The
# result in all cases is unchanged.
# The inexact signal may be tested (or trapped) to determine if a given
# operation (or sequence of operations) was inexact.
class Inexact
    super DecimalException
    
end

# Numerical underflow with result rounded to 0.
# This occurs and signals underflow if a result is inexact and the
# adjusted exponent of the result would be smaller (more negative) than
# the smallest value that can be handled by the implementation (the value
# Emin).  That is, the result is both inexact and subnormal.
# The result after an underflow will be a subnormal number rounded, if
# necessary, so that its exponent is not less than Etiny.  This may result
# in 0 with the sign of the intermediate result and an exponent of Etiny.
# In all cases, Inexact, Rounded, and Subnormal will also be raised.
class Underflow
    super Subnormal
    super Rounded
    super Inexact
    
end

redef class Sys
    
end

# Trying to convert badly formed string.
# This occurs and signals invalid-operation if an string is being
# converted to a number and it does not conform to the numeric string
# syntax.  The result is [0,qNaN].
class ConversionSyntax
    super InvalidOperation
    
    redef fun handle(context) is abstract
    
end

# Division by 0.
# This occurs and signals division-by-zero if division of a finite number
# by zero was attempted (during a divide-integer or divide operation, or a
# power operation with negative right-hand operand), and the dividend was
# not zero.
# The result of the operation is [sign,inf], where sign is the exclusive
# or of the signs of the operands for divide, or is 1 for an odd power of
# -0, for power.
class DivisionByZero
    super DecimalException
    super ZeroDivisionError
    
    redef fun handle(context) is abstract
    
end

# Class to compute, store, and allow retrieval of, digits of the
# constant log(10) = 2.302585....  This constant is needed by
# Decimal.ln, Decimal.log10, Decimal.exp and Decimal.__pow__.
private class Log10Memoize
    
    init do end
    
    # Given an integer p >= 0, return floor(10**p)*log(10).
    # For example, self.getdigits(3) returns 2302.
    fun getdigits(p: Object) is abstract
    
end

# Contains the context for a Decimal instance.
# Contains:
# prec - precision (for use in rounding, division, square roots..)
# rounding - rounding type (how you round)
# traps - If traps[exception] = 1, then the exception is
# raised when it is caused.  Otherwise, a value is
# substituted in.
# flags  - When an exception is caused, flags[exception] is set.
# (Whether or not the trap_enabler is set)
# Should be reset by user of Decimal instance.
# Emin -   Minimum exponent
# Emax -   Maximum exponent
# capitals -      If 1, 1*10^1 is printed as 1E+1.
# If 0, printed as 1e1
# _clamp - If 1, change exponents if too high (Default 0)
class Context
    
    # Converts a number to a string, using scientific notation.
    # The operation is not affected by the context.
    fun to_sci_string(a: Object) is abstract
    
    # Just returns 10, as this is Decimal, :)
    # >>> ExtendedContext.radix()
    # Decimal('10')
    fun radix is abstract
    
    # Return the difference between the two operands.
    # >>> ExtendedContext.subtract(Decimal('1.3'), Decimal('1.07'))
    # Decimal('0.23')
    # >>> ExtendedContext.subtract(Decimal('1.3'), Decimal('1.30'))
    # Decimal('0.00')
    # >>> ExtendedContext.subtract(Decimal('1.3'), Decimal('2.07'))
    # Decimal('-0.77')
    # >>> ExtendedContext.subtract(8, 5)
    # Decimal('3')
    # >>> ExtendedContext.subtract(Decimal(8), 5)
    # Decimal('3')
    # >>> ExtendedContext.subtract(8, Decimal(5))
    # Decimal('3')
    fun subtract(a, b: Object) is abstract
    
    # Decimal division in a specified context.
    # >>> ExtendedContext.divide(Decimal('1'), Decimal('3'))
    # Decimal('0.333333333')
    # >>> ExtendedContext.divide(Decimal('2'), Decimal('3'))
    # Decimal('0.666666667')
    # >>> ExtendedContext.divide(Decimal('5'), Decimal('2'))
    # Decimal('2.5')
    # >>> ExtendedContext.divide(Decimal('1'), Decimal('10'))
    # Decimal('0.1')
    # >>> ExtendedContext.divide(Decimal('12'), Decimal('12'))
    # Decimal('1')
    # >>> ExtendedContext.divide(Decimal('8.00'), Decimal('2'))
    # Decimal('4.00')
    # >>> ExtendedContext.divide(Decimal('2.400'), Decimal('2.0'))
    # Decimal('1.20')
    # >>> ExtendedContext.divide(Decimal('1000'), Decimal('100'))
    # Decimal('10')
    # >>> ExtendedContext.divide(Decimal('1000'), Decimal('1'))
    # Decimal('1000')
    # >>> ExtendedContext.divide(Decimal('2.40E+6'), Decimal('2'))
    # Decimal('1.20E+6')
    # >>> ExtendedContext.divide(5, 5)
    # Decimal('1')
    # >>> ExtendedContext.divide(Decimal(5), 5)
    # Decimal('1')
    # >>> ExtendedContext.divide(5, Decimal(5))
    # Decimal('1')
    fun divide(a, b: Object) is abstract
    
    # Return True if the operand is subnormal; otherwise return False.
    # >>> c = ExtendedContext.copy()
    # >>> c.Emin = -999
    # >>> c.Emax = 999
    # >>> c.is_subnormal(Decimal('2.50'))
    # False
    # >>> c.is_subnormal(Decimal('0.1E-999'))
    # True
    # >>> c.is_subnormal(Decimal('0.00'))
    # False
    # >>> c.is_subnormal(Decimal('-Inf'))
    # False
    # >>> c.is_subnormal(Decimal('NaN'))
    # False
    # >>> c.is_subnormal(1)
    # False
    fun is_subnormal(a: Object) is abstract
    
    # Compares values numerically.
    # If the signs of the operands differ, a value representing each operand
    # ('-1' if the operand is less than zero, '0' if the operand is zero or
    # negative zero, or '1' if the operand is greater than zero) is used in
    # place of that operand for the comparison instead of the actual
    # operand.
    # The comparison is then effected by subtracting the second operand from
    # the first and then returning a value according to the result of the
    # subtraction: '-1' if the result is less than zero, '0' if the result is
    # zero or negative zero, or '1' if the result is greater than zero.
    # >>> ExtendedContext.compare(Decimal('2.1'), Decimal('3'))
    # Decimal('-1')
    # >>> ExtendedContext.compare(Decimal('2.1'), Decimal('2.1'))
    # Decimal('0')
    # >>> ExtendedContext.compare(Decimal('2.1'), Decimal('2.10'))
    # Decimal('0')
    # >>> ExtendedContext.compare(Decimal('3'), Decimal('2.1'))
    # Decimal('1')
    # >>> ExtendedContext.compare(Decimal('2.1'), Decimal('-3'))
    # Decimal('1')
    # >>> ExtendedContext.compare(Decimal('-3'), Decimal('2.1'))
    # Decimal('-1')
    # >>> ExtendedContext.compare(1, 2)
    # Decimal('-1')
    # >>> ExtendedContext.compare(Decimal(1), 2)
    # Decimal('-1')
    # >>> ExtendedContext.compare(1, Decimal(2))
    # Decimal('-1')
    fun compare(a, b: Object) is abstract
    
    # Returns maximum exponent (= Emax - prec + 1)
    fun etop is abstract
    
    # Reset all flags to zero
    fun clear_flags is abstract
    
    # Stop ignoring the flags, if they are raised
    private fun private_regard_flags is abstract
    
    # Compares the values of the two operands numerically.
    # It's pretty much like compare(), but all NaNs signal, with signaling
    # NaNs taking precedence over quiet NaNs.
    # >>> c = ExtendedContext
    # >>> c.compare_signal(Decimal('2.1'), Decimal('3'))
    # Decimal('-1')
    # >>> c.compare_signal(Decimal('2.1'), Decimal('2.1'))
    # Decimal('0')
    # >>> c.flags[InvalidOperation] = 0
    # >>> print c.flags[InvalidOperation]
    # 0
    # >>> c.compare_signal(Decimal('NaN'), Decimal('2.1'))
    # Decimal('NaN')
    # >>> print c.flags[InvalidOperation]
    # 1
    # >>> c.flags[InvalidOperation] = 0
    # >>> print c.flags[InvalidOperation]
    # 0
    # >>> c.compare_signal(Decimal('sNaN'), Decimal('2.1'))
    # Decimal('NaN')
    # >>> print c.flags[InvalidOperation]
    # 1
    # >>> c.compare_signal(-1, 2)
    # Decimal('-1')
    # >>> c.compare_signal(Decimal(-1), 2)
    # Decimal('-1')
    # >>> c.compare_signal(-1, Decimal(2))
    # Decimal('-1')
    fun compare_signal(a, b: Object) is abstract
    
    # Applies the logical operation 'and' between each operand's digits.
    # The operands must be both logical numbers.
    # >>> ExtendedContext.logical_and(Decimal('0'), Decimal('0'))
    # Decimal('0')
    # >>> ExtendedContext.logical_and(Decimal('0'), Decimal('1'))
    # Decimal('0')
    # >>> ExtendedContext.logical_and(Decimal('1'), Decimal('0'))
    # Decimal('0')
    # >>> ExtendedContext.logical_and(Decimal('1'), Decimal('1'))
    # Decimal('1')
    # >>> ExtendedContext.logical_and(Decimal('1100'), Decimal('1010'))
    # Decimal('1000')
    # >>> ExtendedContext.logical_and(Decimal('1111'), Decimal('10'))
    # Decimal('10')
    # >>> ExtendedContext.logical_and(110, 1101)
    # Decimal('100')
    # >>> ExtendedContext.logical_and(Decimal(110), 1101)
    # Decimal('100')
    # >>> ExtendedContext.logical_and(110, Decimal(1101))
    # Decimal('100')
    fun logical_and(a, b: Object) is abstract
    
    # Return (a // b, a % b).
    # >>> ExtendedContext.divmod(Decimal(8), Decimal(3))
    # (Decimal('2'), Decimal('2'))
    # >>> ExtendedContext.divmod(Decimal(8), Decimal(4))
    # (Decimal('2'), Decimal('0'))
    # >>> ExtendedContext.divmod(8, 4)
    # (Decimal('2'), Decimal('0'))
    # >>> ExtendedContext.divmod(Decimal(8), 4)
    # (Decimal('2'), Decimal('0'))
    # >>> ExtendedContext.divmod(8, Decimal(4))
    # (Decimal('2'), Decimal('0'))
    fun divmod(a, b: Object) is abstract
    
    # Returns the first operand after adding the second value its exp.
    # >>> ExtendedContext.scaleb(Decimal('7.50'), Decimal('-2'))
    # Decimal('0.0750')
    # >>> ExtendedContext.scaleb(Decimal('7.50'), Decimal('0'))
    # Decimal('7.50')
    # >>> ExtendedContext.scaleb(Decimal('7.50'), Decimal('3'))
    # Decimal('7.50E+3')
    # >>> ExtendedContext.scaleb(1, 4)
    # Decimal('1E+4')
    # >>> ExtendedContext.scaleb(Decimal(1), 4)
    # Decimal('1E+4')
    # >>> ExtendedContext.scaleb(1, Decimal(4))
    # Decimal('1E+4')
    fun scaleb(a, b: Object) is abstract
    
    # Return True if the operand is a qNaN or sNaN;
    # otherwise return False.
    # >>> ExtendedContext.is_nan(Decimal('2.50'))
    # False
    # >>> ExtendedContext.is_nan(Decimal('NaN'))
    # True
    # >>> ExtendedContext.is_nan(Decimal('-sNaN'))
    # True
    # >>> ExtendedContext.is_nan(1)
    # False
    fun is_nan(a: Object) is abstract
    
    # Returns a copy of the operand with the sign inverted.
    # >>> ExtendedContext.copy_negate(Decimal('101.5'))
    # Decimal('-101.5')
    # >>> ExtendedContext.copy_negate(Decimal('-101.5'))
    # Decimal('101.5')
    # >>> ExtendedContext.copy_negate(1)
    # Decimal('-1')
    fun copy_negate(a: Object) is abstract
    
    # Returns the same Decimal object.
    # As we do not have different encodings for the same number, the
    # received object already is in its canonical form.
    # >>> ExtendedContext.canonical(Decimal('2.50'))
    # Decimal('2.50')
    fun canonical(a: Object) is abstract
    
    # Applies the logical operation 'xor' between each operand's digits.
    # The operands must be both logical numbers.
    # >>> ExtendedContext.logical_xor(Decimal('0'), Decimal('0'))
    # Decimal('0')
    # >>> ExtendedContext.logical_xor(Decimal('0'), Decimal('1'))
    # Decimal('1')
    # >>> ExtendedContext.logical_xor(Decimal('1'), Decimal('0'))
    # Decimal('1')
    # >>> ExtendedContext.logical_xor(Decimal('1'), Decimal('1'))
    # Decimal('0')
    # >>> ExtendedContext.logical_xor(Decimal('1100'), Decimal('1010'))
    # Decimal('110')
    # >>> ExtendedContext.logical_xor(Decimal('1111'), Decimal('10'))
    # Decimal('1101')
    # >>> ExtendedContext.logical_xor(110, 1101)
    # Decimal('1011')
    # >>> ExtendedContext.logical_xor(Decimal(110), 1101)
    # Decimal('1011')
    # >>> ExtendedContext.logical_xor(110, Decimal(1101))
    # Decimal('1011')
    fun logical_xor(a, b: Object) is abstract
    
    # Returns True if the two operands have the same exponent.
    # The result is never affected by either the sign or the coefficient of
    # either operand.
    # >>> ExtendedContext.same_quantum(Decimal('2.17'), Decimal('0.001'))
    # False
    # >>> ExtendedContext.same_quantum(Decimal('2.17'), Decimal('0.01'))
    # True
    # >>> ExtendedContext.same_quantum(Decimal('2.17'), Decimal('1'))
    # False
    # >>> ExtendedContext.same_quantum(Decimal('Inf'), Decimal('-Inf'))
    # True
    # >>> ExtendedContext.same_quantum(10000, -1)
    # True
    # >>> ExtendedContext.same_quantum(Decimal(10000), -1)
    # True
    # >>> ExtendedContext.same_quantum(10000, Decimal(-1))
    # True
    fun same_quantum(a, b: Object) is abstract
    
    # min compares two values numerically and returns the minimum.
    # If either operand is a NaN then the general rules apply.
    # Otherwise, the operands are compared as though by the compare
    # operation.  If they are numerically equal then the left-hand operand
    # is chosen as the result.  Otherwise the minimum (closer to negative
    # infinity) of the two operands is chosen as the result.
    # >>> ExtendedContext.min(Decimal('3'), Decimal('2'))
    # Decimal('2')
    # >>> ExtendedContext.min(Decimal('-10'), Decimal('3'))
    # Decimal('-10')
    # >>> ExtendedContext.min(Decimal('1.0'), Decimal('1'))
    # Decimal('1.0')
    # >>> ExtendedContext.min(Decimal('7'), Decimal('NaN'))
    # Decimal('7')
    # >>> ExtendedContext.min(1, 2)
    # Decimal('1')
    # >>> ExtendedContext.min(Decimal(1), 2)
    # Decimal('1')
    # >>> ExtendedContext.min(1, Decimal(29))
    # Decimal('1')
    fun min(a, b: Object) is abstract
    
    # Copies the second operand's sign to the first one.
    # In detail, it returns a copy of the first operand with the sign
    # equal to the sign of the second operand.
    # >>> ExtendedContext.copy_sign(Decimal( '1.50'), Decimal('7.33'))
    # Decimal('1.50')
    # >>> ExtendedContext.copy_sign(Decimal('-1.50'), Decimal('7.33'))
    # Decimal('1.50')
    # >>> ExtendedContext.copy_sign(Decimal( '1.50'), Decimal('-7.33'))
    # Decimal('-1.50')
    # >>> ExtendedContext.copy_sign(Decimal('-1.50'), Decimal('-7.33'))
    # Decimal('-1.50')
    # >>> ExtendedContext.copy_sign(1, -2)
    # Decimal('-1')
    # >>> ExtendedContext.copy_sign(Decimal(1), -2)
    # Decimal('-1')
    # >>> ExtendedContext.copy_sign(1, Decimal(-2))
    # Decimal('-1')
    fun copy_sign(a, b: Object) is abstract
    
    # Return True if the operand is a quiet NaN; otherwise return False.
    # >>> ExtendedContext.is_qnan(Decimal('2.50'))
    # False
    # >>> ExtendedContext.is_qnan(Decimal('NaN'))
    # True
    # >>> ExtendedContext.is_qnan(Decimal('sNaN'))
    # False
    # >>> ExtendedContext.is_qnan(1)
    # False
    fun is_qnan(a: Object) is abstract
    
    # Ignore the flags, if they are raised
    private fun private_ignore_flags is abstract
    
    init do end
    
    # Square root of a non-negative number to context precision.
    # If the result must be inexact, it is rounded using the round-half-even
    # algorithm.
    # >>> ExtendedContext.sqrt(Decimal('0'))
    # Decimal('0')
    # >>> ExtendedContext.sqrt(Decimal('-0'))
    # Decimal('-0')
    # >>> ExtendedContext.sqrt(Decimal('0.39'))
    # Decimal('0.624499800')
    # >>> ExtendedContext.sqrt(Decimal('100'))
    # Decimal('10')
    # >>> ExtendedContext.sqrt(Decimal('1'))
    # Decimal('1')
    # >>> ExtendedContext.sqrt(Decimal('1.0'))
    # Decimal('1.0')
    # >>> ExtendedContext.sqrt(Decimal('1.00'))
    # Decimal('1.0')
    # >>> ExtendedContext.sqrt(Decimal('7'))
    # Decimal('2.64575131')
    # >>> ExtendedContext.sqrt(Decimal('10'))
    # Decimal('3.16227766')
    # >>> ExtendedContext.sqrt(2)
    # Decimal('1.41421356')
    # >>> ExtendedContext.prec
    # 9
    fun sqrt(a: Object) is abstract
    
    # Returns the absolute value of the operand.
    # If the operand is negative, the result is the same as using the minus
    # operation on the operand.  Otherwise, the result is the same as using
    # the plus operation on the operand.
    # >>> ExtendedContext.abs(Decimal('2.1'))
    # Decimal('2.1')
    # >>> ExtendedContext.abs(Decimal('-100'))
    # Decimal('100')
    # >>> ExtendedContext.abs(Decimal('101.5'))
    # Decimal('101.5')
    # >>> ExtendedContext.abs(Decimal('-101.5'))
    # Decimal('101.5')
    # >>> ExtendedContext.abs(-1)
    # Decimal('1')
    fun abs(a: Object) is abstract
    
    # Invert all the digits in the operand.
    # The operand must be a logical number.
    # >>> ExtendedContext.logical_invert(Decimal('0'))
    # Decimal('111111111')
    # >>> ExtendedContext.logical_invert(Decimal('1'))
    # Decimal('111111110')
    # >>> ExtendedContext.logical_invert(Decimal('111111111'))
    # Decimal('0')
    # >>> ExtendedContext.logical_invert(Decimal('101010101'))
    # Decimal('10101010')
    # >>> ExtendedContext.logical_invert(1101)
    # Decimal('111110010')
    fun logical_invert(a: Object) is abstract
    
    # Return the sum of the two operands.
    # >>> ExtendedContext.add(Decimal('12'), Decimal('7.00'))
    # Decimal('19.00')
    # >>> ExtendedContext.add(Decimal('1E+2'), Decimal('1.01E+4'))
    # Decimal('1.02E+4')
    # >>> ExtendedContext.add(1, Decimal(2))
    # Decimal('3')
    # >>> ExtendedContext.add(Decimal(8), 5)
    # Decimal('13')
    # >>> ExtendedContext.add(5, 5)
    # Decimal('10')
    fun add(a, b: Object) is abstract
    
    # Divides two numbers and returns the integer part of the result.
    # >>> ExtendedContext.divide_int(Decimal('2'), Decimal('3'))
    # Decimal('0')
    # >>> ExtendedContext.divide_int(Decimal('10'), Decimal('3'))
    # Decimal('3')
    # >>> ExtendedContext.divide_int(Decimal('1'), Decimal('0.3'))
    # Decimal('3')
    # >>> ExtendedContext.divide_int(10, 3)
    # Decimal('3')
    # >>> ExtendedContext.divide_int(Decimal(10), 3)
    # Decimal('3')
    # >>> ExtendedContext.divide_int(10, Decimal(3))
    # Decimal('3')
    fun divide_int(a, b: Object) is abstract
    
    # multiply multiplies two operands.
    # If either operand is a special value then the general rules apply.
    # Otherwise, the operands are multiplied together
    # ('long multiplication'), resulting in a number which may be as long as
    # the sum of the lengths of the two operands.
    # >>> ExtendedContext.multiply(Decimal('1.20'), Decimal('3'))
    # Decimal('3.60')
    # >>> ExtendedContext.multiply(Decimal('7'), Decimal('3'))
    # Decimal('21')
    # >>> ExtendedContext.multiply(Decimal('0.9'), Decimal('0.8'))
    # Decimal('0.72')
    # >>> ExtendedContext.multiply(Decimal('0.9'), Decimal('-0'))
    # Decimal('-0.0')
    # >>> ExtendedContext.multiply(Decimal('654321'), Decimal('654321'))
    # Decimal('4.28135971E+11')
    # >>> ExtendedContext.multiply(7, 7)
    # Decimal('49')
    # >>> ExtendedContext.multiply(Decimal(7), 7)
    # Decimal('49')
    # >>> ExtendedContext.multiply(7, Decimal(7))
    # Decimal('49')
    fun multiply(a, b: Object) is abstract
    
    # Return True if the operand is a zero; otherwise return False.
    # >>> ExtendedContext.is_zero(Decimal('0'))
    # True
    # >>> ExtendedContext.is_zero(Decimal('2.50'))
    # False
    # >>> ExtendedContext.is_zero(Decimal('-0E+2'))
    # True
    # >>> ExtendedContext.is_zero(1)
    # False
    # >>> ExtendedContext.is_zero(0)
    # True
    fun is_zero(a: Object) is abstract
    
    # Returns a copy of the decimal object.
    # >>> ExtendedContext.copy_decimal(Decimal('2.1'))
    # Decimal('2.1')
    # >>> ExtendedContext.copy_decimal(Decimal('-1.00'))
    # Decimal('-1.00')
    # >>> ExtendedContext.copy_decimal(1)
    # Decimal('1')
    fun copy_decimal(a: Object) is abstract
    
    # Returns the largest representable number smaller than a.
    # >>> c = ExtendedContext.copy()
    # >>> c.Emin = -999
    # >>> c.Emax = 999
    # >>> ExtendedContext.next_minus(Decimal('1'))
    # Decimal('0.999999999')
    # >>> c.next_minus(Decimal('1E-1007'))
    # Decimal('0E-1007')
    # >>> ExtendedContext.next_minus(Decimal('-1.00000003'))
    # Decimal('-1.00000004')
    # >>> c.next_minus(Decimal('Infinity'))
    # Decimal('9.99999999E+999')
    # >>> c.next_minus(1)
    # Decimal('0.999999999')
    fun next_minus(a: Object) is abstract
    
    # Plus corresponds to unary prefix plus in Python.
    # The operation is evaluated using the same rules as add; the
    # operation plus(a) is calculated as add('0', a) where the '0'
    # has the same exponent as the operand.
    # >>> ExtendedContext.plus(Decimal('1.3'))
    # Decimal('1.3')
    # >>> ExtendedContext.plus(Decimal('-1.3'))
    # Decimal('-1.3')
    # >>> ExtendedContext.plus(-1)
    # Decimal('-1')
    fun plus(a: Object) is abstract
    
    # Return True if the operand is canonical; otherwise return False.
    # Currently, the encoding of a Decimal instance is always
    # canonical, so this method returns True for any Decimal.
    # >>> ExtendedContext.is_canonical(Decimal('2.50'))
    # True
    fun is_canonical(a: Object) is abstract
    
    # Returns the base 10 logarithm of the operand.
    # >>> c = ExtendedContext.copy()
    # >>> c.Emin = -999
    # >>> c.Emax = 999
    # >>> c.log10(Decimal('0'))
    # Decimal('-Infinity')
    # >>> c.log10(Decimal('0.001'))
    # Decimal('-3')
    # >>> c.log10(Decimal('1.000'))
    # Decimal('0')
    # >>> c.log10(Decimal('2'))
    # Decimal('0.301029996')
    # >>> c.log10(Decimal('10'))
    # Decimal('1')
    # >>> c.log10(Decimal('70'))
    # Decimal('1.84509804')
    # >>> c.log10(Decimal('+Infinity'))
    # Decimal('Infinity')
    # >>> c.log10(0)
    # Decimal('-Infinity')
    # >>> c.log10(1)
    # Decimal('0')
    fun log10(a: Object) is abstract
    
    # Returns a multiplied by b, plus c.
    # The first two operands are multiplied together, using multiply,
    # the third operand is then added to the result of that
    # multiplication, using add, all with only one final rounding.
    # >>> ExtendedContext.fma(Decimal('3'), Decimal('5'), Decimal('7'))
    # Decimal('22')
    # >>> ExtendedContext.fma(Decimal('3'), Decimal('-5'), Decimal('7'))
    # Decimal('-8')
    # >>> ExtendedContext.fma(Decimal('888565290'), Decimal('1557.96930'), Decimal('-86087.7578'))
    # Decimal('1.38435736E+12')
    # >>> ExtendedContext.fma(1, 3, 4)
    # Decimal('7')
    # >>> ExtendedContext.fma(1, Decimal(3), 4)
    # Decimal('7')
    # >>> ExtendedContext.fma(1, 3, Decimal(4))
    # Decimal('7')
    fun fma(a, c, b: Object) is abstract
    
    # normalize reduces an operand to its simplest form.
    # Essentially a plus operation with all trailing zeros removed from the
    # result.
    # >>> ExtendedContext.normalize(Decimal('2.1'))
    # Decimal('2.1')
    # >>> ExtendedContext.normalize(Decimal('-2.0'))
    # Decimal('-2')
    # >>> ExtendedContext.normalize(Decimal('1.200'))
    # Decimal('1.2')
    # >>> ExtendedContext.normalize(Decimal('-120'))
    # Decimal('-1.2E+2')
    # >>> ExtendedContext.normalize(Decimal('120.00'))
    # Decimal('1.2E+2')
    # >>> ExtendedContext.normalize(Decimal('0.00'))
    # Decimal('0')
    # >>> ExtendedContext.normalize(6)
    # Decimal('6')
    fun normalize(a: Object) is abstract
    
    # Compares two operands using their abstract representation.
    # This is not like the standard compare, which use their numerical
    # value. Note that a total ordering is defined for all possible abstract
    # representations.
    # >>> ExtendedContext.compare_total(Decimal('12.73'), Decimal('127.9'))
    # Decimal('-1')
    # >>> ExtendedContext.compare_total(Decimal('-127'),  Decimal('12'))
    # Decimal('-1')
    # >>> ExtendedContext.compare_total(Decimal('12.30'), Decimal('12.3'))
    # Decimal('-1')
    # >>> ExtendedContext.compare_total(Decimal('12.30'), Decimal('12.30'))
    # Decimal('0')
    # >>> ExtendedContext.compare_total(Decimal('12.3'),  Decimal('12.300'))
    # Decimal('1')
    # >>> ExtendedContext.compare_total(Decimal('12.3'),  Decimal('NaN'))
    # Decimal('-1')
    # >>> ExtendedContext.compare_total(1, 2)
    # Decimal('-1')
    # >>> ExtendedContext.compare_total(Decimal(1), 2)
    # Decimal('-1')
    # >>> ExtendedContext.compare_total(1, Decimal(2))
    # Decimal('-1')
    fun compare_total(a, b: Object) is abstract
    
    # Return True if the operand is infinite; otherwise return False.
    # >>> ExtendedContext.is_infinite(Decimal('2.50'))
    # False
    # >>> ExtendedContext.is_infinite(Decimal('-Inf'))
    # True
    # >>> ExtendedContext.is_infinite(Decimal('NaN'))
    # False
    # >>> ExtendedContext.is_infinite(1)
    # False
    fun is_infinite(a: Object) is abstract
    
    # Returns e ** a.
    # >>> c = ExtendedContext.copy()
    # >>> c.Emin = -999
    # >>> c.Emax = 999
    # >>> c.exp(Decimal('-Infinity'))
    # Decimal('0')
    # >>> c.exp(Decimal('-1'))
    # Decimal('0.367879441')
    # >>> c.exp(Decimal('0'))
    # Decimal('1')
    # >>> c.exp(Decimal('1'))
    # Decimal('2.71828183')
    # >>> c.exp(Decimal('0.693147181'))
    # Decimal('2.00000000')
    # >>> c.exp(Decimal('+Infinity'))
    # Decimal('Infinity')
    # >>> c.exp(10)
    # Decimal('22026.4658')
    fun exp(a: Object) is abstract
    
    # Raises a to the power of b, to modulo if given.
    # With two arguments, compute a**b.  If a is negative then b
    # must be integral.  The result will be inexact unless b is
    # integral and the result is finite and can be expressed exactly
    # in 'precision' digits.
    # With three arguments, compute (a**b) % modulo.  For the
    # three argument form, the following restrictions on the
    # arguments hold:
    # - all three arguments must be integral
    # - b must be nonnegative
    # - at least one of a or b must be nonzero
    # - modulo must be nonzero and have at most 'precision' digits
    # The result of pow(a, b, modulo) is identical to the result
    # that would be obtained by computing (a**b) % modulo with
    # unbounded precision, but is computed more efficiently.  It is
    # always exact.
    # >>> c = ExtendedContext.copy()
    # >>> c.Emin = -999
    # >>> c.Emax = 999
    # >>> c.power(Decimal('2'), Decimal('3'))
    # Decimal('8')
    # >>> c.power(Decimal('-2'), Decimal('3'))
    # Decimal('-8')
    # >>> c.power(Decimal('2'), Decimal('-3'))
    # Decimal('0.125')
    # >>> c.power(Decimal('1.7'), Decimal('8'))
    # Decimal('69.7575744')
    # >>> c.power(Decimal('10'), Decimal('0.301029996'))
    # Decimal('2.00000000')
    # >>> c.power(Decimal('Infinity'), Decimal('-1'))
    # Decimal('0')
    # >>> c.power(Decimal('Infinity'), Decimal('0'))
    # Decimal('1')
    # >>> c.power(Decimal('Infinity'), Decimal('1'))
    # Decimal('Infinity')
    # >>> c.power(Decimal('-Infinity'), Decimal('-1'))
    # Decimal('-0')
    # >>> c.power(Decimal('-Infinity'), Decimal('0'))
    # Decimal('1')
    # >>> c.power(Decimal('-Infinity'), Decimal('1'))
    # Decimal('-Infinity')
    # >>> c.power(Decimal('-Infinity'), Decimal('2'))
    # Decimal('Infinity')
    # >>> c.power(Decimal('0'), Decimal('0'))
    # Decimal('NaN')
    # >>> c.power(Decimal('3'), Decimal('7'), Decimal('16'))
    # Decimal('11')
    # >>> c.power(Decimal('-3'), Decimal('7'), Decimal('16'))
    # Decimal('-11')
    # >>> c.power(Decimal('-3'), Decimal('8'), Decimal('16'))
    # Decimal('1')
    # >>> c.power(Decimal('3'), Decimal('7'), Decimal('-16'))
    # Decimal('11')
    # >>> c.power(Decimal('23E12345'), Decimal('67E189'), Decimal('123456789'))
    # Decimal('11729830')
    # >>> c.power(Decimal('-0'), Decimal('17'), Decimal('1729'))
    # Decimal('-0')
    # >>> c.power(Decimal('-23'), Decimal('0'), Decimal('65537'))
    # Decimal('1')
    # >>> ExtendedContext.power(7, 7)
    # Decimal('823543')
    # >>> ExtendedContext.power(Decimal(7), 7)
    # Decimal('823543')
    # >>> ExtendedContext.power(7, Decimal(7), 2)
    # Decimal('1')
    fun power(a, b, modulo: Object) is abstract
    
    # Sets the rounding type.
    # Sets the rounding type, and returns the current (previous)
    # rounding type.  Often used like:
    # context = context.copy()
    # # so you don't change the calling context
    # # if an error occurs in the middle.
    # rounding = context._set_rounding(ROUND_UP)
    # val = self.__sub__(other, context=context)
    # context._set_rounding(rounding)
    # This will make it round up for that operation.
    private fun private_set_rounding(py_type: Object) is abstract
    
    # max compares two values numerically and returns the maximum.
    # If either operand is a NaN then the general rules apply.
    # Otherwise, the operands are compared as though by the compare
    # operation.  If they are numerically equal then the left-hand operand
    # is chosen as the result.  Otherwise the maximum (closer to positive
    # infinity) of the two operands is chosen as the result.
    # >>> ExtendedContext.max(Decimal('3'), Decimal('2'))
    # Decimal('3')
    # >>> ExtendedContext.max(Decimal('-10'), Decimal('3'))
    # Decimal('3')
    # >>> ExtendedContext.max(Decimal('1.0'), Decimal('1'))
    # Decimal('1')
    # >>> ExtendedContext.max(Decimal('7'), Decimal('NaN'))
    # Decimal('7')
    # >>> ExtendedContext.max(1, 2)
    # Decimal('2')
    # >>> ExtendedContext.max(Decimal(1), 2)
    # Decimal('2')
    # >>> ExtendedContext.max(1, Decimal(2))
    # Decimal('2')
    fun max(a, b: Object) is abstract
    
    # Return True if the operand is finite; otherwise return False.
    # A Decimal instance is considered finite if it is neither
    # infinite nor a NaN.
    # >>> ExtendedContext.is_finite(Decimal('2.50'))
    # True
    # >>> ExtendedContext.is_finite(Decimal('-0.3'))
    # True
    # >>> ExtendedContext.is_finite(Decimal('0'))
    # True
    # >>> ExtendedContext.is_finite(Decimal('Inf'))
    # False
    # >>> ExtendedContext.is_finite(Decimal('NaN'))
    # False
    # >>> ExtendedContext.is_finite(1)
    # True
    fun is_finite(a: Object) is abstract
    
    private fun private_apply(a: Object) is abstract
    
    # Show the current context.
    fun repr is abstract
    
    # Compares two operands using their abstract representation ignoring sign.
    # Like compare_total, but with operand's sign ignored and assumed to be 0.
    fun compare_total_mag(a, b: Object) is abstract
    
    # Compares the values numerically with their sign ignored.
    # >>> ExtendedContext.min_mag(Decimal('3'), Decimal('-2'))
    # Decimal('-2')
    # >>> ExtendedContext.min_mag(Decimal('-3'), Decimal('NaN'))
    # Decimal('-3')
    # >>> ExtendedContext.min_mag(1, -2)
    # Decimal('1')
    # >>> ExtendedContext.min_mag(Decimal(1), -2)
    # Decimal('1')
    # >>> ExtendedContext.min_mag(1, Decimal(-2))
    # Decimal('1')
    fun min_mag(a, b: Object) is abstract
    
    # Returns to be "a - b * n", where n is the integer nearest the exact
    # value of "x / b" (if two integers are equally near then the even one
    # is chosen).  If the result is equal to 0 then its sign will be the
    # sign of a.
    # This operation will fail under the same conditions as integer division
    # (that is, if integer division on the same two operands would fail, the
    # remainder cannot be calculated).
    # >>> ExtendedContext.remainder_near(Decimal('2.1'), Decimal('3'))
    # Decimal('-0.9')
    # >>> ExtendedContext.remainder_near(Decimal('10'), Decimal('6'))
    # Decimal('-2')
    # >>> ExtendedContext.remainder_near(Decimal('10'), Decimal('3'))
    # Decimal('1')
    # >>> ExtendedContext.remainder_near(Decimal('-10'), Decimal('3'))
    # Decimal('-1')
    # >>> ExtendedContext.remainder_near(Decimal('10.2'), Decimal('1'))
    # Decimal('0.2')
    # >>> ExtendedContext.remainder_near(Decimal('10'), Decimal('0.3'))
    # Decimal('0.1')
    # >>> ExtendedContext.remainder_near(Decimal('3.6'), Decimal('1.3'))
    # Decimal('-0.3')
    # >>> ExtendedContext.remainder_near(3, 11)
    # Decimal('3')
    # >>> ExtendedContext.remainder_near(Decimal(3), 11)
    # Decimal('3')
    # >>> ExtendedContext.remainder_near(3, Decimal(11))
    # Decimal('3')
    fun remainder_near(a, b: Object) is abstract
    
    # Returns a shifted copy of a, b times.
    # The coefficient of the result is a shifted copy of the digits
    # in the coefficient of the first operand.  The number of places
    # to shift is taken from the absolute value of the second operand,
    # with the shift being to the left if the second operand is
    # positive or to the right otherwise.  Digits shifted into the
    # coefficient are zeros.
    # >>> ExtendedContext.shift(Decimal('34'), Decimal('8'))
    # Decimal('400000000')
    # >>> ExtendedContext.shift(Decimal('12'), Decimal('9'))
    # Decimal('0')
    # >>> ExtendedContext.shift(Decimal('123456789'), Decimal('-2'))
    # Decimal('1234567')
    # >>> ExtendedContext.shift(Decimal('123456789'), Decimal('0'))
    # Decimal('123456789')
    # >>> ExtendedContext.shift(Decimal('123456789'), Decimal('+2'))
    # Decimal('345678900')
    # >>> ExtendedContext.shift(88888888, 2)
    # Decimal('888888800')
    # >>> ExtendedContext.shift(Decimal(88888888), 2)
    # Decimal('888888800')
    # >>> ExtendedContext.shift(88888888, Decimal(2))
    # Decimal('888888800')
    fun shift(a, b: Object) is abstract
    
    # Returns a deep copy from self.
    fun copy is abstract
    
    # Returns the remainder from integer division.
    # The result is the residue of the dividend after the operation of
    # calculating integer division as described for divide-integer, rounded
    # to precision digits if necessary.  The sign of the result, if
    # non-zero, is the same as that of the original dividend.
    # This operation will fail under the same conditions as integer division
    # (that is, if integer division on the same two operands would fail, the
    # remainder cannot be calculated).
    # >>> ExtendedContext.remainder(Decimal('2.1'), Decimal('3'))
    # Decimal('2.1')
    # >>> ExtendedContext.remainder(Decimal('10'), Decimal('3'))
    # Decimal('1')
    # >>> ExtendedContext.remainder(Decimal('-10'), Decimal('3'))
    # Decimal('-1')
    # >>> ExtendedContext.remainder(Decimal('10.2'), Decimal('1'))
    # Decimal('0.2')
    # >>> ExtendedContext.remainder(Decimal('10'), Decimal('0.3'))
    # Decimal('0.1')
    # >>> ExtendedContext.remainder(Decimal('3.6'), Decimal('1.3'))
    # Decimal('1.0')
    # >>> ExtendedContext.remainder(22, 6)
    # Decimal('4')
    # >>> ExtendedContext.remainder(Decimal(22), 6)
    # Decimal('4')
    # >>> ExtendedContext.remainder(22, Decimal(6))
    # Decimal('4')
    fun remainder(a, b: Object) is abstract
    
    # Creates a new Decimal instance from a float but rounding using self
    # as the context.
    # >>> context = Context(prec=5, rounding=ROUND_DOWN)
    # >>> context.create_decimal_from_float(3.1415926535897932)
    # Decimal('3.1415')
    # >>> context = Context(prec=5, traps=[Inexact])
    # >>> context.create_decimal_from_float(3.1415926535897932)
    # Traceback (most recent call last):
    # ...
    # Inexact: None
    fun create_decimal_from_float(f: Object) is abstract
    
    # Ignore all flags, if they are raised
    private fun private_ignore_all_flags is abstract
    
    # Compares the values numerically with their sign ignored.
    # >>> ExtendedContext.max_mag(Decimal('7'), Decimal('NaN'))
    # Decimal('7')
    # >>> ExtendedContext.max_mag(Decimal('7'), Decimal('-10'))
    # Decimal('-10')
    # >>> ExtendedContext.max_mag(1, -2)
    # Decimal('-2')
    # >>> ExtendedContext.max_mag(Decimal(1), -2)
    # Decimal('-2')
    # >>> ExtendedContext.max_mag(1, Decimal(-2))
    # Decimal('-2')
    fun max_mag(a, b: Object) is abstract
    
    # Returns a rotated copy of a, b times.
    # The coefficient of the result is a rotated copy of the digits in
    # the coefficient of the first operand.  The number of places of
    # rotation is taken from the absolute value of the second operand,
    # with the rotation being to the left if the second operand is
    # positive or to the right otherwise.
    # >>> ExtendedContext.rotate(Decimal('34'), Decimal('8'))
    # Decimal('400000003')
    # >>> ExtendedContext.rotate(Decimal('12'), Decimal('9'))
    # Decimal('12')
    # >>> ExtendedContext.rotate(Decimal('123456789'), Decimal('-2'))
    # Decimal('891234567')
    # >>> ExtendedContext.rotate(Decimal('123456789'), Decimal('0'))
    # Decimal('123456789')
    # >>> ExtendedContext.rotate(Decimal('123456789'), Decimal('+2'))
    # Decimal('345678912')
    # >>> ExtendedContext.rotate(1333333, 1)
    # Decimal('13333330')
    # >>> ExtendedContext.rotate(Decimal(1333333), 1)
    # Decimal('13333330')
    # >>> ExtendedContext.rotate(1333333, Decimal(1))
    # Decimal('13333330')
    fun rotate(a, b: Object) is abstract
    
    # Rounds to an integer.
    # When the operand has a negative exponent, the result is the same
    # as using the quantize() operation using the given operand as the
    # left-hand-operand, 1E+0 as the right-hand-operand, and the precision
    # of the operand as the precision setting, except that no flags will
    # be set.  The rounding mode is taken from the context.
    # >>> ExtendedContext.to_integral_value(Decimal('2.1'))
    # Decimal('2')
    # >>> ExtendedContext.to_integral_value(Decimal('100'))
    # Decimal('100')
    # >>> ExtendedContext.to_integral_value(Decimal('100.0'))
    # Decimal('100')
    # >>> ExtendedContext.to_integral_value(Decimal('101.5'))
    # Decimal('102')
    # >>> ExtendedContext.to_integral_value(Decimal('-101.5'))
    # Decimal('-102')
    # >>> ExtendedContext.to_integral_value(Decimal('10E+5'))
    # Decimal('1.0E+6')
    # >>> ExtendedContext.to_integral_value(Decimal('7.89E+77'))
    # Decimal('7.89E+77')
    # >>> ExtendedContext.to_integral_value(Decimal('-Inf'))
    # Decimal('-Infinity')
    fun to_integral_value(a: Object) is abstract
    
    # Applies the logical operation 'or' between each operand's digits.
    # The operands must be both logical numbers.
    # >>> ExtendedContext.logical_or(Decimal('0'), Decimal('0'))
    # Decimal('0')
    # >>> ExtendedContext.logical_or(Decimal('0'), Decimal('1'))
    # Decimal('1')
    # >>> ExtendedContext.logical_or(Decimal('1'), Decimal('0'))
    # Decimal('1')
    # >>> ExtendedContext.logical_or(Decimal('1'), Decimal('1'))
    # Decimal('1')
    # >>> ExtendedContext.logical_or(Decimal('1100'), Decimal('1010'))
    # Decimal('1110')
    # >>> ExtendedContext.logical_or(Decimal('1110'), Decimal('10'))
    # Decimal('1110')
    # >>> ExtendedContext.logical_or(110, 1101)
    # Decimal('1111')
    # >>> ExtendedContext.logical_or(Decimal(110), 1101)
    # Decimal('1111')
    # >>> ExtendedContext.logical_or(110, Decimal(1101))
    # Decimal('1111')
    fun logical_or(a, b: Object) is abstract
    
    # Handles an error
    # If the flag is in _ignored_flags, returns the default response.
    # Otherwise, it sets the flag, then, if the corresponding
    # trap_enabler is set, it reraises the exception.  Otherwise, it returns
    # the default value after setting the flag.
    private fun private_raise_error(explanation, condition: Object) is abstract
    
    # Converts a number to a string, using scientific notation.
    # The operation is not affected by the context.
    fun to_eng_string(a: Object) is abstract
    
    # Returns an indication of the class of the operand.
    # The class is one of the following strings:
    # -sNaN
    # -NaN
    # -Infinity
    # -Normal
    # -Subnormal
    # -Zero
    # +Zero
    # +Subnormal
    # +Normal
    # +Infinity
    # >>> c = Context(ExtendedContext)
    # >>> c.Emin = -999
    # >>> c.Emax = 999
    # >>> c.number_class(Decimal('Infinity'))
    # '+Infinity'
    # >>> c.number_class(Decimal('1E-10'))
    # '+Normal'
    # >>> c.number_class(Decimal('2.50'))
    # '+Normal'
    # >>> c.number_class(Decimal('0.1E-999'))
    # '+Subnormal'
    # >>> c.number_class(Decimal('0'))
    # '+Zero'
    # >>> c.number_class(Decimal('-0'))
    # '-Zero'
    # >>> c.number_class(Decimal('-0.1E-999'))
    # '-Subnormal'
    # >>> c.number_class(Decimal('-1E-10'))
    # '-Normal'
    # >>> c.number_class(Decimal('-2.50'))
    # '-Normal'
    # >>> c.number_class(Decimal('-Infinity'))
    # '-Infinity'
    # >>> c.number_class(Decimal('NaN'))
    # 'NaN'
    # >>> c.number_class(Decimal('-NaN'))
    # 'NaN'
    # >>> c.number_class(Decimal('sNaN'))
    # 'sNaN'
    # >>> c.number_class(123)
    # '+Normal'
    fun number_class(a: Object) is abstract
    
    # Returns Etiny (= Emin - prec + 1)
    fun etiny is abstract
    
    # Rounds to an integer.
    # When the operand has a negative exponent, the result is the same
    # as using the quantize() operation using the given operand as the
    # left-hand-operand, 1E+0 as the right-hand-operand, and the precision
    # of the operand as the precision setting; Inexact and Rounded flags
    # are allowed in this operation.  The rounding mode is taken from the
    # context.
    # >>> ExtendedContext.to_integral_exact(Decimal('2.1'))
    # Decimal('2')
    # >>> ExtendedContext.to_integral_exact(Decimal('100'))
    # Decimal('100')
    # >>> ExtendedContext.to_integral_exact(Decimal('100.0'))
    # Decimal('100')
    # >>> ExtendedContext.to_integral_exact(Decimal('101.5'))
    # Decimal('102')
    # >>> ExtendedContext.to_integral_exact(Decimal('-101.5'))
    # Decimal('-102')
    # >>> ExtendedContext.to_integral_exact(Decimal('10E+5'))
    # Decimal('1.0E+6')
    # >>> ExtendedContext.to_integral_exact(Decimal('7.89E+77'))
    # Decimal('7.89E+77')
    # >>> ExtendedContext.to_integral_exact(Decimal('-Inf'))
    # Decimal('-Infinity')
    fun to_integral_exact(a: Object) is abstract
    
    # Returns a value equal to 'a' (rounded), having the exponent of 'b'.
    # The coefficient of the result is derived from that of the left-hand
    # operand.  It may be rounded using the current rounding setting (if the
    # exponent is being increased), multiplied by a positive power of ten (if
    # the exponent is being decreased), or is unchanged (if the exponent is
    # already equal to that of the right-hand operand).
    # Unlike other operations, if the length of the coefficient after the
    # quantize operation would be greater than precision then an Invalid
    # operation condition is raised.  This guarantees that, unless there is
    # an error condition, the exponent of the result of a quantize is always
    # equal to that of the right-hand operand.
    # Also unlike other operations, quantize will never raise Underflow, even
    # if the result is subnormal and inexact.
    # >>> ExtendedContext.quantize(Decimal('2.17'), Decimal('0.001'))
    # Decimal('2.170')
    # >>> ExtendedContext.quantize(Decimal('2.17'), Decimal('0.01'))
    # Decimal('2.17')
    # >>> ExtendedContext.quantize(Decimal('2.17'), Decimal('0.1'))
    # Decimal('2.2')
    # >>> ExtendedContext.quantize(Decimal('2.17'), Decimal('1e+0'))
    # Decimal('2')
    # >>> ExtendedContext.quantize(Decimal('2.17'), Decimal('1e+1'))
    # Decimal('0E+1')
    # >>> ExtendedContext.quantize(Decimal('-Inf'), Decimal('Infinity'))
    # Decimal('-Infinity')
    # >>> ExtendedContext.quantize(Decimal('2'), Decimal('Infinity'))
    # Decimal('NaN')
    # >>> ExtendedContext.quantize(Decimal('-0.1'), Decimal('1'))
    # Decimal('-0')
    # >>> ExtendedContext.quantize(Decimal('-0'), Decimal('1e+5'))
    # Decimal('-0E+5')
    # >>> ExtendedContext.quantize(Decimal('+35236450.6'), Decimal('1e-2'))
    # Decimal('NaN')
    # >>> ExtendedContext.quantize(Decimal('-35236450.6'), Decimal('1e-2'))
    # Decimal('NaN')
    # >>> ExtendedContext.quantize(Decimal('217'), Decimal('1e-1'))
    # Decimal('217.0')
    # >>> ExtendedContext.quantize(Decimal('217'), Decimal('1e-0'))
    # Decimal('217')
    # >>> ExtendedContext.quantize(Decimal('217'), Decimal('1e+1'))
    # Decimal('2.2E+2')
    # >>> ExtendedContext.quantize(Decimal('217'), Decimal('1e+2'))
    # Decimal('2E+2')
    # >>> ExtendedContext.quantize(1, 2)
    # Decimal('1')
    # >>> ExtendedContext.quantize(Decimal(1), 2)
    # Decimal('1')
    # >>> ExtendedContext.quantize(1, Decimal(2))
    # Decimal('1')
    fun quantize(a, b: Object) is abstract
    
    # Returns the natural (base e) logarithm of the operand.
    # >>> c = ExtendedContext.copy()
    # >>> c.Emin = -999
    # >>> c.Emax = 999
    # >>> c.ln(Decimal('0'))
    # Decimal('-Infinity')
    # >>> c.ln(Decimal('1.000'))
    # Decimal('0')
    # >>> c.ln(Decimal('2.71828183'))
    # Decimal('1.00000000')
    # >>> c.ln(Decimal('10'))
    # Decimal('2.30258509')
    # >>> c.ln(Decimal('+Infinity'))
    # Decimal('Infinity')
    # >>> c.ln(1)
    # Decimal('0')
    fun ln(a: Object) is abstract
    
    # Returns the smallest representable number larger than a.
    # >>> c = ExtendedContext.copy()
    # >>> c.Emin = -999
    # >>> c.Emax = 999
    # >>> ExtendedContext.next_plus(Decimal('1'))
    # Decimal('1.00000001')
    # >>> c.next_plus(Decimal('-1E-1007'))
    # Decimal('-0E-1007')
    # >>> ExtendedContext.next_plus(Decimal('-1.00000003'))
    # Decimal('-1.00000002')
    # >>> c.next_plus(Decimal('-Infinity'))
    # Decimal('-9.99999999E+999')
    # >>> c.next_plus(1)
    # Decimal('1.00000001')
    fun next_plus(a: Object) is abstract
    
    # Returns the number closest to a, in direction towards b.
    # The result is the closest representable number from the first
    # operand (but not the first operand) that is in the direction
    # towards the second operand, unless the operands have the same
    # value.
    # >>> c = ExtendedContext.copy()
    # >>> c.Emin = -999
    # >>> c.Emax = 999
    # >>> c.next_toward(Decimal('1'), Decimal('2'))
    # Decimal('1.00000001')
    # >>> c.next_toward(Decimal('-1E-1007'), Decimal('1'))
    # Decimal('-0E-1007')
    # >>> c.next_toward(Decimal('-1.00000003'), Decimal('0'))
    # Decimal('-1.00000002')
    # >>> c.next_toward(Decimal('1'), Decimal('0'))
    # Decimal('0.999999999')
    # >>> c.next_toward(Decimal('1E-1007'), Decimal('-100'))
    # Decimal('0E-1007')
    # >>> c.next_toward(Decimal('-1.00000003'), Decimal('-10'))
    # Decimal('-1.00000004')
    # >>> c.next_toward(Decimal('0.00'), Decimal('-0.0000'))
    # Decimal('-0.00')
    # >>> c.next_toward(0, 1)
    # Decimal('1E-1007')
    # >>> c.next_toward(Decimal(0), 1)
    # Decimal('1E-1007')
    # >>> c.next_toward(0, Decimal(1))
    # Decimal('1E-1007')
    fun next_toward(a, b: Object) is abstract
    
    # Returns a copy of the operand with the sign set to 0.
    # >>> ExtendedContext.copy_abs(Decimal('2.1'))
    # Decimal('2.1')
    # >>> ExtendedContext.copy_abs(Decimal('-100'))
    # Decimal('100')
    # >>> ExtendedContext.copy_abs(-1)
    # Decimal('1')
    fun copy_abs(a: Object) is abstract
    
    # Return True if the operand is a signaling NaN;
    # otherwise return False.
    # >>> ExtendedContext.is_snan(Decimal('2.50'))
    # False
    # >>> ExtendedContext.is_snan(Decimal('NaN'))
    # False
    # >>> ExtendedContext.is_snan(Decimal('sNaN'))
    # True
    # >>> ExtendedContext.is_snan(1)
    # False
    fun is_snan(a: Object) is abstract
    
    # Return True if the operand is negative; otherwise return False.
    # >>> ExtendedContext.is_signed(Decimal('2.50'))
    # False
    # >>> ExtendedContext.is_signed(Decimal('-12'))
    # True
    # >>> ExtendedContext.is_signed(Decimal('-0'))
    # True
    # >>> ExtendedContext.is_signed(8)
    # False
    # >>> ExtendedContext.is_signed(-8)
    # True
    fun is_signed(a: Object) is abstract
    
    # Returns a shallow copy from self.
    private fun private_shallow_copy is abstract
    
    # Returns the exponent of the magnitude of the operand's MSD.
    # The result is the integer which is the exponent of the magnitude
    # of the most significant digit of the operand (as though the
    # operand were truncated to a single digit while maintaining the
    # value of that digit and without limiting the resulting exponent).
    # >>> ExtendedContext.logb(Decimal('250'))
    # Decimal('2')
    # >>> ExtendedContext.logb(Decimal('2.50'))
    # Decimal('0')
    # >>> ExtendedContext.logb(Decimal('0.03'))
    # Decimal('-2')
    # >>> ExtendedContext.logb(Decimal('0'))
    # Decimal('-Infinity')
    # >>> ExtendedContext.logb(1)
    # Decimal('0')
    # >>> ExtendedContext.logb(10)
    # Decimal('1')
    # >>> ExtendedContext.logb(100)
    # Decimal('2')
    fun logb(a: Object) is abstract
    
    # Minus corresponds to unary prefix minus in Python.
    # The operation is evaluated using the same rules as subtract; the
    # operation minus(a) is calculated as subtract('0', a) where the '0'
    # has the same exponent as the operand.
    # >>> ExtendedContext.minus(Decimal('1.3'))
    # Decimal('-1.3')
    # >>> ExtendedContext.minus(Decimal('-1.3'))
    # Decimal('1.3')
    # >>> ExtendedContext.minus(1)
    # Decimal('-1')
    fun minus(a: Object) is abstract
    
    # Creates a new Decimal instance but using self as context.
    # This method implements the to-number operation of the
    # IBM Decimal specification.
    fun create_decimal(num: Object) is abstract
    
    # Return True if the operand is a normal number;
    # otherwise return False.
    # >>> c = ExtendedContext.copy()
    # >>> c.Emin = -999
    # >>> c.Emax = 999
    # >>> c.is_normal(Decimal('2.50'))
    # True
    # >>> c.is_normal(Decimal('0.1E-999'))
    # False
    # >>> c.is_normal(Decimal('0.00'))
    # False
    # >>> c.is_normal(Decimal('-Inf'))
    # False
    # >>> c.is_normal(Decimal('NaN'))
    # False
    # >>> c.is_normal(1)
    # True
    fun is_normal(a: Object) is abstract
    
end

# Cannot perform the division adequately.
# This occurs and signals invalid-operation if the integer result of a
# divide-integer or remainder operation had too many digits (would be
# longer than precision).  The result is [0,qNaN].
class DivisionImpossible
    super InvalidOperation
    
    redef fun handle(context) is abstract
    
end

# DecimalTuple(sign, digits, exponent)
class DecimalTuple
    super Tuple
    
    # Exclude the OrderedDict from pickling
    fun getstate is abstract
    
    # Return a nicely formatted representation string
    fun repr is abstract
    
    # Make a new DecimalTuple object from a sequence or iterable
    private fun private_make(py_new, iterable, len, cls: Object) is abstract
    
    # Return a new DecimalTuple object replacing specified fields with new values
    private fun private_replace(py_self: Object) is abstract
    
    # Return self as a plain tuple.  Used by copy and pickle.
    fun getnewargs is abstract
    
    # Return a new OrderedDict which maps field names to their values
    private fun private_asdict is abstract
    
end

# Undefined result of division.
# This occurs and signals invalid-operation if division by zero was
# attempted (during a divide-integer, divide, or remainder operation), and
# the dividend is also zero.  The result is [0,qNaN].
class DivisionUndefined
    super InvalidOperation
    super ZeroDivisionError
    
    redef fun handle(context) is abstract
    
end

# An invalid operation was performed.
# Various bad things cause this:
# Something creates a signaling NaN
# -INF + INF
# 0 * (+-)INF
# (+-)INF / (+-)INF
# x % 0
# (+-)INF % x
# x._rescale( non-integer )
# sqrt(-x) , x > 0
# 0 ** 0
# x ** (non-integer)
# x ** (+-)INF
# An operand is invalid
# The result of the operation after these is a quiet positive NaN,
# except when the cause is a signaling NaN, in which case the result is
# also a quiet NaN, but with the original sign, and an optional
# diagnostic information.
class InvalidOperation
    super DecimalException
    
    redef fun handle(context) is abstract
    
end

# Exponent of a 0 changed to fit bounds.
# This occurs and signals clamped if the exponent of a result has been
# altered in order to fit the constraints of a specific concrete
# representation.  This may occur when the exponent of a zero result would
# be outside the bounds of a representation, or when a large normal
# number would have an encoded exponent that cannot be represented.  In
# this latter case, the exponent is reduced to fit and the corresponding
# number of zero digits are appended to the coefficient ("fold-down").
class Clamped
    super DecimalException
    
end

# Context manager class to support localcontext().
# Sets a copy of the supplied context in __enter__() and restores
# the previous decimal context in __exit__()
private class ContextManager
    
    init do end
    
    fun exit(tb, t, v: Object) is abstract
    
    fun enter is abstract
    
end

private class WorkRep
    
    init do end
    
    fun repr is abstract
    
end

