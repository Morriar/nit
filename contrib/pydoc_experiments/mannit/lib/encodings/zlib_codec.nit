# Standard "encodings" Package
# Standard Python encoding modules are stored in this package
# directory.
# Codec modules must have names corresponding to normalized encoding
# names as defined in the normalize_encoding() function below, e.g.
# 'utf-8' must be implemented by the module 'utf_8.py'.
# Each codec module must export the following interface:
# * getregentry() -> codecs.CodecInfo object
# The getregentry() API must a CodecInfo object with encoder, decoder,
# incrementalencoder, incrementaldecoder, streamwriter and streamreader
# atttributes which adhere to the Python Codec Interface Standard.
# In addition, a module may optionally also define the following
# APIs which are then used by the package's codec search function:
# * getaliases() -> sequence of encoding name strings to use as aliases
# Alias names returned by getaliases() must be normalized encoding
# names as defined by normalize_encoding().
# Written by Marc-Andre Lemburg (mal@lemburg.com).
# (c) Copyright CNRI, All Rights Reserved. NO WARRANTY.
module zlib_codec

import cp932
import johab
import iso2022_jp_ext
import iso8859_15
import big5
import cp1140
import cp775
import euc_jis_2004
import utf_32_le
import shift_jis
import utf_7
import euc_kr
import mac_arabic
import utf_8
import cp037
import base64_codec
import cp864
import cp949
import iso8859_9
import iso8859_8
import gb2312
import iso8859_3
import iso8859_2
import iso8859_1
import iso8859_7
import iso8859_6
import iso8859_5
import iso8859_4
import cp857
import cp856
import cp855
import cp852
import cp850
import cp858
import mac_iceland
import gbk
import shift_jis_2004
import mac_greek
import palmos
import iso2022_jp
import utf_8_sig
import koi8_r
import koi8_u
import mac_turkish
import undefined
import mac_farsi
import cp1026
import mac_romanian
import iso2022_jp_1
import iso2022_jp_3
import iso2022_jp_2
import utf_16_le
import codecs
import uu_codec
import ptcp154
import euc_jisx0213
import iso2022_jp_2004
import zlib_codec
import tis_620
import cp720
import cp875
import cp874
import rot_13
import bz2_codec
import unicode_escape
import punycode
import mac_croatian
import mac_centeuro
import mac_roman
import cp437
import utf_16
import cp737
import utf_16_be
import latin_1
import utf_32
import charmap
import hp_roman8
import cp1006
import iso8859_16
import cp424
import iso8859_14
import iso8859_13
import iso8859_11
import iso8859_10
import cp500
import unicode_internal
import iso2022_kr
import aliases
import mac_cyrillic
import hz
import euc_jp
import cp1258
import cp1257
import cp1256
import cp1255
import cp1254
import cp1253
import cp1252
import cp1251
import cp1250
import string_escape
import utf_32_be
import quopri_codec
import cp950
import hex_codec
import mac_latin2
import cp869
import cp866
import big5hkscs
import cp865
import cp862
import cp863
import cp860
import cp861
import ascii
import shift_jisx0213
import gb18030
import raw_unicode_escape
import idna
import builtins

redef class Sys
    
end

redef class CodecRegistryError
    
end

