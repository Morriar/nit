# Text wrapping and filling.
module textwrap

import builtins

redef class Sys
    
end

# Object for wrapping/filling text.  The public interface consists of
# the wrap() and fill() methods; the other methods are just there for
# subclasses to override in order to tweak the default behaviour.
# If you want to completely replace the main wrapping algorithm,
# you'll probably have to override _wrap_chunks().
# Several instance attributes control various aspects of wrapping:
# width (default: 70)
# the maximum width of wrapped lines (unless break_long_words
# is false)
# initial_indent (default: "")
# string that will be prepended to the first line of wrapped
# output.  Counts towards the line's width.
# subsequent_indent (default: "")
# string that will be prepended to all lines save the first
# of wrapped output; also counts towards each line's width.
# expand_tabs (default: true)
# Expand tabs in input text to spaces before further processing.
# Each tab will become 1 .. 8 spaces, depending on its position in
# its line.  If false, each tab is treated as a single character.
# replace_whitespace (default: true)
# Replace all whitespace characters in the input text by spaces
# after tab expansion.  Note that if expand_tabs is false and
# replace_whitespace is true, every tab will be converted to a
# single space!
# fix_sentence_endings (default: false)
# Ensure that sentence-ending punctuation is always followed
# by two spaces.  Off by default because the algorithm is
# (unavoidably) imperfect.
# break_long_words (default: true)
# Break words longer than 'width'.  If false, those words will not
# be broken, and some lines might be longer than 'width'.
# break_on_hyphens (default: true)
# Allow breaking hyphenated words. If true, wrapping will occur
# preferably on whitespaces and right after hyphens part of
# compound words.
# drop_whitespace (default: true)
# Drop leading and trailing whitespace from lines.
class TextWrapper
    
    # _split(text : string) -> [string]
    # Split the text to wrap into indivisible chunks.  Chunks are
    # not quite the same as words; see _wrap_chunks() for full
    # details.  As an example, the text
    # Look, goof-ball -- use the -b option!
    # breaks into the following chunks:
    # 'Look,', ' ', 'goof-', 'ball', ' ', '--', ' ',
    # 'use', ' ', 'the', ' ', '-b', ' ', 'option!'
    # if break_on_hyphens is True, or in:
    # 'Look,', ' ', 'goof-ball', ' ', '--', ' ',
    # 'use', ' ', 'the', ' ', '-b', ' ', option!'
    # otherwise.
    private fun private_split(text: Object) is abstract
    
    # _fix_sentence_endings(chunks : [string])
    # Correct for sentence endings buried in 'chunks'.  Eg. when the
    # original text contains "... foo.
    # Bar ...", munge_whitespace()
    # and split() will convert that to [..., "foo.", " ", "Bar", ...]
    # which has one too few spaces; this method simply changes the one
    # space to two.
    private fun private_fix_sentence_endings(chunks: Object) is abstract
    
    # _wrap_chunks(chunks : [string]) -> [string]
    # Wrap a sequence of text chunks and return a list of lines of
    # length 'self.width' or less.  (If 'break_long_words' is false,
    # some lines may be longer than this.)  Chunks correspond roughly
    # to words and the whitespace between them: each chunk is
    # indivisible (modulo 'break_long_words'), but a line break can
    # come between any two chunks.  Chunks should not have internal
    # whitespace; ie. a chunk is either all whitespace or a "word".
    # Whitespace chunks will be removed from the beginning and end of
    # lines, but apart from that whitespace is preserved.
    private fun private_wrap_chunks(chunks: Object) is abstract
    
    # _handle_long_word(chunks : [string],
    # cur_line : [string],
    # cur_len : int, width : int)
    # Handle a chunk of text (most likely a word, not whitespace) that
    # is too long to fit in any line.
    private fun private_handle_long_word(width, reversed_chunks, cur_len, cur_line: Object) is abstract
    
    init do end
    
    # wrap(text : string) -> [string]
    # Reformat the single paragraph in 'text' so it fits in lines of
    # no more than 'self.width' columns, and return a list of wrapped
    # lines.  Tabs in 'text' are expanded with string.expandtabs(),
    # and all other whitespace characters (including newline) are
    # converted to space.
    fun wrap(text: Object) is abstract
    
    # _munge_whitespace(text : string) -> string
    # Munge whitespace in text: expand tabs and convert all other
    # whitespace characters to spaces.  Eg. " foo	bar
    # baz"
    # becomes " foo    bar  baz".
    private fun private_munge_whitespace(text: Object) is abstract
    
    # fill(text : string) -> string
    # Reformat the single paragraph in 'text' to fit in lines of no
    # more than 'self.width' columns, and return a new string
    # containing the entire wrapped paragraph.
    fun fill(text: Object) is abstract
    
end

# unicode(object='') -> unicode object
# unicode(string[, encoding[, errors]]) -> unicode object
# Create a new Unicode object from the given encoded string.
# encoding defaults to the current default string encoding.
# errors can be 'strict', 'replace' or 'ignore' and defaults to 'strict'.
class Unicode
    super Basestring
    
end

