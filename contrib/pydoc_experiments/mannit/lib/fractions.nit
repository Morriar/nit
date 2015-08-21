# Rational, infinite-precision, real numbers.
module fractions

import operator
import re
import numbers
import math
import builtins

redef class Sys
    
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

# .numerator and .denominator should be in lowest terms.
redef class Rational
    
    # float(self) = self.numerator / self.denominator
    # It's important that this conversion use the integer's "true"
    # division rather than casting one side to float before dividing
    # so that ratios of huge integers convert without overflowing.
    redef fun float is abstract
    
end

# This class implements rational numbers.
# In the two-argument form of the constructor, Fraction(8, 6) will
# produce a rational number equivalent to 4/3. Both arguments must
# be Rational. The numerator defaults to 0 and the denominator
# defaults to 1 so that Fraction(3) == 3 and Fraction() == 0.
# Fractions can also be constructed from:
# - numeric strings similar to those accepted by the
# float constructor (for example, '-2.3' or '1e10')
# - strings of the form '123/456'
# - float and Decimal instances
# - other Rational instances (including integers)
class Fraction
    super Rational
    
    # a > b
    fun gt(a, b: Object) is abstract
    
    # Converts a finite float to a rational number, exactly.
    # Beware that Fraction.from_float(0.3) != Fraction(3, 10).
    fun from_float(cls, f: Object) is abstract
    
    # a + b
    private fun private_add(a, b: Object) is abstract
    
    # a ** b
    # If b is not an integer, the result will be a float or complex
    # since roots are generally irrational. If b is an integer, the
    # result will be rational.
    fun pow(a, b: Object) is abstract
    
    fun reduce is abstract
    
    # +a: Coerces a subclass instance to Fraction
    fun pos(a: Object) is abstract
    
    # a >= b
    fun ge(a, b: Object) is abstract
    
    fun deepcopy(memo: Object) is abstract
    
    # a % b
    redef fun mod(other) is abstract
    
    # a == b
    fun eq(a, b: Object) is abstract
    
    # a != 0
    fun nonzero(a: Object) is abstract
    
    # a + b
    fun radd(a, b: Object) is abstract
    
    # Helper for comparison operators, for internal use only.
    # Implement comparison between a Rational instance `self`, and
    # either another Rational instance or a float `other`.  If
    # `other` is not a Rational instance or a float, return
    # NotImplemented. `op` should be one of the six standard
    # comparison operators.
    private fun private_richcmp(other, op: Object) is abstract
    
    # a / b
    fun rtruediv(a, b: Object) is abstract
    
    # -a
    fun neg(a: Object) is abstract
    
    # a + b
    fun add(a, b: Object) is abstract
    
    # Converts a finite Decimal instance to a rational number, exactly.
    fun from_decimal(dec, cls: Object) is abstract
    
    # a - b
    private fun private_sub(a, b: Object) is abstract
    
    # a < b
    redef fun lt(other) is abstract
    
    # abs(a)
    fun abs(a: Object) is abstract
    
    # a / b
    fun truediv(a, b: Object) is abstract
    
    # a * b
    fun mul(a, b: Object) is abstract
    
    # a % b
    redef fun rmod(other) is abstract
    
    # trunc(a)
    redef fun trunc is abstract
    
    # hash(self)
    # Tricky because values that are exactly representable as a
    # float must have the same hash as that float.
    fun hash is abstract
    
    # repr(self)
    fun repr is abstract
    
    # a / b
    private fun private_div(a, b: Object) is abstract
    
    # a / b
    fun rdiv(a, b: Object) is abstract
    
    # a <= b
    redef fun le(other) is abstract
    
    # a ** b
    fun rpow(a, b: Object) is abstract
    
    fun copy is abstract
    
    # Generates forward and reverse operators given a purely-rational
    # operator and a function from the operator module.
    # Use this like:
    # __op__, __rop__ = _operator_fallbacks(just_rational_op, operator.op)
    # In general, we want to implement the arithmetic operations so
    # that mixed-mode operations either call an implementation whose
    # author knew about the types of both arguments, or convert both
    # to the nearest built in type and do the operation there. In
    # Fraction, that means that we define __add__ and __radd__ as:
    # def __add__(self, other):
    # # Both types have numerators/denominator attributes,
    # # so do the operation directly
    # if isinstance(other, (int, long, Fraction)):
    # return Fraction(self.numerator * other.denominator +
    # other.numerator * self.denominator,
    # self.denominator * other.denominator)
    # # float and complex don't have those operations, but we
    # # know about those types, so special case them.
    # elif isinstance(other, float):
    # return float(self) + other
    # elif isinstance(other, complex):
    # return complex(self) + other
    # # Let the other type take over.
    # return NotImplemented
    # def __radd__(self, other):
    # # radd handles more types than add because there's
    # # nothing left to fall back to.
    # if isinstance(other, Rational):
    # return Fraction(self.numerator * other.denominator +
    # other.numerator * self.denominator,
    # self.denominator * other.denominator)
    # elif isinstance(other, Real):
    # return float(other) + float(self)
    # elif isinstance(other, Complex):
    # return complex(other) + complex(self)
    # return NotImplemented
    # There are 5 different cases for a mixed-type addition on
    # Fraction. I'll refer to all of the above code that doesn't
    # refer to Fraction, float, or complex as "boilerplate". 'r'
    # will be an instance of Fraction, which is a subtype of
    # Rational (r : Fraction <: Rational), and b : B <:
    # Complex. The first three involve 'r + b':
    # 1. If B <: Fraction, int, float, or complex, we handle
    # that specially, and all is well.
    # 2. If Fraction falls back to the boilerplate code, and it
    # were to return a value from __add__, we'd miss the
    # possibility that B defines a more intelligent __radd__,
    # so the boilerplate should return NotImplemented from
    # __add__. In particular, we don't handle Rational
    # here, even though we could get an exact answer, in case
    # the other type wants to do something special.
    # 3. If B <: Fraction, Python tries B.__radd__ before
    # Fraction.__add__. This is ok, because it was
    # implemented with knowledge of Fraction, so it can
    # handle those instances before delegating to Real or
    # Complex.
    # The next two situations describe 'b + r'. We assume that b
    # didn't know about Fraction in its implementation, and that it
    # uses similar boilerplate code:
    # 4. If B <: Rational, then __radd_ converts both to the
    # builtin rational type (hey look, that's us) and
    # proceeds.
    # 5. Otherwise, __radd__ tries to find the nearest common
    # base ABC, and fall back to its builtin type. Since this
    # class doesn't subclass a concrete type, there's no
    # implementation to fall back to, so we need to try as
    # hard as possible to return an actual value, or the user
    # will get a TypeError.
    private fun private_operator_fallbacks(fallback_operator, monomorphic_operator: Object) is abstract
    
    # a * b
    private fun private_mul(a, b: Object) is abstract
    
    # a - b
    fun sub(a, b: Object) is abstract
    
    # a * b
    fun rmul(a, b: Object) is abstract
    
    # Closest Fraction to self with denominator at most max_denominator.
    # >>> Fraction('3.141592653589793').limit_denominator(10)
    # Fraction(22, 7)
    # >>> Fraction('3.141592653589793').limit_denominator(100)
    # Fraction(311, 99)
    # >>> Fraction(4321, 8765).limit_denominator(10000)
    # Fraction(4321, 8765)
    fun limit_denominator(max_denominator: Object) is abstract
    
    # a - b
    fun rsub(a, b: Object) is abstract
    
    # a // b
    redef fun rfloordiv(other) is abstract
    
    # a // b
    redef fun floordiv(other) is abstract
    
    # str(self)
    fun str is abstract
    
    # a / b
    fun div(a, b: Object) is abstract
    
end

