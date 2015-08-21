# Module difflib -- helpers for computing deltas between objects.
# Function get_close_matches(word, possibilities, n=3, cutoff=0.6):
# Use SequenceMatcher to return list of the best "good enough" matches.
# Function context_diff(a, b):
# For two lists of strings, return a delta in context diff format.
# Function ndiff(a, b):
# Return a delta: the difference between `a` and `b` (lists of strings).
# Function restore(delta, which):
# Return one of the two sequences that generated an ndiff delta.
# Function unified_diff(a, b):
# For two lists of strings, return a delta in unified diff format.
# Class SequenceMatcher:
# A flexible class for comparing pairs of sequences of any type.
# Class Differ:
# For producing human-readable deltas from sequences of lines of text.
# Class HtmlDiff:
# For producing HTML side by side comparison with change highlights.
module difflib

import heapq
import builtins

redef class Sys
    
end

# Differ is a class for comparing sequences of lines of text, and
# producing human-readable differences or deltas.  Differ uses
# SequenceMatcher both to compare sequences of lines, and to compare
# sequences of characters within similar (near-matching) lines.
# Each line of a Differ delta begins with a two-letter code:
# '- '    line unique to sequence 1
# '+ '    line unique to sequence 2
# '  '    line common to both sequences
# '? '    line not present in either input sequence
# Lines beginning with '? ' attempt to guide the eye to intraline
# differences, and were not present in either input sequence.  These lines
# can be confusing if the sequences contain tab characters.
# Note that Differ makes no claim to produce a *minimal* diff.  To the
# contrary, minimal diffs are often counter-intuitive, because they synch
# up anywhere possible, sometimes accidental matches 100 pages apart.
# Restricting synch points to contiguous matches preserves some notion of
# locality, at the occasional cost of producing a longer diff.
# Example: Comparing two texts.
# First we set up the texts, sequences of individual single-line strings
# ending with newlines (such sequences can also be obtained from the
# `readlines()` method of file-like objects):
# >>> text1 = '''  1. Beautiful is better than ugly.
# ...   2. Explicit is better than implicit.
# ...   3. Simple is better than complex.
# ...   4. Complex is better than complicated.
# ... '''.splitlines(1)
# >>> len(text1)
# 4
# >>> text1[0][-1]
# '\n'
# >>> text2 = '''  1. Beautiful is better than ugly.
# ...   3.   Simple is better than complex.
# ...   4. Complicated is better than complex.
# ...   5. Flat is better than nested.
# ... '''.splitlines(1)
# Next we instantiate a Differ object:
# >>> d = Differ()
# Note that when instantiating a Differ object we may pass functions to
# filter out line and character 'junk'.  See Differ.__init__ for details.
# Finally, we compare the two:
# >>> result = list(d.compare(text1, text2))
# 'result' is a list of strings, so let's pretty-print it:
# >>> from pprint import pprint as _pprint
# >>> _pprint(result)
# ['    1. Beautiful is better than ugly.\n',
# '-   2. Explicit is better than implicit.\n',
# '-   3. Simple is better than complex.\n',
# '+   3.   Simple is better than complex.\n',
# '?     ++\n',
# '-   4. Complex is better than complicated.\n',
# '?            ^                     ---- ^\n',
# '+   4. Complicated is better than complex.\n',
# '?           ++++ ^                      ^\n',
# '+   5. Flat is better than nested.\n']
# As a single multi-line string it looks like this:
# >>> print ''.join(result),
# 1. Beautiful is better than ugly.
# -   2. Explicit is better than implicit.
# -   3. Simple is better than complex.
# +   3.   Simple is better than complex.
# ?     ++
# -   4. Complex is better than complicated.
# ?            ^                     ---- ^
# +   4. Complicated is better than complex.
# ?           ++++ ^                      ^
# +   5. Flat is better than nested.
# Methods:
# __init__(linejunk=None, charjunk=None)
# Construct a text differencer, with optional filters.
# compare(a, b)
# Compare two sequences of lines; generate the resulting delta.
class Differ
    
    # Compare two sequences of lines; generate the resulting delta.
    # Each sequence must contain individual single-line strings ending with
    # newlines. Such sequences can be obtained from the `readlines()` method
    # of file-like objects.  The delta generated also consists of newline-
    # terminated strings, ready to be printed as-is via the writeline()
    # method of a file-like object.
    # Example:
    # >>> print ''.join(Differ().compare('one\ntwo\nthree\n'.splitlines(1),
    # ...                                'ore\ntree\nemu\n'.splitlines(1))),
    # - one
    # ?  ^
    # + ore
    # ?  ^
    # - two
    # - three
    # ?  -
    # + tree
    # + emu
    fun compare(a, b: Object) is abstract
    
    private fun private_plain_replace(a, alo, bhi, b, ahi, blo: Object) is abstract
    
    private fun private_fancy_helper(a, alo, bhi, b, ahi, blo: Object) is abstract
    
    # When replacing one block of lines with another, search the blocks
    # for *similar* lines; the best-matching pair (if any) is used as a
    # synch point, and intraline difference marking is done on the
    # similar pair. Lots of work, but often worth it.
    # Example:
    # >>> d = Differ()
    # >>> results = d._fancy_replace(['abcDefghiJkl\n'], 0, 1,
    # ...                            ['abcdefGhijkl\n'], 0, 1)
    # >>> print ''.join(results),
    # - abcDefghiJkl
    # ?    ^  ^  ^
    # + abcdefGhijkl
    # ?    ^  ^  ^
    private fun private_fancy_replace(a, alo, bhi, b, ahi, blo: Object) is abstract
    
    # Generate comparison results for a same-tagged range.
    private fun private_dump(x, hi, tag, lo: Object) is abstract
    
    # Format "?" output and deal with leading tabs.
    # Example:
    # >>> d = Differ()
    # >>> results = d._qformat('\tabcDefghiJkl\n', '\tabcdefGhijkl\n',
    # ...                      '  ^ ^  ^      ', '  ^ ^  ^      ')
    # >>> for line in results: print repr(line)
    # ...
    # '- \tabcDefghiJkl\n'
    # '? \t ^ ^  ^\n'
    # '+ \tabcdefGhijkl\n'
    # '? \t ^ ^  ^\n'
    private fun private_qformat(btags, bline, aline, atags: Object) is abstract
    
    # Construct a text differencer, with optional filters.
    # The two optional keyword parameters are for filter functions:
    # - `linejunk`: A function that should accept a single string argument,
    # and return true iff the string is junk. The module-level function
    # `IS_LINE_JUNK` may be used to filter out lines without visible
    # characters, except for at most one splat ('#').  It is recommended
    # to leave linejunk None; as of Python 2.3, the underlying
    # SequenceMatcher class has grown an adaptive notion of "noise" lines
    # that's better than any static definition the author has ever been
    # able to craft.
    # - `charjunk`: A function that should accept a string of length 1. The
    # module-level function `IS_CHARACTER_JUNK` may be used to filter out
    # whitespace characters (a blank or tab; **note**: bad idea to include
    # newline in this!).  Use of IS_CHARACTER_JUNK is recommended.
    init do end
    
