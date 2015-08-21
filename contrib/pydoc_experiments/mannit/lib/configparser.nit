# Configuration file parser.
# A setup file consists of sections, lead by a "[section]" header,
# and followed by "name: value" entries, with continuations and such in
# the style of RFC 822.
# The option values can contain format strings which refer to other values in
# the same section, or values in a special [DEFAULT] section.
# For example:
# something: %(dir)s/whatever
# would resolve the "%(dir)s" to the value of dir.  All reference
# expansions are done late, on demand.
# Intrinsic defaults can be specified by passing them into the
# ConfigParser constructor as a dictionary.
# class:
# ConfigParser -- responsible for parsing a list of
# configuration files, and managing the parsed database.
# methods:
# __init__(defaults=None)
# create the parser and specify a dictionary of intrinsic defaults.  The
# keys must be strings, the values must be appropriate for %()s string
# interpolation.  Note that `__name__' is always an intrinsic default;
# its value is the section's name.
# sections()
# return all the configuration section names, sans DEFAULT
# has_section(section)
# return whether the given section exists
# has_option(section, option)
# return whether the given option exists in the given section
# options(section)
# return list of configuration options for the named section
# read(filenames)
# read and parse the list of named configuration files, given by
# name.  A single filename is also allowed.  Non-existing files
# are ignored.  Return list of successfully read files.
# readfp(fp, filename=None)
# read and parse one configuration file, given as a file object.
# The filename defaults to fp.name; it is only used in error
# messages (if fp has no `name' attribute, the string `<???>' is used).
# get(section, option, raw=False, vars=None)
# return a string value for the named option.  All % interpolations are
# expanded in the return values, based on the defaults passed into the
# constructor and the DEFAULT section.  Additional substitutions may be
# provided using the `vars' argument, which must be a dictionary whose
# contents override any pre-existing defaults.
# getint(section, options)
# like get(), but convert value to an integer
# getfloat(section, options)
# like get(), but convert value to a float
# getboolean(section, options)
# like get(), but convert value to a boolean (currently case
# insensitively defined as 0, false, no, off for False, and 1, true,
# yes, on for True).  Returns False or True.
# items(section, raw=False, vars=None)
# return a list of tuples with (name, value) for each option
# in the section.
# remove_section(section)
# remove the given file section and all its options
# remove_option(section, option)
# remove the given option from the given section
# set(section, option, value)
# set the given option
# write(fp)
# write the configuration state in .ini format
module configparser

import userdict
import re
import builtins

class SafeConfigParser
    super ConfigParser
    
    redef fun private_interpolate(rawval, section, option, vars) is abstract
    
    # Set an option.  Extend ConfigParser.set: check for string values.
    redef fun set(section, option, value) is abstract
    
    private fun private_interpolate_some(map, option, section, rest, depth, accum: Object) is abstract
    
end

# Raised when substitutions are nested too deeply.
class InterpolationDepthError
    super InterpolationError
    
    init do end
    
end

# Dictionary that remembers insertion order
class OrderedDict
    super Dict
    
    # od.iteritems -> an iterator over the (key, value) pairs in od
    fun iteritems is abstract
    
    # Return state information for pickling
    fun reduce is abstract
    
    # od.pop(k[,d]) -> v, remove specified key and return the corresponding
    # value.  If key is not found, d is returned if given, otherwise KeyError
    # is raised.
    fun pop(default, key: Object) is abstract
    
    # od.viewkeys() -> a set-like object providing a view on od's keys
    fun viewkeys is abstract
    
    # od.__eq__(y) <==> od==y.  Comparison to another OD is order-sensitive
    # while comparison to a regular mapping is order-insensitive.
    fun eq(other: Object) is abstract
    
    # od.viewitems() -> a set-like object providing a view on od's items
    fun viewitems is abstract
    
    # od.__ne__(y) <==> od!=y
    fun ne(other: Object) is abstract
    
    # Initialize an ordered dictionary.  The signature is the same as
    # regular dictionaries, but keyword arguments are not recommended because
    # their insertion order is arbitrary.
    init do end
    
    # od.itervalues -> an iterator over the values in od
    fun itervalues is abstract
    
    # od.keys() -> list of keys in od
    fun keys is abstract
    
    # od.__reversed__() <==> reversed(od)
    fun reversed is abstract
    
    # D.update([E, ]**F) -> None.  Update D from mapping/iterable E and F.
    # If E present and has a .keys() method, does:     for k in E: D[k] = E[k]
    # If E present and lacks .keys() method, does:     for (k, v) in E: D[k] = v
    # In either case, this is followed by: for k, v in F.items(): D[k] = v
    fun update is abstract
    
    # od.__repr__() <==> repr(od)
    fun repr(repr_running: Object) is abstract
    
    # od.__delitem__(y) <==> del od[y]
    fun delitem(key, dict_delitem: Object) is abstract
    
    # od.popitem() -> (k, v), return and remove a (key, value) pair.
    # Pairs are returned in LIFO order if last is true or FIFO order if false.
    fun popitem(last: Object) is abstract
    
    # od.copy() -> a shallow copy of od
    fun copy is abstract
    
    # od.iterkeys() -> an iterator over the keys in od
    fun iterkeys is abstract
    
    # OD.fromkeys(S[, v]) -> New ordered dictionary with keys from S.
    # If not specified, the value defaults to None.
    fun fromkeys(iterable, value, cls: Object) is abstract
    
    # od.setdefault(k[,d]) -> od.get(k,d), also set od[k]=d if k not in od
    fun setdefault(default, key: Object) is abstract
    
    # od.viewvalues() -> an object providing a view on od's values
    fun viewvalues is abstract
    
    # od.items() -> list of (key, value) pairs in od
    fun items is abstract
    
    # od.clear() -> None.  Remove all items from od.
    fun clear is abstract
    
    # od.__iter__() <==> iter(od)
    fun iter is abstract
    
    # od.__setitem__(i, y) <==> od[i]=y
    fun setitem(dict_setitem, key, value: Object) is abstract
    
    # od.values() -> list of values in od
    fun values is abstract
    
