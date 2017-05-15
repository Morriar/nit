CC = ccache cc
CXX = ccache c++
CFLAGS = -g -O2 -Wno-unused-value -Wno-switch -Wno-attributes -Wno-trigraphs
CINCL =
LDFLAGS ?= 
LDLIBS  ?= -lm -lm


# SPECIAL CONFIGURATION FLAGS
NO_STACKTRACE= # Set to `True` to enable

uname_S := $(shell sh -c 'uname -s 2>/dev/null || echo not')
clang_check := $(shell sh -c '$(CC) -v 2>&1 | grep -q clang; echo $$?')
ifeq ($(clang_check), 0)
	CFLAGS += -Qunused-arguments
endif
ifneq ($(NO_STACKTRACE), True)
  # Check and include lib-unwind in a portable way
  ifneq ($(uname_S),Darwin)
    # already included on macosx, but need to get the correct flags in other supported platforms.
    ifeq ($(shell pkg-config --exists 'libunwind'; echo $$?), 0)
      LDLIBS += `pkg-config --libs libunwind`
      CFLAGS += `pkg-config --cflags libunwind`
    else
      $(warning "[_] stack-traces disabled. Please install libunwind-dev.")
      CFLAGS += -D NO_STACKTRACE
    endif
  endif
else
  # Stacktraces disabled
  CFLAGS += -D NO_STACKTRACE
endif

# Special configuration for Darwin
ifeq ($(uname_S),Darwin)
	# Remove POSIX flag -lrt
	LDLIBS := $(filter-out -lrt,$(LDLIBS))
endif

# Special configuration for Windows under mingw64
ifneq ($(findstring MINGW64,$(uname_S)),)
	# Use the pcreposix regex library
	LDLIBS += -lpcreposix

	# Remove POSIX flag -lrt
	LDLIBS := $(filter-out -lrt,$(LDLIBS))

	# Silence warnings when storing Int, Char and Bool as pointer address
	CFLAGS += -Wno-pointer-to-int-cast -Wno-int-to-pointer-cast
endif

all: ../nitcc_parser_gen

nitcc__nitcc_parser_gen.classes.1.o: nitcc__nitcc_parser_gen.classes.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitcc__nitcc_parser_gen.classes.1.o nitcc__nitcc_parser_gen.classes.1.c

nitcc__nitcc_parser_gen.main.1.o: nitcc__nitcc_parser_gen.main.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitcc__nitcc_parser_gen.main.1.o nitcc__nitcc_parser_gen.main.1.c

nitcc__nitcc_parser_gen.sep.1.o: nitcc__nitcc_parser_gen.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitcc__nitcc_parser_gen.sep.1.o nitcc__nitcc_parser_gen.sep.1.c

nitcc__grammar.sep.1.o: nitcc__grammar.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitcc__grammar.sep.1.o nitcc__grammar.sep.1.c

nitcc__grammar.sep.2.o: nitcc__grammar.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitcc__grammar.sep.2.o nitcc__grammar.sep.2.c

core__posix.sep.1.o: core__posix.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__posix.sep.1.o core__posix.sep.1.c

core__ropes.sep.1.o: core__ropes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__ropes.sep.1.o core__ropes.sep.1.c

core__flat.sep.1.o: core__flat.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__flat.sep.1.o core__flat.sep.1.c

core__flat.sep.2.o: core__flat.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__flat.sep.2.o core__flat.sep.2.c

core__abstract_text.sep.1.o: core__abstract_text.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__abstract_text.sep.1.o core__abstract_text.sep.1.c

core__abstract_text.sep.2.o: core__abstract_text.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__abstract_text.sep.2.o core__abstract_text.sep.2.c

core__native.sep.1.o: core__native.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__native.sep.1.o core__native.sep.1.c

core__kernel.sep.1.o: core__kernel.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__kernel.sep.1.o core__kernel.sep.1.c

core__math.sep.1.o: core__math.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__math.sep.1.o core__math.sep.1.c