end

# SequenceMatcher is a flexible class for comparing pairs of sequences of
# any type, so long as the sequence elements are hashable.  The basic
# algorithm predates, and is a little fancier than, an algorithm
# published in the late 1980's by Ratcliff and Obershelp under the
# hyperbolic name "gestalt pattern matching".  The basic idea is to find
# the longest contiguous matching subsequence that contains no "junk"
# elements (R-O doesn't address junk).  The same idea is then applied
# recursively to the pieces of the sequences to the left and to the right
# of the matching subsequence.  This does not yield minimal edit
# sequences, but does tend to yield matches that "look right" to people.
# SequenceMatcher tries to compute a "human-friendly diff" between two
# sequences.  Unlike e.g. UNIX(tm) diff, the fundamental notion is the
# longest *contiguous* & junk-free matching subsequence.  That's what
# catches peoples' eyes.  The Windows(tm) windiff has another interesting
# notion, pairing up elements that appear uniquely in each sequence.
# That, and the method here, appear to yield more intuitive difference
# reports than does diff.  This method appears to be the least vulnerable
# to synching up on blocks of "junk lines", though (like blank lines in
# ordinary text files, or maybe "<P>" lines in HTML files).  That may be
# because this is the only method of the 3 that has a *concept* of
# "junk" <wink>.
# Example, comparing two strings, and considering blanks to be "junk":
# >>> s = SequenceMatcher(lambda x: x == " ",
# ...                     "private Thread currentThread;",
# ...                     "private volatile Thread currentThread;")
# >>>
# .ratio() returns a float in [0, 1], measuring the "similarity" of the
# sequences.  As a rule of thumb, a .ratio() value over 0.6 means the
# sequences are close matches:
# >>> print round(s.ratio(), 3)
# 0.866
# >>>
# If you're only interested in where the sequences match,
# .get_matching_blocks() is handy:
# >>> for block in s.get_matching_blocks():
# ...     print "a[%d] and b[%d] match for %d elements" % block
# a[0] and b[0] match for 8 elements
# a[8] and b[17] match for 21 elements
# a[29] and b[38] match for 0 elements
# Note that the last tuple returned by .get_matching_blocks() is always a
# dummy, (len(a), len(b), 0), and this is the only case in which the last
# tuple element (number of elements matched) is 0.
# If you want to know how to change the first sequence into the second,
# use .get_opcodes():
# >>> for opcode in s.get_opcodes():
# ...     print "%6s a[%d:%d] b[%d:%d]" % opcode
# equal a[0:8] b[0:8]
# insert a[8:8] b[8:17]
# equal a[8:29] b[17:38]
# See the Differ class for a fancy human-friendly file differencer, which
# uses SequenceMatcher both to compare sequences of lines, and to compare
# sequences of characters within similar (near-matching) lines.
# See also function get_close_matches() in this module, which shows how
# simple code building on SequenceMatcher can be used to do useful work.
# Timing:  Basic R-O is cubic time worst case and quadratic time expected
# case.  SequenceMatcher is quadratic time for the worst case and has
# expected-case behavior dependent in a complicated way on how many
# elements the sequences have in common; best case time is linear.
# Methods:
# __init__(isjunk=None, a='', b='')
# Construct a SequenceMatcher.
# set_seqs(a, b)
# Set the two sequences to be compared.
# set_seq1(a)
# Set the first sequence to be compared.
# set_seq2(b)
# Set the second sequence to be compared.
# find_longest_match(alo, ahi, blo, bhi)
# Find longest matching block in a[alo:ahi] and b[blo:bhi].
# get_matching_blocks()
# Return list of triples describing matching subsequences.
# get_opcodes()
# Return list of 5-tuples describing how to turn a into b.
# ratio()
# Return a measure of the sequences' similarity (float in [0,1]).
# quick_ratio()
# Return an upper bound on .ratio() relatively quickly.
# real_quick_ratio()
# Return an upper bound on ratio() very quickly.
class SequenceMatcher
    
    # Construct a SequenceMatcher.
    # Optional arg isjunk is None (the default), or a one-argument
    # function that takes a sequence element and returns true iff the
    # element is junk.  None is equivalent to passing "lambda x: 0", i.e.
    # no elements are considered to be junk.  For example, pass
    # lambda x: x in " \t"
    # if you're comparing lines as sequences of characters, and don't
    # want to synch up on blanks or hard tabs.
    # Optional arg a is the first of two sequences to be compared.  By
    # default, an empty string.  The elements of a must be hashable.  See
    # also .set_seqs() and .set_seq1().
    # Optional arg b is the second of two sequences to be compared.  By
    # default, an empty string.  The elements of b must be hashable. See
    # also .set_seqs() and .set_seq2().
    # Optional arg autojunk should be set to False to disable the
    # "automatic junk heuristic" that treats popular elements as junk
    # (see module documentation for more information).
    init do end
    
    # Return a measure of the sequences' similarity (float in [0,1]).
    # Where T is the total number of elements in both sequences, and
    # M is the number of matches, this is 2.0*M / T.
    # Note that this is 1 if the sequences are identical, and 0 if
    # they have nothing in common.
    # .ratio() is expensive to compute if you haven't already computed
    # .get_matching_blocks() or .get_opcodes(), in which case you may
    # want to try .quick_ratio() or .real_quick_ratio() first to get an
    # upper bound.
    # >>> s = SequenceMatcher(None, "abcd", "bcde")
    # >>> s.ratio()
    # 0.75
    # >>> s.quick_ratio()
    # 0.75
    # >>> s.real_quick_ratio()
    # 1.0
    fun ratio is abstract
    
    fun chain_b is abstract
    
    # Return list of triples describing matching subsequences.
    # Each triple is of the form (i, j, n), and means that
    # a[i:i+n] == b[j:j+n].  The triples are monotonically increasing in
    # i and in j.  New in Python 2.5, it's also guaranteed that if
    # (i, j, n) and (i', j', n') are adjacent triples in the list, and
    # the second is not the last triple in the list, then i+n != i' or
    # j+n != j'.  IOW, adjacent triples never describe adjacent equal
    # blocks.
    # The last triple is a dummy, (len(a), len(b), 0), and is the only
    # triple with n==0.
    # >>> s = SequenceMatcher(None, "abxcd", "abcd")
    # >>> s.get_matching_blocks()
    # [Match(a=0, b=0, size=2), Match(a=3, b=2, size=2), Match(a=5, b=4, size=0)]
    fun get_matching_blocks is abstract
    
    # Isolate change clusters by eliminating ranges with no changes.
    # Return a generator of groups with up to n lines of context.
    # Each group is in the same format as returned by get_opcodes().
    # >>> from pprint import pprint
    # >>> a = map(str, range(1,40))
    # >>> b = a[:]
    # >>> b[8:8] = ['i']     # Make an insertion
    # >>> b[20] += 'x'       # Make a replacement
    # >>> b[23:28] = []      # Make a deletion
    # >>> b[30] += 'y'       # Make another replacement
    # >>> pprint(list(SequenceMatcher(None,a,b).get_grouped_opcodes()))
    # [[('equal', 5, 8, 5, 8), ('insert', 8, 8, 8, 9), ('equal', 8, 11, 9, 12)],
    # [('equal', 16, 19, 17, 20),
    # ('replace', 19, 20, 20, 21),
    # ('equal', 20, 22, 21, 23),
    # ('delete', 22, 27, 23, 23),
    # ('equal', 27, 30, 23, 26)],
    # [('equal', 31, 34, 27, 30),
    # ('replace', 34, 35, 30, 31),
    # ('equal', 35, 38, 31, 34)]]
    fun get_grouped_opcodes(n: Object) is abstract
    
    # Set the first sequence to be compared.
    # The second sequence to be compared is not changed.
    # >>> s = SequenceMatcher(None, "abcd", "bcde")
    # >>> s.ratio()
    # 0.75
    # >>> s.set_seq1("bcde")
    # >>> s.ratio()
    # 1.0
    # >>>
    # SequenceMatcher computes and caches detailed information about the
    # second sequence, so if you want to compare one sequence S against
    # many sequences, use .set_seq2(S) once and call .set_seq1(x)
    # repeatedly for each of the other sequences.
    # See also set_seqs() and set_seq2().
    fun set_seq1(a: Object) is abstract
    
    # Set the second sequence to be compared.
    # The first sequence to be compared is not changed.
    # >>> s = SequenceMatcher(None, "abcd", "bcde")
    # >>> s.ratio()
    # 0.75
    # >>> s.set_seq2("abcd")
    # >>> s.ratio()
    # 1.0
    # >>>
    # SequenceMatcher computes and caches detailed information about the
    # second sequence, so if you want to compare one sequence S against
    # many sequences, use .set_seq2(S) once and call .set_seq1(x)
    # repeatedly for each of the other sequences.
    # See also set_seqs() and set_seq1().
    fun set_seq2(b: Object) is abstract
    
    # Set the two sequences to be compared.
    # >>> s = SequenceMatcher()
    # >>> s.set_seqs("abcd", "bcde")
    # >>> s.ratio()
    # 0.75
    fun set_seqs(a, b: Object) is abstract
    
    # Return an upper bound on ratio() relatively quickly.
    # This isn't defined beyond that it is an upper bound on .ratio(), and
    # is faster to compute.
    fun quick_ratio is abstract
    
    # Return list of 5-tuples describing how to turn a into b.
    # Each tuple is of the form (tag, i1, i2, j1, j2).  The first tuple
    # has i1 == j1 == 0, and remaining tuples have i1 == the i2 from the
    # tuple preceding it, and likewise for j1 == the previous j2.
    # The tags are strings, with these meanings:
    # 'replace':  a[i1:i2] should be replaced by b[j1:j2]
    # 'delete':   a[i1:i2] should be deleted.
    # Note that j1==j2 in this case.
    # 'insert':   b[j1:j2] should be inserted at a[i1:i1].
    # Note that i1==i2 in this case.
    # 'equal':    a[i1:i2] == b[j1:j2]
    # >>> a = "qabxcd"
    # >>> b = "abycdf"
    # >>> s = SequenceMatcher(None, a, b)
    # >>> for tag, i1, i2, j1, j2 in s.get_opcodes():
    # ...    print ("%7s a[%d:%d] (%s) b[%d:%d] (%s)" %
    # ...           (tag, i1, i2, a[i1:i2], j1, j2, b[j1:j2]))
    # delete a[0:1] (q) b[0:0] ()
    # equal a[1:3] (ab) b[0:2] (ab)
    # replace a[3:4] (x) b[2:3] (y)
    # equal a[4:6] (cd) b[3:5] (cd)
    # insert a[6:6] () b[5:6] (f)
    fun get_opcodes is abstract
    
    # Return an upper bound on ratio() very quickly.
    # This isn't defined beyond that it is an upper bound on .ratio(), and
    # is faster to compute than either .ratio() or .quick_ratio().
    fun real_quick_ratio is abstract
    
    # Find longest matching block in a[alo:ahi] and b[blo:bhi].
    # If isjunk is not defined:
    # Return (i,j,k) such that a[i:i+k] is equal to b[j:j+k], where
    # alo <= i <= i+k <= ahi
    # blo <= j <= j+k <= bhi
    # and for all (i',j',k') meeting those conditions,
    # k >= k'
    # i <= i'
    # and if i == i', j <= j'
    # In other words, of all maximal matching blocks, return one that
    # starts earliest in a, and of all those maximal matching blocks that
    # start earliest in a, return the one that starts earliest in b.
    # >>> s = SequenceMatcher(None, " abcd", "abcd abcd")
    # >>> s.find_longest_match(0, 5, 0, 9)
    # Match(a=0, b=4, size=5)
    # If isjunk is defined, first the longest matching block is
    # determined as above, but with the additional restriction that no
    # junk element appears in the block.  Then that block is extended as
    # far as possible by matching (only) junk elements on both sides.  So
    # the resulting block never matches on junk except as identical junk
    # happens to be adjacent to an "interesting" match.
    # Here's the same example as before, but considering blanks to be
    # junk.  That prevents " abcd" from matching the " abcd" at the tail
    # end of the second sequence directly.  Instead only the "abcd" can
    # match, and matches the leftmost "abcd" in the second sequence:
    # >>> s = SequenceMatcher(lambda x: x==" ", " abcd", "abcd abcd")
    # >>> s.find_longest_match(0, 5, 0, 9)
    # Match(a=1, b=0, size=4)
    # If no blocks match, return (alo, blo, 0).
    # >>> s = SequenceMatcher(None, "ab", "c")
    # >>> s.find_longest_match(0, 2, 0, 1)
    # Match(a=0, b=0, size=0)
    fun find_longest_match(bhi, alo, blo, ahi: Object) is abstract
    