end

# A string substitution required a setting which was not available.
class InterpolationMissingOptionError
    super InterpolationError
    
    init do end
    
end

# Raised when a section is multiply-created.
class DuplicateSectionError
    super Error
    
    init do end
    
end

# Base class for interpolation-related exceptions.
class InterpolationError
    super Error
    
    init do end
    
end

# Raised when the source text into which substitutions are made
# does not conform to the required syntax.
class InterpolationSyntaxError
    super InterpolationError
    
end

redef class Sys
    
end

# Raised when a key-value pair is found before any section header.
class MissingSectionHeaderError
    super ParsingError
    
    init do end
    
end

class RawConfigParser
    
    fun optionxform(optionstr: Object) is abstract
    
    # Like read() but the argument must be a file-like object.
    # The `fp' argument must have a `readline' method.  Optional
    # second argument is the `filename', which if not given, is
    # taken from fp.name.  If fp has no `name' attribute, `<???>' is
    # used.
    fun readfp(fp, filename: Object) is abstract
    
    fun getfloat(section, option: Object) is abstract
    
    # Set an option.
    fun set(section, option, value: Object) is abstract
    
    fun defaults is abstract
    
    # Check for the existence of a given option in a given section.
    fun has_option(section, option: Object) is abstract
    
    fun get(section, option: Object) is abstract
    
    # Read and parse a filename or a list of filenames.
    # Files that cannot be opened are silently ignored; this is
    # designed so that you can specify a list of potential
    # configuration file locations (e.g. current directory, user's
    # home directory, systemwide directory), and all existing
    # configuration files in the list will be read.  A single
    # filename may also be given.
    # Return list of successfully read files.
    fun read(filenames: Object) is abstract
    
    fun items(section: Object) is abstract
    
    # Return a list of option names for the given section name.
    fun options(section: Object) is abstract
    
    fun getboolean(section, option: Object) is abstract
    
    # Indicate whether the named section is present in the configuration.
    # The DEFAULT section is not acknowledged.
    fun has_section(section: Object) is abstract
    
    # Write an .ini-format representation of the configuration state.
    fun write(fp: Object) is abstract
    
    # Remove an option.
    fun remove_option(section, option: Object) is abstract
    
    init do end
    
    private fun private_get(section, option, conv: Object) is abstract
    
    # Parse a sectioned setup file.
    # The sections in setup file contains a title line at the top,
    # indicated by a name in square brackets (`[]'), plus key/value
    # options lines, indicated by `name: value' format lines.
    # Continuations are represented by an embedded newline then
    # leading whitespace.  Blank lines, lines beginning with a '#',
    # and just about everything else are ignored.
    private fun private_read(fp, fpname: Object) is abstract
    
    # Remove a file section.
    fun remove_section(section: Object) is abstract
    
    # Return a list of section names, excluding [DEFAULT]
    fun sections is abstract
    
    # Create a new section in the configuration.
    # Raise DuplicateSectionError if a section by the specified name
    # already exists. Raise ValueError if name is DEFAULT or any of it's
    # case-insensitive variants.
    fun add_section(section: Object) is abstract
    
    fun getint(section, option: Object) is abstract
    
end

# Raised when a configuration file does not follow legal syntax.
class ParsingError
    super Error
    
    init do end
    
    fun append(line, lineno: Object) is abstract
    
end

# Base class for ConfigParser exceptions.
redef class Error
    
    init do end
    
    # Setter for 'message'; needed only to override deprecation in
    # BaseException.
    private fun private_set_message(value: Object) is abstract
    
    fun repr is abstract
    
    # Getter for 'message'; needed only to override deprecation in
    # BaseException.
    private fun private_get_message is abstract
    
end

# A requested option was not found.
class NoOptionError
    super Error
    
    init do end
    
end

# Raised when no section matches a requested option.
class NoSectionError
    super Error
    
    init do end
    
end

# Combine multiple mappings for successive lookups.
# For example, to emulate Python's normal lookup sequence:
# import __builtin__
# pylookup = _Chainmap(locals(), globals(), vars(__builtin__))
private class Chainmap
    super DictMixin
    
    fun keys is abstract
    
    init do end
    
    fun getitem(key: Object) is abstract
    
end

class ConfigParser
    super RawConfigParser
    
    # Return a list of tuples with (name, value) for each option
    # in the section.
    # All % interpolations are expanded in the return values, based on the
    # defaults passed into the constructor, unless the optional argument
    # `raw' is true.  Additional substitutions may be provided using the
    # `vars' argument, which must be a dictionary whose contents overrides
    # any pre-existing defaults.
    # The section DEFAULT is special.
    redef fun items(section) is abstract
    
    private fun private_interpolate(rawval, section, option, vars: Object) is abstract
    
    private fun private_interpolation_replace(match: Object) is abstract
    
    # Get an option value for a given section.
    # If `vars' is provided, it must be a dictionary. The option is looked up
    # in `vars' (if provided), `section', and in `defaults' in that order.
    # All % interpolations are expanded in the return values, unless the
    # optional argument `raw' is true. Values for interpolation keys are
    # looked up in the same manner as the option.
    # The section DEFAULT is special.
    redef fun get(section, option) is abstract
    
end

