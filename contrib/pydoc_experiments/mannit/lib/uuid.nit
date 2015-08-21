# UUID objects (universally unique identifiers) according to RFC 4122.
# This module provides immutable UUID objects (class UUID) and the functions
# uuid1(), uuid3(), uuid4(), uuid5() for generating version 1, 3, 4, and 5
# UUIDs as specified in RFC 4122.
# If all you want is a unique ID, you should probably call uuid1() or uuid4().
# Note that uuid1() may compromise privacy since it creates a UUID containing
# the computer's network address.  uuid4() creates a random UUID.
# Typical usage:
# >>> import uuid
# # make a UUID based on the host ID and current time
# >>> uuid.uuid1()
# UUID('a8098c1a-f86e-11da-bd1a-00112444be1e')
# # make a UUID using an MD5 hash of a namespace UUID and a name
# >>> uuid.uuid3(uuid.NAMESPACE_DNS, 'python.org')
# UUID('6fa459ea-ee8a-3ca4-894e-db77e160355e')
# # make a random UUID
# >>> uuid.uuid4()
# UUID('16fd2706-8baf-433b-82eb-8c7fada847da')
# # make a UUID using a SHA-1 hash of a namespace UUID and a name
# >>> uuid.uuid5(uuid.NAMESPACE_DNS, 'python.org')
# UUID('886313e1-3b8a-5372-9b90-0c9aee199e5d')
# # make a UUID from a string of hex digits (braces and hyphens ignored)
# >>> x = uuid.UUID('{00010203-0405-0607-0809-0a0b0c0d0e0f}')
# # convert a UUID to a string of hex digits in standard form
# >>> str(x)
# '00010203-0405-0607-0809-0a0b0c0d0e0f'
# # get the raw 16 bytes of the UUID
# >>> x.bytes
# '\x00\x01\x02\x03\x04\x05\x06\x07\x08\t\n\x0b\x0c\r\x0e\x0f'
# # make a UUID from a 16-byte string
# >>> uuid.UUID(bytes=x.bytes)
# UUID('00010203-0405-0607-0809-0a0b0c0d0e0f')
module uuid

import sys
import util
import builtins

redef class Sys
    
end

# Instances of the UUID class represent UUIDs as specified in RFC 4122.
# UUID objects are immutable, hashable, and usable as dictionary keys.
# Converting a UUID to a string with str() yields something in the form
# '12345678-1234-1234-1234-123456789abc'.  The UUID constructor accepts
# five possible forms: a similar string of hexadecimal digits, or a tuple
# of six integer fields (with 32-bit, 16-bit, 16-bit, 8-bit, 8-bit, and
# 48-bit values respectively) as an argument named 'fields', or a string
# of 16 bytes (with all the integer fields in big-endian order) as an
# argument named 'bytes', or a string of 16 bytes (with the first three
# fields in little-endian order) as an argument named 'bytes_le', or a
# single 128-bit integer as an argument named 'int'.
# UUIDs have these read-only attributes:
# bytes       the UUID as a 16-byte string (containing the six
# integer fields in big-endian byte order)
# bytes_le    the UUID as a 16-byte string (with time_low, time_mid,
# and time_hi_version in little-endian byte order)
# fields      a tuple of the six integer fields of the UUID,
# which are also available as six individual attributes
# and two derived attributes:
# time_low                the first 32 bits of the UUID
# time_mid                the next 16 bits of the UUID
# time_hi_version         the next 16 bits of the UUID
# clock_seq_hi_variant    the next 8 bits of the UUID
# clock_seq_low           the next 8 bits of the UUID
# node                    the last 48 bits of the UUID
# time                    the 60-bit timestamp
# clock_seq               the 14-bit sequence number
# hex         the UUID as a 32-character hexadecimal string
# int         the UUID as a 128-bit integer
# urn         the UUID as a URN as specified in RFC 4122
# variant     the UUID variant (one of the constants RESERVED_NCS,
# RFC_4122, RESERVED_MICROSOFT, or RESERVED_FUTURE)
# version     the UUID version number (1 through 5, meaningful only
# when the variant is RFC_4122)
class UUID
    
    fun int is abstract
    
    fun get_time_hi_version is abstract
    
    fun get_time_mid is abstract
    
    fun get_variant is abstract
    
    fun get_clock_seq is abstract
    
    fun get_fields is abstract
    
    # Create a UUID from either a string of 32 hexadecimal digits,
    # a string of 16 bytes as the 'bytes' argument, a string of 16 bytes
    # in little-endian order as the 'bytes_le' argument, a tuple of six
    # integers (32-bit time_low, 16-bit time_mid, 16-bit time_hi_version,
    # 8-bit clock_seq_hi_variant, 8-bit clock_seq_low, 48-bit node) as
    # the 'fields' argument, or a single 128-bit integer as the 'int'
    # argument.  When a string of hex digits is given, curly braces,
    # hyphens, and a URN prefix are all optional.  For example, these
    # expressions all yield the same UUID:
    # UUID('{12345678-1234-5678-1234-567812345678}')
    # UUID('12345678123456781234567812345678')
    # UUID('urn:uuid:12345678-1234-5678-1234-567812345678')
    # UUID(bytes='\x12\x34\x56\x78'*4)
    # UUID(bytes_le='\x78\x56\x34\x12\x34\x12\x78\x56' +
    # '\x12\x34\x56\x78\x12\x34\x56\x78')
    # UUID(fields=(0x12345678, 0x1234, 0x5678, 0x12, 0x34, 0x567812345678))
    # UUID(int=0x12345678123456781234567812345678)
    # Exactly one of 'hex', 'bytes', 'bytes_le', 'fields', or 'int' must
    # be given.  The 'version' argument is optional; if given, the resulting
    # UUID will have its variant and version set according to RFC 4122,
    # overriding the given 'hex', 'bytes', 'bytes_le', 'fields', or 'int'.
    init do end
    
    fun get_clock_seq_low is abstract
    
    fun get_hex is abstract
    
    fun hash is abstract
    
    fun repr is abstract
    
    fun get_bytes is abstract
    
    fun get_clock_seq_hi_variant is abstract
    
    fun get_node is abstract
    
    fun setattr(name, value: Object) is abstract
    
    fun get_bytes_le is abstract
    
    fun get_urn is abstract
    
    fun str is abstract
    
    fun get_time is abstract
    
    fun cmp(other: Object) is abstract
    
    fun get_version is abstract
    
    fun get_time_low is abstract
    
end