core__collection.sep.1.o: core__collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__collection.sep.1.o core__collection.sep.1.c

core__range.sep.1.o: core__range.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__range.sep.1.o core__range.sep.1.c

core__abstract_collection.sep.1.o: core__abstract_collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__abstract_collection.sep.1.o core__abstract_collection.sep.1.c

core__list.sep.1.o: core__list.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__list.sep.1.o core__list.sep.1.c

core__array.sep.1.o: core__array.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__array.sep.1.o core__array.sep.1.c

core__circular_array.sep.1.o: core__circular_array.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__circular_array.sep.1.o core__circular_array.sep.1.c

core__sorter.sep.1.o: core__sorter.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__sorter.sep.1.o core__sorter.sep.1.c

core__hash_collection.sep.1.o: core__hash_collection.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__hash_collection.sep.1.o core__hash_collection.sep.1.c

core__union_find.sep.1.o: core__union_find.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__union_find.sep.1.o core__union_find.sep.1.c

core__fixed_ints.sep.1.o: core__fixed_ints.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__fixed_ints.sep.1.o core__fixed_ints.sep.1.c

core__string_search.sep.1.o: core__string_search.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__string_search.sep.1.o core__string_search.sep.1.c

core__fixed_ints_text.sep.1.o: core__fixed_ints_text.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__fixed_ints_text.sep.1.o core__fixed_ints_text.sep.1.c

core__environ.sep.1.o: core__environ.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__environ.sep.1.o core__environ.sep.1.c

core__file.sep.1.o: core__file.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__file.sep.1.o core__file.sep.1.c

core__stream.sep.1.o: core__stream.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__stream.sep.1.o core__stream.sep.1.c

core__error.sep.1.o: core__error.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__error.sep.1.o core__error.sep.1.c

core__bytes.sep.1.o: core__bytes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__bytes.sep.1.o core__bytes.sep.1.c

core__codec_base.sep.1.o: core__codec_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__codec_base.sep.1.o core__codec_base.sep.1.c

core__utf8.sep.1.o: core__utf8.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__utf8.sep.1.o core__utf8.sep.1.c

core__iso8859_95d1.sep.1.o: core__iso8859_95d1.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__iso8859_95d1.sep.1.o core__iso8859_95d1.sep.1.c

core__time.sep.1.o: core__time.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__time.sep.1.o core__time.sep.1.c

core__gc.sep.1.o: core__gc.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__gc.sep.1.o core__gc.sep.1.c

core__exec.sep.1.o: core__exec.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__exec.sep.1.o core__exec.sep.1.c

core__bitset.sep.1.o: core__bitset.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__bitset.sep.1.o core__bitset.sep.1.c

core__queue.sep.1.o: core__queue.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__queue.sep.1.o core__queue.sep.1.c

core__numeric.sep.1.o: core__numeric.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__numeric.sep.1.o core__numeric.sep.1.c

core__re.sep.1.o: core__re.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__re.sep.1.o core__re.sep.1.c

nitcc__nitcc_parser_gen.types.1.o: nitcc__nitcc_parser_gen.types.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitcc__nitcc_parser_gen.types.1.o nitcc__nitcc_parser_gen.types.1.c

# does pkg-config exists?
ifneq ($(shell which pkg-config >/dev/null; echo $$?), 0)
$(error "Command `pkg-config` not found. Please install it")
endif
# Check for library bdw-gc
ifneq ($(shell pkg-config --exists 'bdw-gc'; echo $$?), 0)
$(error "pkg-config: package bdw-gc is not found.")
endif
c_functions_hash.extern.o: c_functions_hash.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o c_functions_hash.extern.o c_functions_hash.c

gc_chooser.extern.o: gc_chooser.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function -DWITH_LIBGC `pkg-config --cflags bdw-gc` -c -o gc_chooser.extern.o gc_chooser.c

core__abstract_text._ffi.extern.o: core__abstract_text._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__abstract_text._ffi.extern.o core__abstract_text._ffi.c

