# JSON (JavaScript Object Notation) <http://json.org> is a subset of
# JavaScript syntax (ECMA-262 3rd edition) used as a lightweight data
# interchange format.
# :mod:`json` exposes an API familiar to users of the standard library
# :mod:`marshal` and :mod:`pickle` modules. It is the externally maintained
# version of the :mod:`json` library contained in Python 2.6, but maintains
# compatibility with Python 2.4 and Python 2.5 and (currently) has
# significant performance advantages, even without using the optional C
# extension for speedups.
# Encoding basic Python object hierarchies::
# >>> import json
# >>> json.dumps(['foo', {'bar': ('baz', None, 1.0, 2)}])
# '["foo", {"bar": ["baz", null, 1.0, 2]}]'
# >>> print json.dumps("\"foo\bar")
# "\"foo\bar"
# >>> print json.dumps(u'\u1234')
# "\u1234"
# >>> print json.dumps('\\')
# "\\"
# >>> print json.dumps({"c": 0, "b": 0, "a": 0}, sort_keys=True)
# {"a": 0, "b": 0, "c": 0}
# >>> from StringIO import StringIO
# >>> io = StringIO()
# >>> json.dump(['streaming API'], io)
# >>> io.getvalue()
# '["streaming API"]'
# Compact encoding::
# >>> import json
# >>> json.dumps([1,2,3,{'4': 5, '6': 7}], sort_keys=True, separators=(',',':'))
# '[1,2,3,{"4":5,"6":7}]'
# Pretty printing::
# >>> import json
# >>> print json.dumps({'4': 5, '6': 7}, sort_keys=True,
# ...                  indent=4, separators=(',', ': '))
# {
# "4": 5,
# "6": 7
# }
# Decoding JSON::
# >>> import json
# >>> obj = [u'foo', {u'bar': [u'baz', None, 1.0, 2]}]
# >>> json.loads('["foo", {"bar":["baz", null, 1.0, 2]}]') == obj
# True
# >>> json.loads('"\\"foo\\bar"') == u'"foo\x08ar'
# True
# >>> from StringIO import StringIO
# >>> io = StringIO('["streaming API"]')
# >>> json.load(io)[0] == 'streaming API'
# True
# Specializing JSON object decoding::
# >>> import json
# >>> def as_complex(dct):
# ...     if '__complex__' in dct:
# ...         return complex(dct['real'], dct['imag'])
# ...     return dct
# ...
# >>> json.loads('{"__complex__": true, "real": 1, "imag": 2}',
# ...     object_hook=as_complex)
# (1+2j)
# >>> from decimal import Decimal
# >>> json.loads('1.1', parse_float=Decimal) == Decimal('1.1')
# True
# Specializing JSON object encoding::
# >>> import json
# >>> def encode_complex(obj):
# ...     if isinstance(obj, complex):
# ...         return [obj.real, obj.imag]
# ...     raise TypeError(repr(o) + " is not JSON serializable")
# ...
# >>> json.dumps(2 + 1j, default=encode_complex)
# '[2.0, 1.0]'
# >>> json.JSONEncoder(default=encode_complex).encode(2 + 1j)
# '[2.0, 1.0]'
# >>> ''.join(json.JSONEncoder(default=encode_complex).iterencode(2 + 1j))
# '[2.0, 1.0]'
# Using json.tool from the shell to validate and pretty-print::
# $ echo '{"json":"obj"}' | python -m json.tool
# {
# "json": "obj"
# }
# $ echo '{ 1.2:3.4}' | python -m json.tool
# Expecting property name enclosed in double quotes: line 1 column 3 (char 2)
module tool

import decoder
import encoder
import scanner
import tool
import builtins

redef class Sys
    
end