end

# Match(a, b, size)
class Match
    super Tuple
    
    # Exclude the OrderedDict from pickling
    fun getstate is abstract
    
    # Return a nicely formatted representation string
    fun repr is abstract
    
    # Make a new Match object from a sequence or iterable
    private fun private_make(py_new, iterable, len, cls: Object) is abstract
    
    # Return a new Match object replacing specified fields with new values
    private fun private_replace(py_self: Object) is abstract
    
    # Return self as a plain tuple.  Used by copy and pickle.
    fun getnewargs is abstract
    
    # Return a new OrderedDict which maps field names to their values
    private fun private_asdict is abstract
    
end

# For producing HTML side by side comparison with change highlights.
# This class can be used to create an HTML table (or a complete HTML file
# containing the table) showing a side by side, line by line comparison
# of text with inter-line and intra-line change highlights.  The table can
# be generated in either full or contextual difference mode.
# The following methods are provided for HTML generation:
# make_table -- generates HTML for a single side by side table
# make_file -- generates complete HTML file with a single side by side table
# See tools/scripts/diff.py for an example usage of this class.
class HtmlDiff
    
    # Makes list of "next" links
    private fun private_convert_flags(fromlist, tolist, flaglist, context, numlines: Object) is abstract
    
    # Returns HTML file of side by side comparison with change highlights
    # Arguments:
    # fromlines -- list of "from" lines
    # tolines -- list of "to" lines
    # fromdesc -- "from" file column header string
    # todesc -- "to" file column header string
    # context -- set to True for contextual differences (defaults to False
    # which shows full differences).
    # numlines -- number of context lines.  When context is set True,
    # controls number of lines displayed before and after the change.
    # When context is False, controls the number of lines to place
    # the "next" link anchors before the next change (so click of
    # "next" link jumps to just before the change).
    fun make_file(fromlines, todesc, numlines, fromdesc, context, tolines: Object) is abstract
    
    # Create unique anchor prefixes
    private fun private_make_prefix is abstract
    
    # Returns from/to line lists with tabs expanded and newlines removed.
    # Instead of tab characters being replaced by the number of spaces
    # needed to fill in to the next tab stop, this function will fill
    # the space with tab characters.  This is done so that the difference
    # algorithms can identify changes in a file when tabs are replaced by
    # spaces and vice versa.  At the end of the HTML generation, the tab
    # characters will be replaced with a nonbreakable space.
    private fun private_tab_newline_replace(fromlines, tolines: Object) is abstract
    
    # Builds list of text lines by splitting text lines at wrap point
    # This function will determine if the input text line needs to be
    # wrapped (split) into separate lines.  If so, the first wrap point
    # will be determined and the first line appended to the output
    # text line list.  This function is used recursively to handle
    # the second part of the split line to further split it.
    private fun private_split_line(text, data_list, line_num: Object) is abstract
    
    # HtmlDiff instance initializer
    # Arguments:
    # tabsize -- tab stop spacing, defaults to 8.
    # wrapcolumn -- column number where lines are broken and wrapped,
    # defaults to None where lines are not wrapped.
    # linejunk,charjunk -- keyword arguments passed into ndiff() (used to by
    # HtmlDiff() to generate the side by side HTML differences).  See
    # ndiff() documentation for argument default values and descriptions.
    init do end
    
    # Returns HTML markup of "from" / "to" text lines
    # side -- 0 or 1 indicating "from" or "to" text
    # flag -- indicates if difference on line
    # linenum -- line number (used for line number column)
    # text -- line text to be marked up
    private fun private_format_line(linenum, flag, side, text: Object) is abstract
    
    # Returns HTML table of side by side comparison with change highlights
    # Arguments:
    # fromlines -- list of "from" lines
    # tolines -- list of "to" lines
    # fromdesc -- "from" file column header string
    # todesc -- "to" file column header string
    # context -- set to True for contextual differences (defaults to False
    # which shows full differences).
    # numlines -- number of context lines.  When context is set True,
    # controls number of lines displayed before and after the change.
    # When context is False, controls the number of lines to place
    # the "next" link anchors before the next change (so click of
    # "next" link jumps to just before the change).
    fun make_table(fromlines, todesc, numlines, fromdesc, context, tolines: Object) is abstract
    
    # Returns iterator that splits (wraps) mdiff text lines
    private fun private_line_wrapper(diffs: Object) is abstract
    
    # Collects mdiff output into separate lists
    # Before storing the mdiff from/to data into a list, it is converted
    # into a single line of text with HTML markup.
    private fun private_collect_lines(diffs: Object) is abstract
    
end