core__abstract_text._nitni.extern.o: core__abstract_text._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__abstract_text._nitni.extern.o core__abstract_text._nitni.c

core__native._ffi.extern.o: core__native._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__native._ffi.extern.o core__native._ffi.c

core__native._nitni.extern.o: core__native._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__native._nitni.extern.o core__native._nitni.c

core__kernel._ffi.extern.o: core__kernel._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__kernel._ffi.extern.o core__kernel._ffi.c

core__kernel._nitni.extern.o: core__kernel._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__kernel._nitni.extern.o core__kernel._nitni.c

core__math._ffi.extern.o: core__math._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__math._ffi.extern.o core__math._ffi.c

core__math._nitni.extern.o: core__math._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__math._nitni.extern.o core__math._nitni.c

core__fixed_ints._ffi.extern.o: core__fixed_ints._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__fixed_ints._ffi.extern.o core__fixed_ints._ffi.c

core__fixed_ints._nitni.extern.o: core__fixed_ints._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__fixed_ints._nitni.extern.o core__fixed_ints._nitni.c

core__fixed_ints_text._ffi.extern.o: core__fixed_ints_text._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__fixed_ints_text._ffi.extern.o core__fixed_ints_text._ffi.c

core__fixed_ints_text._nitni.extern.o: core__fixed_ints_text._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__fixed_ints_text._nitni.extern.o core__fixed_ints_text._nitni.c

core__environ._ffi.extern.o: core__environ._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__environ._ffi.extern.o core__environ._ffi.c

core__environ._nitni.extern.o: core__environ._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__environ._nitni.extern.o core__environ._nitni.c

core__file._ffi.extern.o: core__file._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__file._ffi.extern.o core__file._ffi.c

core__file._nitni.extern.o: core__file._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__file._nitni.extern.o core__file._nitni.c

../nitcc_parser_gen: nitcc__nitcc_parser_gen.classes.1.o nitcc__nitcc_parser_gen.main.1.o nitcc__nitcc_parser_gen.sep.1.o nitcc__grammar.sep.1.o nitcc__grammar.sep.2.o core__posix.sep.1.o core__ropes.sep.1.o core__flat.sep.1.o core__flat.sep.2.o core__abstract_text.sep.1.o core__abstract_text.sep.2.o core__native.sep.1.o core__kernel.sep.1.o core__math.sep.1.o core__collection.sep.1.o core__range.sep.1.o core__abstract_collection.sep.1.o core__list.sep.1.o core__array.sep.1.o core__circular_array.sep.1.o core__sorter.sep.1.o core__hash_collection.sep.1.o core__union_find.sep.1.o core__fixed_ints.sep.1.o core__string_search.sep.1.o core__fixed_ints_text.sep.1.o core__environ.sep.1.o core__file.sep.1.o core__stream.sep.1.o core__error.sep.1.o core__bytes.sep.1.o core__codec_base.sep.1.o core__utf8.sep.1.o core__iso8859_95d1.sep.1.o core__time.sep.1.o core__gc.sep.1.o core__exec.sep.1.o core__bitset.sep.1.o core__queue.sep.1.o core__numeric.sep.1.o core__re.sep.1.o nitcc__nitcc_parser_gen.types.1.o c_functions_hash.extern.o gc_chooser.extern.o core__abstract_text._ffi.extern.o core__abstract_text._nitni.extern.o core__native._ffi.extern.o core__native._nitni.extern.o core__kernel._ffi.extern.o core__kernel._nitni.extern.o core__math._ffi.extern.o core__math._nitni.extern.o core__fixed_ints._ffi.extern.o core__fixed_ints._nitni.extern.o core__fixed_ints_text._ffi.extern.o core__fixed_ints_text._nitni.extern.o core__environ._ffi.extern.o core__environ._nitni.extern.o core__file._ffi.extern.o core__file._nitni.extern.o
	$(CC) $(LDFLAGS) -o '../nitcc_parser_gen' nitcc__nitcc_parser_gen.classes.1.o nitcc__nitcc_parser_gen.main.1.o nitcc__nitcc_parser_gen.sep.1.o nitcc__grammar.sep.1.o nitcc__grammar.sep.2.o core__posix.sep.1.o core__ropes.sep.1.o core__flat.sep.1.o core__flat.sep.2.o core__abstract_text.sep.1.o core__abstract_text.sep.2.o core__native.sep.1.o core__kernel.sep.1.o core__math.sep.1.o core__collection.sep.1.o core__range.sep.1.o core__abstract_collection.sep.1.o core__list.sep.1.o core__array.sep.1.o core__circular_array.sep.1.o core__sorter.sep.1.o core__hash_collection.sep.1.o core__union_find.sep.1.o core__fixed_ints.sep.1.o core__string_search.sep.1.o core__fixed_ints_text.sep.1.o core__environ.sep.1.o core__file.sep.1.o core__stream.sep.1.o core__error.sep.1.o core__bytes.sep.1.o core__codec_base.sep.1.o core__utf8.sep.1.o core__iso8859_95d1.sep.1.o core__time.sep.1.o core__gc.sep.1.o core__exec.sep.1.o core__bitset.sep.1.o core__queue.sep.1.o core__numeric.sep.1.o core__re.sep.1.o nitcc__nitcc_parser_gen.types.1.o c_functions_hash.extern.o gc_chooser.extern.o core__abstract_text._ffi.extern.o core__abstract_text._nitni.extern.o core__native._ffi.extern.o core__native._nitni.extern.o core__kernel._ffi.extern.o core__kernel._nitni.extern.o core__math._ffi.extern.o core__math._nitni.extern.o core__fixed_ints._ffi.extern.o core__fixed_ints._nitni.extern.o core__fixed_ints_text._ffi.extern.o core__fixed_ints_text._nitni.extern.o core__environ._ffi.extern.o core__environ._nitni.extern.o core__file._ffi.extern.o core__file._nitni.extern.o $(LDLIBS) `pkg-config --libs bdw-gc`