# Extensible JSON <http://json.org> encoder for Python data structures.
# Supports the following objects and types by default:
# +-------------------+---------------+
# | Python            | JSON          |
# +===================+===============+
# | dict              | object        |
# +-------------------+---------------+
# | list, tuple       | array         |
# +-------------------+---------------+
# | str, unicode      | string        |
# +-------------------+---------------+
# | int, long, float  | number        |
# +-------------------+---------------+
# | True              | true          |
# +-------------------+---------------+
# | False             | false         |
# +-------------------+---------------+
# | None              | null          |
# +-------------------+---------------+
# To extend this to recognize other objects, subclass and implement a
# ``.default()`` method with another method that returns a serializable
# object for ``o`` if possible, otherwise it should call the superclass
# implementation (to raise ``TypeError``).
redef class JSONEncoder
    
    # Implement this method in a subclass such that it returns
    # a serializable object for ``o``, or calls the base implementation
    # (to raise a ``TypeError``).
    # For example, to support arbitrary iterators, you could
    # implement default like this::
    # def default(self, o):
    # try:
    # iterable = iter(o)
    # except TypeError:
    # pass
    # else:
    # return list(iterable)
    # # Let the base class default method raise the TypeError
    # return JSONEncoder.default(self, o)
    redef fun default(o) is abstract
    
    # Return a JSON string representation of a Python data structure.
    # >>> JSONEncoder().encode({"foo": ["bar", "baz"]})
    # '{"foo": ["bar", "baz"]}'
    redef fun encode(o) is abstract
    
    # Constructor for JSONEncoder, with sensible defaults.
    # If skipkeys is false, then it is a TypeError to attempt
    # encoding of keys that are not str, int, long, float or None.  If
    # skipkeys is True, such items are simply skipped.
    # If *ensure_ascii* is true (the default), all non-ASCII
    # characters in the output are escaped with \uXXXX sequences,
    # and the results are str instances consisting of ASCII
    # characters only.  If ensure_ascii is False, a result may be a
    # unicode instance.  This usually happens if the input contains
    # unicode strings or the *encoding* parameter is used.
    # If check_circular is true, then lists, dicts, and custom encoded
    # objects will be checked for circular references during encoding to
    # prevent an infinite recursion (which would cause an OverflowError).
    # Otherwise, no such check takes place.
    # If allow_nan is true, then NaN, Infinity, and -Infinity will be
    # encoded as such.  This behavior is not JSON specification compliant,
    # but is consistent with most JavaScript based encoders and decoders.
    # Otherwise, it will be a ValueError to encode such floats.
    # If sort_keys is true, then the output of dictionaries will be
    # sorted by key; this is useful for regression tests to ensure
    # that JSON serializations can be compared on a day-to-day basis.
    # If indent is a non-negative integer, then JSON array
    # elements and object members will be pretty-printed with that
    # indent level.  An indent level of 0 will only insert newlines.
    # None is the most compact representation.  Since the default
    # item separator is ', ',  the output might include trailing
    # whitespace when indent is specified.  You can use
    # separators=(',', ': ') to avoid this.
    # If specified, separators should be a (item_separator, key_separator)
    # tuple.  The default is (', ', ': ').  To get the most compact JSON
    # representation you should specify (',', ':') to eliminate whitespace.
    # If specified, default is a function that gets called for objects
    # that can't otherwise be serialized.  It should return a JSON encodable
    # version of the object or raise a ``TypeError``.
    # If encoding is not None, then all input strings will be
    # transformed into unicode using that encoding prior to JSON-encoding.
    # The default is UTF-8.
    init do end
    
    # Encode the given object and yield each string
    # representation as available.
    # For example::
    # for chunk in JSONEncoder().iterencode(bigobject):
    # mysocket.write(chunk)
    redef fun iterencode(one_shot, o) is abstract
    
end

# Simple JSON <http://json.org> decoder
# Performs the following translations in decoding by default:
# +---------------+-------------------+
# | JSON          | Python            |
# +===============+===================+
# | object        | dict              |
# +---------------+-------------------+
# | array         | list              |
# +---------------+-------------------+
# | string        | unicode           |
# +---------------+-------------------+
# | number (int)  | int, long         |
# +---------------+-------------------+
# | number (real) | float             |
# +---------------+-------------------+
# | true          | True              |
# +---------------+-------------------+
# | false         | False             |
# +---------------+-------------------+
# | null          | None              |
# +---------------+-------------------+
# It also understands ``NaN``, ``Infinity``, and ``-Infinity`` as
# their corresponding ``float`` values, which is outside the JSON spec.
redef class JSONDecoder
    
    # Return the Python representation of ``s`` (a ``str`` or ``unicode``
    # instance containing a JSON document)
    redef fun decode(s, w) is abstract
    
    # ``encoding`` determines the encoding used to interpret any ``str``
    # objects decoded by this instance (utf-8 by default).  It has no
    # effect when decoding ``unicode`` objects.
    # Note that currently only encodings that are a superset of ASCII work,
    # strings of other encodings should be passed in as ``unicode``.
    # ``object_hook``, if specified, will be called with the result
    # of every JSON object decoded and its return value will be used in
    # place of the given ``dict``.  This can be used to provide custom
    # deserializations (e.g. to support JSON-RPC class hinting).
    # ``object_pairs_hook``, if specified will be called with the result of
    # every JSON object decoded with an ordered list of pairs.  The return
    # value of ``object_pairs_hook`` will be used instead of the ``dict``.
    # This feature can be used to implement custom decoders that rely on the
    # order that the key and value pairs are decoded (for example,
    # collections.OrderedDict will remember the order of insertion). If
    # ``object_hook`` is also defined, the ``object_pairs_hook`` takes
    # priority.
    # ``parse_float``, if specified, will be called with the string
    # of every JSON float to be decoded. By default this is equivalent to
    # float(num_str). This can be used to use another datatype or parser
    # for JSON floats (e.g. decimal.Decimal).
    # ``parse_int``, if specified, will be called with the string
    # of every JSON int to be decoded. By default this is equivalent to
    # int(num_str). This can be used to use another datatype or parser
    # for JSON integers (e.g. float).
    # ``parse_constant``, if specified, will be called with one of the
    # following strings: -Infinity, Infinity, NaN.
    # This can be used to raise an exception if invalid JSON numbers
    # are encountered.
    # If ``strict`` is false (true is the default), then control
    # characters will be allowed inside strings.  Control characters in
    # this context are those with character codes in the 0-31 range,
    # including ``'\t'`` (tab), ``'\n'``, ``'\r'`` and ``'\0'``.
    init do end
    
    # Decode a JSON document from ``s`` (a ``str`` or ``unicode``
    # beginning with a JSON document) and return a 2-tuple of the Python
    # representation and the index in ``s`` where the document ended.
    # This can be used to decode a JSON document from a string that may
    # have extraneous data at the end.
    redef fun raw_decode(s, idx) is abstract
    
end