clean:
	rm nitcc__nitcc_parser_gen.classes.1.o nitcc__nitcc_parser_gen.main.1.o nitcc__nitcc_parser_gen.sep.1.o nitcc__grammar.sep.1.o nitcc__grammar.sep.2.o core__posix.sep.1.o core__ropes.sep.1.o core__flat.sep.1.o core__flat.sep.2.o core__abstract_text.sep.1.o core__abstract_text.sep.2.o core__native.sep.1.o core__kernel.sep.1.o core__math.sep.1.o core__collection.sep.1.o core__range.sep.1.o core__abstract_collection.sep.1.o core__list.sep.1.o core__array.sep.1.o core__circular_array.sep.1.o core__sorter.sep.1.o core__hash_collection.sep.1.o core__union_find.sep.1.o core__fixed_ints.sep.1.o core__string_search.sep.1.o core__fixed_ints_text.sep.1.o core__environ.sep.1.o core__file.sep.1.o core__stream.sep.1.o core__error.sep.1.o core__bytes.sep.1.o core__codec_base.sep.1.o core__utf8.sep.1.o core__iso8859_95d1.sep.1.o core__time.sep.1.o core__gc.sep.1.o core__exec.sep.1.o core__bitset.sep.1.o core__queue.sep.1.o core__numeric.sep.1.o core__re.sep.1.o nitcc__nitcc_parser_gen.types.1.o c_functions_hash.extern.o gc_chooser.extern.o core__abstract_text._ffi.extern.o core__abstract_text._nitni.extern.o core__native._ffi.extern.o core__native._nitni.extern.o core__kernel._ffi.extern.o core__kernel._nitni.extern.o core__math._ffi.extern.o core__math._nitni.extern.o core__fixed_ints._ffi.extern.o core__fixed_ints._nitni.extern.o core__fixed_ints_text._ffi.extern.o core__fixed_ints_text._nitni.extern.o core__environ._ffi.extern.o core__environ._nitni.extern.o core__file._ffi.extern.o core__file._nitni.extern.o 2>/dev/null
