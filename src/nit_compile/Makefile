CC = ccache cc
CXX = ccache c++
CFLAGS = -g -O2 -Wno-unused-value -Wno-switch -Wno-attributes
CINCL =
LDFLAGS ?= 
LDLIBS  ?= -lm 


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

all: ../nitc_0

nitc.classes.1.o: nitc.classes.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.classes.1.o nitc.classes.1.c

nitc.classes.2.o: nitc.classes.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.classes.2.o nitc.classes.2.c

nitc.classes.3.o: nitc.classes.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.classes.3.o nitc.classes.3.c

nitc.classes.4.o: nitc.classes.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.classes.4.o nitc.classes.4.c

nitc.classes.5.o: nitc.classes.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.classes.5.o nitc.classes.5.c

nitc.classes.6.o: nitc.classes.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.classes.6.o nitc.classes.6.c

nitc.classes.7.o: nitc.classes.7.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.classes.7.o nitc.classes.7.c

nitc.main.1.o: nitc.main.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.main.1.o nitc.main.1.c

nitc.sep.1.o: nitc.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.sep.1.o nitc.sep.1.c

nitc__frontend.sep.1.o: nitc__frontend.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__frontend.sep.1.o nitc__frontend.sep.1.c

nitc__no_warning.sep.1.o: nitc__no_warning.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__no_warning.sep.1.o nitc__no_warning.sep.1.c

nitc__modelbuilder.sep.1.o: nitc__modelbuilder.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__modelbuilder.sep.1.o nitc__modelbuilder.sep.1.c

nitc__loader.sep.1.o: nitc__loader.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__loader.sep.1.o nitc__loader.sep.1.c

nitc__modelbuilder_base.sep.1.o: nitc__modelbuilder_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__modelbuilder_base.sep.1.o nitc__modelbuilder_base.sep.1.c

nitc__model.sep.1.o: nitc__model.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__model.sep.1.o nitc__model.sep.1.c

nitc__model.sep.2.o: nitc__model.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__model.sep.2.o nitc__model.sep.2.c

nitc__model.sep.3.o: nitc__model.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__model.sep.3.o nitc__model.sep.3.c

nitc__mmodule.sep.1.o: nitc__mmodule.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__mmodule.sep.1.o nitc__mmodule.sep.1.c

nitc__mpackage.sep.1.o: nitc__mpackage.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__mpackage.sep.1.o nitc__mpackage.sep.1.c

nitc__model_base.sep.1.o: nitc__model_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__model_base.sep.1.o nitc__model_base.sep.1.c

nitc__location.sep.1.o: nitc__location.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__location.sep.1.o nitc__location.sep.1.c

core__ropes.sep.1.o: core__ropes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__ropes.sep.1.o core__ropes.sep.1.c

core__flat.sep.1.o: core__flat.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__flat.sep.1.o core__flat.sep.1.c

core__flat.sep.2.o: core__flat.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__flat.sep.2.o core__flat.sep.2.c

core__abstract_text.sep.1.o: core__abstract_text.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__abstract_text.sep.1.o core__abstract_text.sep.1.c

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

core__utf8.sep.1.o: core__utf8.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__utf8.sep.1.o core__utf8.sep.1.c

core__time.sep.1.o: core__time.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__time.sep.1.o core__time.sep.1.c

core__exec.sep.1.o: core__exec.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__exec.sep.1.o core__exec.sep.1.c

core__re.sep.1.o: core__re.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o core__re.sep.1.o core__re.sep.1.c

more_collections.sep.1.o: more_collections.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o more_collections.sep.1.o more_collections.sep.1.c

serialization.sep.1.o: serialization.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o serialization.sep.1.o serialization.sep.1.c

poset.sep.1.o: poset.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o poset.sep.1.o poset.sep.1.c

nitc__mdoc.sep.1.o: nitc__mdoc.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__mdoc.sep.1.o nitc__mdoc.sep.1.c

ordered_tree.sep.1.o: ordered_tree.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o ordered_tree.sep.1.o ordered_tree.sep.1.c

nitc__toolcontext.sep.1.o: nitc__toolcontext.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__toolcontext.sep.1.o nitc__toolcontext.sep.1.c

opts.sep.1.o: opts.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o opts.sep.1.o opts.sep.1.c

nitc__version.sep.1.o: nitc__version.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__version.sep.1.o nitc__version.sep.1.c

template.sep.1.o: template.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o template.sep.1.o template.sep.1.c

nitc__parser.sep.1.o: nitc__parser.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser.sep.1.o nitc__parser.sep.1.c

nitc__parser.sep.2.o: nitc__parser.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser.sep.2.o nitc__parser.sep.2.c

nitc__parser.sep.3.o: nitc__parser.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser.sep.3.o nitc__parser.sep.3.c

nitc__parser.sep.4.o: nitc__parser.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser.sep.4.o nitc__parser.sep.4.c

nitc__parser.sep.5.o: nitc__parser.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser.sep.5.o nitc__parser.sep.5.c

nitc__parser.sep.6.o: nitc__parser.sep.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser.sep.6.o nitc__parser.sep.6.c

nitc__parser.sep.7.o: nitc__parser.sep.7.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser.sep.7.o nitc__parser.sep.7.c

nitc__parser_prod.sep.1.o: nitc__parser_prod.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser_prod.sep.1.o nitc__parser_prod.sep.1.c

nitc__parser_prod.sep.2.o: nitc__parser_prod.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser_prod.sep.2.o nitc__parser_prod.sep.2.c

nitc__parser_prod.sep.3.o: nitc__parser_prod.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser_prod.sep.3.o nitc__parser_prod.sep.3.c

nitc__parser_prod.sep.4.o: nitc__parser_prod.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser_prod.sep.4.o nitc__parser_prod.sep.4.c

nitc__parser_prod.sep.5.o: nitc__parser_prod.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser_prod.sep.5.o nitc__parser_prod.sep.5.c

nitc__parser_prod.sep.6.o: nitc__parser_prod.sep.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser_prod.sep.6.o nitc__parser_prod.sep.6.c

nitc__lexer.sep.1.o: nitc__lexer.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__lexer.sep.1.o nitc__lexer.sep.1.c

nitc__parser_nodes.sep.1.o: nitc__parser_nodes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser_nodes.sep.1.o nitc__parser_nodes.sep.1.c

nitc__lexer_work.sep.1.o: nitc__lexer_work.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__lexer_work.sep.1.o nitc__lexer_work.sep.1.c

nitc__tables.sep.1.o: nitc__tables.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__tables.sep.1.o nitc__tables.sep.1.c

nitc__parser_work.sep.1.o: nitc__parser_work.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser_work.sep.1.o nitc__parser_work.sep.1.c

ini.sep.1.o: ini.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o ini.sep.1.o ini.sep.1.c

nitc__phase.sep.1.o: nitc__phase.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__phase.sep.1.o nitc__phase.sep.1.c

nitc__literal.sep.1.o: nitc__literal.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__literal.sep.1.o nitc__literal.sep.1.c

nitc__simple_misc_analysis.sep.1.o: nitc__simple_misc_analysis.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__simple_misc_analysis.sep.1.o nitc__simple_misc_analysis.sep.1.c

nitc__modelize_property.sep.1.o: nitc__modelize_property.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__modelize_property.sep.1.o nitc__modelize_property.sep.1.c

nitc__modelize_property.sep.2.o: nitc__modelize_property.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__modelize_property.sep.2.o nitc__modelize_property.sep.2.c

nitc__modelize_property.sep.3.o: nitc__modelize_property.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__modelize_property.sep.3.o nitc__modelize_property.sep.3.c

nitc__modelize_class.sep.1.o: nitc__modelize_class.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__modelize_class.sep.1.o nitc__modelize_class.sep.1.c

nitc__annotation.sep.1.o: nitc__annotation.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__annotation.sep.1.o nitc__annotation.sep.1.c

nitc__mmodule_data.sep.1.o: nitc__mmodule_data.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__mmodule_data.sep.1.o nitc__mmodule_data.sep.1.c

nitc__auto_super_init.sep.1.o: nitc__auto_super_init.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__auto_super_init.sep.1.o nitc__auto_super_init.sep.1.c

nitc__typing.sep.1.o: nitc__typing.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__typing.sep.1.o nitc__typing.sep.1.c

nitc__typing.sep.2.o: nitc__typing.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__typing.sep.2.o nitc__typing.sep.2.c

nitc__typing.sep.3.o: nitc__typing.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__typing.sep.3.o nitc__typing.sep.3.c

nitc__local_var_init.sep.1.o: nitc__local_var_init.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__local_var_init.sep.1.o nitc__local_var_init.sep.1.c

nitc__flow.sep.1.o: nitc__flow.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__flow.sep.1.o nitc__flow.sep.1.c

nitc__scope.sep.1.o: nitc__scope.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__scope.sep.1.o nitc__scope.sep.1.c

nitc__div_by_zero.sep.1.o: nitc__div_by_zero.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__div_by_zero.sep.1.o nitc__div_by_zero.sep.1.c

nitc__serialization_phase.sep.1.o: nitc__serialization_phase.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__serialization_phase.sep.1.o nitc__serialization_phase.sep.1.c

nitc__parser_util.sep.1.o: nitc__parser_util.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parser_util.sep.1.o nitc__parser_util.sep.1.c

nitc__deriving.sep.1.o: nitc__deriving.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__deriving.sep.1.o nitc__deriving.sep.1.c

nitc__check_annotation.sep.1.o: nitc__check_annotation.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__check_annotation.sep.1.o nitc__check_annotation.sep.1.c

nitc__glsl_validation.sep.1.o: nitc__glsl_validation.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__glsl_validation.sep.1.o nitc__glsl_validation.sep.1.c

nitc__parallelization_phase.sep.1.o: nitc__parallelization_phase.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__parallelization_phase.sep.1.o nitc__parallelization_phase.sep.1.c

nitc__astbuilder.sep.1.o: nitc__astbuilder.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__astbuilder.sep.1.o nitc__astbuilder.sep.1.c

nitc__astvalidation.sep.1.o: nitc__astvalidation.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__astvalidation.sep.1.o nitc__astvalidation.sep.1.c

nitc__i18n_phase.sep.1.o: nitc__i18n_phase.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__i18n_phase.sep.1.o nitc__i18n_phase.sep.1.c

nitc__regex_phase.sep.1.o: nitc__regex_phase.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__regex_phase.sep.1.o nitc__regex_phase.sep.1.c

nitc__separate_erasure_compiler.sep.1.o: nitc__separate_erasure_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__separate_erasure_compiler.sep.1.o nitc__separate_erasure_compiler.sep.1.c

nitc__separate_erasure_compiler.sep.2.o: nitc__separate_erasure_compiler.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__separate_erasure_compiler.sep.2.o nitc__separate_erasure_compiler.sep.2.c

nitc__separate_compiler.sep.1.o: nitc__separate_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__separate_compiler.sep.1.o nitc__separate_compiler.sep.1.c

nitc__separate_compiler.sep.2.o: nitc__separate_compiler.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__separate_compiler.sep.2.o nitc__separate_compiler.sep.2.c

nitc__separate_compiler.sep.3.o: nitc__separate_compiler.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__separate_compiler.sep.3.o nitc__separate_compiler.sep.3.c

nitc__separate_compiler.sep.4.o: nitc__separate_compiler.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__separate_compiler.sep.4.o nitc__separate_compiler.sep.4.c

nitc__separate_compiler.sep.5.o: nitc__separate_compiler.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__separate_compiler.sep.5.o nitc__separate_compiler.sep.5.c

nitc__abstract_compiler.sep.1.o: nitc__abstract_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__abstract_compiler.sep.1.o nitc__abstract_compiler.sep.1.c

nitc__abstract_compiler.sep.2.o: nitc__abstract_compiler.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__abstract_compiler.sep.2.o nitc__abstract_compiler.sep.2.c

nitc__abstract_compiler.sep.3.o: nitc__abstract_compiler.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__abstract_compiler.sep.3.o nitc__abstract_compiler.sep.3.c

nitc__abstract_compiler.sep.4.o: nitc__abstract_compiler.sep.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__abstract_compiler.sep.4.o nitc__abstract_compiler.sep.4.c

nitc__abstract_compiler.sep.5.o: nitc__abstract_compiler.sep.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__abstract_compiler.sep.5.o nitc__abstract_compiler.sep.5.c

nitc__abstract_compiler.sep.6.o: nitc__abstract_compiler.sep.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__abstract_compiler.sep.6.o nitc__abstract_compiler.sep.6.c

nitc__platform.sep.1.o: nitc__platform.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__platform.sep.1.o nitc__platform.sep.1.c

nitc__c_tools.sep.1.o: nitc__c_tools.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__c_tools.sep.1.o nitc__c_tools.sep.1.c

nitc__mixin.sep.1.o: nitc__mixin.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__mixin.sep.1.o nitc__mixin.sep.1.c

counter.sep.1.o: counter.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o counter.sep.1.o counter.sep.1.c

nitc__coloring.sep.1.o: nitc__coloring.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__coloring.sep.1.o nitc__coloring.sep.1.c

nitc__rapid_type_analysis.sep.1.o: nitc__rapid_type_analysis.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__rapid_type_analysis.sep.1.o nitc__rapid_type_analysis.sep.1.c

csv.sep.1.o: csv.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o csv.sep.1.o csv.sep.1.c

nitc__global_compiler.sep.1.o: nitc__global_compiler.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__global_compiler.sep.1.o nitc__global_compiler.sep.1.c

nitc__global_compiler.sep.2.o: nitc__global_compiler.sep.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__global_compiler.sep.2.o nitc__global_compiler.sep.2.c

nitc__global_compiler.sep.3.o: nitc__global_compiler.sep.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__global_compiler.sep.3.o nitc__global_compiler.sep.3.c

nitc__compiler_ffi.sep.1.o: nitc__compiler_ffi.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__compiler_ffi.sep.1.o nitc__compiler_ffi.sep.1.c

nitc__light.sep.1.o: nitc__light.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__light.sep.1.o nitc__light.sep.1.c

nitc__light_ffi.sep.1.o: nitc__light_ffi.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__light_ffi.sep.1.o nitc__light_ffi.sep.1.c

nitc__nitni_utilities.sep.1.o: nitc__nitni_utilities.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__nitni_utilities.sep.1.o nitc__nitni_utilities.sep.1.c

nitc__nitni_base.sep.1.o: nitc__nitni_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__nitni_base.sep.1.o nitc__nitni_base.sep.1.c

nitc__light_ffi_base.sep.1.o: nitc__light_ffi_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__light_ffi_base.sep.1.o nitc__light_ffi_base.sep.1.c

nitc__extern_classes.sep.1.o: nitc__extern_classes.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__extern_classes.sep.1.o nitc__extern_classes.sep.1.c

nitc__light_c.sep.1.o: nitc__light_c.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__light_c.sep.1.o nitc__light_c.sep.1.c

nitc__nitni_callbacks.sep.1.o: nitc__nitni_callbacks.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__nitni_callbacks.sep.1.o nitc__nitni_callbacks.sep.1.c

nitc__memory_logger.sep.1.o: nitc__memory_logger.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__memory_logger.sep.1.o nitc__memory_logger.sep.1.c

nitc__compiler_serialization.sep.1.o: nitc__compiler_serialization.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__compiler_serialization.sep.1.o nitc__compiler_serialization.sep.1.c

nitc__serialize_model.sep.1.o: nitc__serialize_model.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__serialize_model.sep.1.o nitc__serialize_model.sep.1.c

json__serialization_write.sep.1.o: json__serialization_write.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o json__serialization_write.sep.1.o json__serialization_write.sep.1.c

serialization__caching.sep.1.o: serialization__caching.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o serialization__caching.sep.1.o serialization__caching.sep.1.c

serialization__engine_tools.sep.1.o: serialization__engine_tools.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o serialization__engine_tools.sep.1.o serialization__engine_tools.sep.1.c

nitc__android.sep.1.o: nitc__android.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__android.sep.1.o nitc__android.sep.1.c

nitc__ffi.sep.1.o: nitc__ffi.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__ffi.sep.1.o nitc__ffi.sep.1.c

nitc__ffi_base.sep.1.o: nitc__ffi_base.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__ffi_base.sep.1.o nitc__ffi_base.sep.1.c

nitc__header_dependency.sep.1.o: nitc__header_dependency.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__header_dependency.sep.1.o nitc__header_dependency.sep.1.c

nitc__c.sep.1.o: nitc__c.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__c.sep.1.o nitc__c.sep.1.c

nitc__pkgconfig.sep.1.o: nitc__pkgconfig.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__pkgconfig.sep.1.o nitc__pkgconfig.sep.1.c

nitc__c_compiler_options.sep.1.o: nitc__c_compiler_options.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__c_compiler_options.sep.1.o nitc__c_compiler_options.sep.1.c

nitc__cpp.sep.1.o: nitc__cpp.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__cpp.sep.1.o nitc__cpp.sep.1.c

nitc__java.sep.1.o: nitc__java.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__java.sep.1.o nitc__java.sep.1.c

nitc__extra_java_files.sep.1.o: nitc__extra_java_files.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__extra_java_files.sep.1.o nitc__extra_java_files.sep.1.c

nitc__objc.sep.1.o: nitc__objc.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__objc.sep.1.o nitc__objc.sep.1.c

nitc__android_annotations.sep.1.o: nitc__android_annotations.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__android_annotations.sep.1.o nitc__android_annotations.sep.1.c

nitc__app_annotations.sep.1.o: nitc__app_annotations.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__app_annotations.sep.1.o nitc__app_annotations.sep.1.c

nitc__pnacl.sep.1.o: nitc__pnacl.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__pnacl.sep.1.o nitc__pnacl.sep.1.c

nitc__emscripten.sep.1.o: nitc__emscripten.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__emscripten.sep.1.o nitc__emscripten.sep.1.c

nitc__ios.sep.1.o: nitc__ios.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__ios.sep.1.o nitc__ios.sep.1.c

nitc__xcode_templates.sep.1.o: nitc__xcode_templates.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__xcode_templates.sep.1.o nitc__xcode_templates.sep.1.c

nitc__transform.sep.1.o: nitc__transform.sep.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc__transform.sep.1.o nitc__transform.sep.1.c

nitc.types.1.o: nitc.types.1.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.1.o nitc.types.1.c

nitc.types.2.o: nitc.types.2.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.2.o nitc.types.2.c

nitc.types.3.o: nitc.types.3.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.3.o nitc.types.3.c

nitc.types.4.o: nitc.types.4.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.4.o nitc.types.4.c

nitc.types.5.o: nitc.types.5.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.5.o nitc.types.5.c

nitc.types.6.o: nitc.types.6.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.6.o nitc.types.6.c

nitc.types.7.o: nitc.types.7.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.7.o nitc.types.7.c

nitc.types.8.o: nitc.types.8.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.8.o nitc.types.8.c

nitc.types.9.o: nitc.types.9.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.9.o nitc.types.9.c

nitc.types.10.o: nitc.types.10.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.10.o nitc.types.10.c

nitc.types.11.o: nitc.types.11.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.11.o nitc.types.11.c

nitc.types.12.o: nitc.types.12.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.12.o nitc.types.12.c

nitc.types.13.o: nitc.types.13.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.13.o nitc.types.13.c

nitc.types.14.o: nitc.types.14.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.14.o nitc.types.14.c

nitc.types.15.o: nitc.types.15.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.15.o nitc.types.15.c

nitc.types.16.o: nitc.types.16.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.16.o nitc.types.16.c

nitc.types.17.o: nitc.types.17.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.17.o nitc.types.17.c

nitc.types.18.o: nitc.types.18.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.18.o nitc.types.18.c

nitc.types.19.o: nitc.types.19.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.19.o nitc.types.19.c

nitc.types.20.o: nitc.types.20.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.20.o nitc.types.20.c

nitc.types.21.o: nitc.types.21.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.21.o nitc.types.21.c

nitc.types.22.o: nitc.types.22.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.22.o nitc.types.22.c

nitc.types.23.o: nitc.types.23.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.23.o nitc.types.23.c

nitc.types.24.o: nitc.types.24.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.24.o nitc.types.24.c

nitc.types.25.o: nitc.types.25.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.25.o nitc.types.25.c

nitc.types.26.o: nitc.types.26.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.26.o nitc.types.26.c

nitc.types.27.o: nitc.types.27.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.27.o nitc.types.27.c

nitc.types.28.o: nitc.types.28.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.28.o nitc.types.28.c

nitc.types.29.o: nitc.types.29.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.29.o nitc.types.29.c

nitc.types.30.o: nitc.types.30.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.30.o nitc.types.30.c

nitc.types.31.o: nitc.types.31.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.31.o nitc.types.31.c

nitc.types.32.o: nitc.types.32.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.32.o nitc.types.32.c

nitc.types.33.o: nitc.types.33.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.33.o nitc.types.33.c

nitc.types.34.o: nitc.types.34.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.34.o nitc.types.34.c

nitc.types.35.o: nitc.types.35.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.35.o nitc.types.35.c

nitc.types.36.o: nitc.types.36.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.36.o nitc.types.36.c

nitc.types.37.o: nitc.types.37.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.37.o nitc.types.37.c

nitc.types.38.o: nitc.types.38.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.38.o nitc.types.38.c

nitc.types.39.o: nitc.types.39.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.39.o nitc.types.39.c

nitc.types.40.o: nitc.types.40.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.40.o nitc.types.40.c

nitc.types.41.o: nitc.types.41.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.41.o nitc.types.41.c

nitc.types.42.o: nitc.types.42.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.42.o nitc.types.42.c

nitc.types.43.o: nitc.types.43.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.43.o nitc.types.43.c

nitc.types.44.o: nitc.types.44.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.44.o nitc.types.44.c

nitc.types.45.o: nitc.types.45.c
	$(CC) $(CFLAGS) $(CINCL) -c -o nitc.types.45.o nitc.types.45.c

# does pkg-config exists?
ifneq ($(shell which pkg-config >/dev/null; echo $$?), 0)
$(error "Command `pkg-config` not found. Please install it")
endif
# Check for library bdw-gc
ifneq ($(shell pkg-config --exists 'bdw-gc'; echo $$?), 0)
$(error "pkg-config: package bdw-gc is not found.")
endif
tables_nit.extern.o: tables_nit.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o tables_nit.extern.o tables_nit.c

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

core__time._ffi.extern.o: core__time._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__time._ffi.extern.o core__time._ffi.c

core__time._nitni.extern.o: core__time._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__time._nitni.extern.o core__time._nitni.c

core__exec._ffi.extern.o: core__exec._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__exec._ffi.extern.o core__exec._ffi.c

core__exec._nitni.extern.o: core__exec._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__exec._nitni.extern.o core__exec._nitni.c

core__re._ffi.extern.o: core__re._ffi.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__re._ffi.extern.o core__re._ffi.c

core__re._nitni.extern.o: core__re._nitni.c
	$(CC) $(CFLAGS) -Wall -Wno-unused-function   -c -o core__re._nitni.extern.o core__re._nitni.c

../nitc_0: nitc.classes.1.o nitc.classes.2.o nitc.classes.3.o nitc.classes.4.o nitc.classes.5.o nitc.classes.6.o nitc.classes.7.o nitc.main.1.o nitc.sep.1.o nitc__frontend.sep.1.o nitc__no_warning.sep.1.o nitc__modelbuilder.sep.1.o nitc__loader.sep.1.o nitc__modelbuilder_base.sep.1.o nitc__model.sep.1.o nitc__model.sep.2.o nitc__model.sep.3.o nitc__mmodule.sep.1.o nitc__mpackage.sep.1.o nitc__model_base.sep.1.o nitc__location.sep.1.o core__ropes.sep.1.o core__flat.sep.1.o core__flat.sep.2.o core__abstract_text.sep.1.o core__native.sep.1.o core__kernel.sep.1.o core__math.sep.1.o core__collection.sep.1.o core__range.sep.1.o core__abstract_collection.sep.1.o core__list.sep.1.o core__array.sep.1.o core__circular_array.sep.1.o core__sorter.sep.1.o core__hash_collection.sep.1.o core__fixed_ints.sep.1.o core__string_search.sep.1.o core__fixed_ints_text.sep.1.o core__environ.sep.1.o core__file.sep.1.o core__stream.sep.1.o core__error.sep.1.o core__bytes.sep.1.o core__utf8.sep.1.o core__time.sep.1.o core__exec.sep.1.o core__re.sep.1.o more_collections.sep.1.o serialization.sep.1.o poset.sep.1.o nitc__mdoc.sep.1.o ordered_tree.sep.1.o nitc__toolcontext.sep.1.o opts.sep.1.o nitc__version.sep.1.o template.sep.1.o nitc__parser.sep.1.o nitc__parser.sep.2.o nitc__parser.sep.3.o nitc__parser.sep.4.o nitc__parser.sep.5.o nitc__parser.sep.6.o nitc__parser.sep.7.o nitc__parser_prod.sep.1.o nitc__parser_prod.sep.2.o nitc__parser_prod.sep.3.o nitc__parser_prod.sep.4.o nitc__parser_prod.sep.5.o nitc__parser_prod.sep.6.o nitc__lexer.sep.1.o nitc__parser_nodes.sep.1.o nitc__lexer_work.sep.1.o nitc__tables.sep.1.o nitc__parser_work.sep.1.o ini.sep.1.o nitc__phase.sep.1.o nitc__literal.sep.1.o nitc__simple_misc_analysis.sep.1.o nitc__modelize_property.sep.1.o nitc__modelize_property.sep.2.o nitc__modelize_property.sep.3.o nitc__modelize_class.sep.1.o nitc__annotation.sep.1.o nitc__mmodule_data.sep.1.o nitc__auto_super_init.sep.1.o nitc__typing.sep.1.o nitc__typing.sep.2.o nitc__typing.sep.3.o nitc__local_var_init.sep.1.o nitc__flow.sep.1.o nitc__scope.sep.1.o nitc__div_by_zero.sep.1.o nitc__serialization_phase.sep.1.o nitc__parser_util.sep.1.o nitc__deriving.sep.1.o nitc__check_annotation.sep.1.o nitc__glsl_validation.sep.1.o nitc__parallelization_phase.sep.1.o nitc__astbuilder.sep.1.o nitc__astvalidation.sep.1.o nitc__i18n_phase.sep.1.o nitc__regex_phase.sep.1.o nitc__separate_erasure_compiler.sep.1.o nitc__separate_erasure_compiler.sep.2.o nitc__separate_compiler.sep.1.o nitc__separate_compiler.sep.2.o nitc__separate_compiler.sep.3.o nitc__separate_compiler.sep.4.o nitc__separate_compiler.sep.5.o nitc__abstract_compiler.sep.1.o nitc__abstract_compiler.sep.2.o nitc__abstract_compiler.sep.3.o nitc__abstract_compiler.sep.4.o nitc__abstract_compiler.sep.5.o nitc__abstract_compiler.sep.6.o nitc__platform.sep.1.o nitc__c_tools.sep.1.o nitc__mixin.sep.1.o counter.sep.1.o nitc__coloring.sep.1.o nitc__rapid_type_analysis.sep.1.o csv.sep.1.o nitc__global_compiler.sep.1.o nitc__global_compiler.sep.2.o nitc__global_compiler.sep.3.o nitc__compiler_ffi.sep.1.o nitc__light.sep.1.o nitc__light_ffi.sep.1.o nitc__nitni_utilities.sep.1.o nitc__nitni_base.sep.1.o nitc__light_ffi_base.sep.1.o nitc__extern_classes.sep.1.o nitc__light_c.sep.1.o nitc__nitni_callbacks.sep.1.o nitc__memory_logger.sep.1.o nitc__compiler_serialization.sep.1.o nitc__serialize_model.sep.1.o json__serialization_write.sep.1.o serialization__caching.sep.1.o serialization__engine_tools.sep.1.o nitc__android.sep.1.o nitc__ffi.sep.1.o nitc__ffi_base.sep.1.o nitc__header_dependency.sep.1.o nitc__c.sep.1.o nitc__pkgconfig.sep.1.o nitc__c_compiler_options.sep.1.o nitc__cpp.sep.1.o nitc__java.sep.1.o nitc__extra_java_files.sep.1.o nitc__objc.sep.1.o nitc__android_annotations.sep.1.o nitc__app_annotations.sep.1.o nitc__pnacl.sep.1.o nitc__emscripten.sep.1.o nitc__ios.sep.1.o nitc__xcode_templates.sep.1.o nitc__transform.sep.1.o nitc.types.1.o nitc.types.2.o nitc.types.3.o nitc.types.4.o nitc.types.5.o nitc.types.6.o nitc.types.7.o nitc.types.8.o nitc.types.9.o nitc.types.10.o nitc.types.11.o nitc.types.12.o nitc.types.13.o nitc.types.14.o nitc.types.15.o nitc.types.16.o nitc.types.17.o nitc.types.18.o nitc.types.19.o nitc.types.20.o nitc.types.21.o nitc.types.22.o nitc.types.23.o nitc.types.24.o nitc.types.25.o nitc.types.26.o nitc.types.27.o nitc.types.28.o nitc.types.29.o nitc.types.30.o nitc.types.31.o nitc.types.32.o nitc.types.33.o nitc.types.34.o nitc.types.35.o nitc.types.36.o nitc.types.37.o nitc.types.38.o nitc.types.39.o nitc.types.40.o nitc.types.41.o nitc.types.42.o nitc.types.43.o nitc.types.44.o nitc.types.45.o tables_nit.extern.o c_functions_hash.extern.o gc_chooser.extern.o core__abstract_text._ffi.extern.o core__abstract_text._nitni.extern.o core__native._ffi.extern.o core__native._nitni.extern.o core__kernel._ffi.extern.o core__kernel._nitni.extern.o core__math._ffi.extern.o core__math._nitni.extern.o core__fixed_ints_text._ffi.extern.o core__fixed_ints_text._nitni.extern.o core__environ._ffi.extern.o core__environ._nitni.extern.o core__file._ffi.extern.o core__file._nitni.extern.o core__time._ffi.extern.o core__time._nitni.extern.o core__exec._ffi.extern.o core__exec._nitni.extern.o core__re._ffi.extern.o core__re._nitni.extern.o
	$(CC) $(LDFLAGS) -o '../nitc_0' nitc.classes.1.o nitc.classes.2.o nitc.classes.3.o nitc.classes.4.o nitc.classes.5.o nitc.classes.6.o nitc.classes.7.o nitc.main.1.o nitc.sep.1.o nitc__frontend.sep.1.o nitc__no_warning.sep.1.o nitc__modelbuilder.sep.1.o nitc__loader.sep.1.o nitc__modelbuilder_base.sep.1.o nitc__model.sep.1.o nitc__model.sep.2.o nitc__model.sep.3.o nitc__mmodule.sep.1.o nitc__mpackage.sep.1.o nitc__model_base.sep.1.o nitc__location.sep.1.o core__ropes.sep.1.o core__flat.sep.1.o core__flat.sep.2.o core__abstract_text.sep.1.o core__native.sep.1.o core__kernel.sep.1.o core__math.sep.1.o core__collection.sep.1.o core__range.sep.1.o core__abstract_collection.sep.1.o core__list.sep.1.o core__array.sep.1.o core__circular_array.sep.1.o core__sorter.sep.1.o core__hash_collection.sep.1.o core__fixed_ints.sep.1.o core__string_search.sep.1.o core__fixed_ints_text.sep.1.o core__environ.sep.1.o core__file.sep.1.o core__stream.sep.1.o core__error.sep.1.o core__bytes.sep.1.o core__utf8.sep.1.o core__time.sep.1.o core__exec.sep.1.o core__re.sep.1.o more_collections.sep.1.o serialization.sep.1.o poset.sep.1.o nitc__mdoc.sep.1.o ordered_tree.sep.1.o nitc__toolcontext.sep.1.o opts.sep.1.o nitc__version.sep.1.o template.sep.1.o nitc__parser.sep.1.o nitc__parser.sep.2.o nitc__parser.sep.3.o nitc__parser.sep.4.o nitc__parser.sep.5.o nitc__parser.sep.6.o nitc__parser.sep.7.o nitc__parser_prod.sep.1.o nitc__parser_prod.sep.2.o nitc__parser_prod.sep.3.o nitc__parser_prod.sep.4.o nitc__parser_prod.sep.5.o nitc__parser_prod.sep.6.o nitc__lexer.sep.1.o nitc__parser_nodes.sep.1.o nitc__lexer_work.sep.1.o nitc__tables.sep.1.o nitc__parser_work.sep.1.o ini.sep.1.o nitc__phase.sep.1.o nitc__literal.sep.1.o nitc__simple_misc_analysis.sep.1.o nitc__modelize_property.sep.1.o nitc__modelize_property.sep.2.o nitc__modelize_property.sep.3.o nitc__modelize_class.sep.1.o nitc__annotation.sep.1.o nitc__mmodule_data.sep.1.o nitc__auto_super_init.sep.1.o nitc__typing.sep.1.o nitc__typing.sep.2.o nitc__typing.sep.3.o nitc__local_var_init.sep.1.o nitc__flow.sep.1.o nitc__scope.sep.1.o nitc__div_by_zero.sep.1.o nitc__serialization_phase.sep.1.o nitc__parser_util.sep.1.o nitc__deriving.sep.1.o nitc__check_annotation.sep.1.o nitc__glsl_validation.sep.1.o nitc__parallelization_phase.sep.1.o nitc__astbuilder.sep.1.o nitc__astvalidation.sep.1.o nitc__i18n_phase.sep.1.o nitc__regex_phase.sep.1.o nitc__separate_erasure_compiler.sep.1.o nitc__separate_erasure_compiler.sep.2.o nitc__separate_compiler.sep.1.o nitc__separate_compiler.sep.2.o nitc__separate_compiler.sep.3.o nitc__separate_compiler.sep.4.o nitc__separate_compiler.sep.5.o nitc__abstract_compiler.sep.1.o nitc__abstract_compiler.sep.2.o nitc__abstract_compiler.sep.3.o nitc__abstract_compiler.sep.4.o nitc__abstract_compiler.sep.5.o nitc__abstract_compiler.sep.6.o nitc__platform.sep.1.o nitc__c_tools.sep.1.o nitc__mixin.sep.1.o counter.sep.1.o nitc__coloring.sep.1.o nitc__rapid_type_analysis.sep.1.o csv.sep.1.o nitc__global_compiler.sep.1.o nitc__global_compiler.sep.2.o nitc__global_compiler.sep.3.o nitc__compiler_ffi.sep.1.o nitc__light.sep.1.o nitc__light_ffi.sep.1.o nitc__nitni_utilities.sep.1.o nitc__nitni_base.sep.1.o nitc__light_ffi_base.sep.1.o nitc__extern_classes.sep.1.o nitc__light_c.sep.1.o nitc__nitni_callbacks.sep.1.o nitc__memory_logger.sep.1.o nitc__compiler_serialization.sep.1.o nitc__serialize_model.sep.1.o json__serialization_write.sep.1.o serialization__caching.sep.1.o serialization__engine_tools.sep.1.o nitc__android.sep.1.o nitc__ffi.sep.1.o nitc__ffi_base.sep.1.o nitc__header_dependency.sep.1.o nitc__c.sep.1.o nitc__pkgconfig.sep.1.o nitc__c_compiler_options.sep.1.o nitc__cpp.sep.1.o nitc__java.sep.1.o nitc__extra_java_files.sep.1.o nitc__objc.sep.1.o nitc__android_annotations.sep.1.o nitc__app_annotations.sep.1.o nitc__pnacl.sep.1.o nitc__emscripten.sep.1.o nitc__ios.sep.1.o nitc__xcode_templates.sep.1.o nitc__transform.sep.1.o nitc.types.1.o nitc.types.2.o nitc.types.3.o nitc.types.4.o nitc.types.5.o nitc.types.6.o nitc.types.7.o nitc.types.8.o nitc.types.9.o nitc.types.10.o nitc.types.11.o nitc.types.12.o nitc.types.13.o nitc.types.14.o nitc.types.15.o nitc.types.16.o nitc.types.17.o nitc.types.18.o nitc.types.19.o nitc.types.20.o nitc.types.21.o nitc.types.22.o nitc.types.23.o nitc.types.24.o nitc.types.25.o nitc.types.26.o nitc.types.27.o nitc.types.28.o nitc.types.29.o nitc.types.30.o nitc.types.31.o nitc.types.32.o nitc.types.33.o nitc.types.34.o nitc.types.35.o nitc.types.36.o nitc.types.37.o nitc.types.38.o nitc.types.39.o nitc.types.40.o nitc.types.41.o nitc.types.42.o nitc.types.43.o nitc.types.44.o nitc.types.45.o tables_nit.extern.o c_functions_hash.extern.o gc_chooser.extern.o core__abstract_text._ffi.extern.o core__abstract_text._nitni.extern.o core__native._ffi.extern.o core__native._nitni.extern.o core__kernel._ffi.extern.o core__kernel._nitni.extern.o core__math._ffi.extern.o core__math._nitni.extern.o core__fixed_ints_text._ffi.extern.o core__fixed_ints_text._nitni.extern.o core__environ._ffi.extern.o core__environ._nitni.extern.o core__file._ffi.extern.o core__file._nitni.extern.o core__time._ffi.extern.o core__time._nitni.extern.o core__exec._ffi.extern.o core__exec._nitni.extern.o core__re._ffi.extern.o core__re._nitni.extern.o $(LDLIBS) `pkg-config --libs bdw-gc`

clean:
	rm nitc.classes.1.o nitc.classes.2.o nitc.classes.3.o nitc.classes.4.o nitc.classes.5.o nitc.classes.6.o nitc.classes.7.o nitc.main.1.o nitc.sep.1.o nitc__frontend.sep.1.o nitc__no_warning.sep.1.o nitc__modelbuilder.sep.1.o nitc__loader.sep.1.o nitc__modelbuilder_base.sep.1.o nitc__model.sep.1.o nitc__model.sep.2.o nitc__model.sep.3.o nitc__mmodule.sep.1.o nitc__mpackage.sep.1.o nitc__model_base.sep.1.o nitc__location.sep.1.o core__ropes.sep.1.o core__flat.sep.1.o core__flat.sep.2.o core__abstract_text.sep.1.o core__native.sep.1.o core__kernel.sep.1.o core__math.sep.1.o core__collection.sep.1.o core__range.sep.1.o core__abstract_collection.sep.1.o core__list.sep.1.o core__array.sep.1.o core__circular_array.sep.1.o core__sorter.sep.1.o core__hash_collection.sep.1.o core__fixed_ints.sep.1.o core__string_search.sep.1.o core__fixed_ints_text.sep.1.o core__environ.sep.1.o core__file.sep.1.o core__stream.sep.1.o core__error.sep.1.o core__bytes.sep.1.o core__utf8.sep.1.o core__time.sep.1.o core__exec.sep.1.o core__re.sep.1.o more_collections.sep.1.o serialization.sep.1.o poset.sep.1.o nitc__mdoc.sep.1.o ordered_tree.sep.1.o nitc__toolcontext.sep.1.o opts.sep.1.o nitc__version.sep.1.o template.sep.1.o nitc__parser.sep.1.o nitc__parser.sep.2.o nitc__parser.sep.3.o nitc__parser.sep.4.o nitc__parser.sep.5.o nitc__parser.sep.6.o nitc__parser.sep.7.o nitc__parser_prod.sep.1.o nitc__parser_prod.sep.2.o nitc__parser_prod.sep.3.o nitc__parser_prod.sep.4.o nitc__parser_prod.sep.5.o nitc__parser_prod.sep.6.o nitc__lexer.sep.1.o nitc__parser_nodes.sep.1.o nitc__lexer_work.sep.1.o nitc__tables.sep.1.o nitc__parser_work.sep.1.o ini.sep.1.o nitc__phase.sep.1.o nitc__literal.sep.1.o nitc__simple_misc_analysis.sep.1.o nitc__modelize_property.sep.1.o nitc__modelize_property.sep.2.o nitc__modelize_property.sep.3.o nitc__modelize_class.sep.1.o nitc__annotation.sep.1.o nitc__mmodule_data.sep.1.o nitc__auto_super_init.sep.1.o nitc__typing.sep.1.o nitc__typing.sep.2.o nitc__typing.sep.3.o nitc__local_var_init.sep.1.o nitc__flow.sep.1.o nitc__scope.sep.1.o nitc__div_by_zero.sep.1.o nitc__serialization_phase.sep.1.o nitc__parser_util.sep.1.o nitc__deriving.sep.1.o nitc__check_annotation.sep.1.o nitc__glsl_validation.sep.1.o nitc__parallelization_phase.sep.1.o nitc__astbuilder.sep.1.o nitc__astvalidation.sep.1.o nitc__i18n_phase.sep.1.o nitc__regex_phase.sep.1.o nitc__separate_erasure_compiler.sep.1.o nitc__separate_erasure_compiler.sep.2.o nitc__separate_compiler.sep.1.o nitc__separate_compiler.sep.2.o nitc__separate_compiler.sep.3.o nitc__separate_compiler.sep.4.o nitc__separate_compiler.sep.5.o nitc__abstract_compiler.sep.1.o nitc__abstract_compiler.sep.2.o nitc__abstract_compiler.sep.3.o nitc__abstract_compiler.sep.4.o nitc__abstract_compiler.sep.5.o nitc__abstract_compiler.sep.6.o nitc__platform.sep.1.o nitc__c_tools.sep.1.o nitc__mixin.sep.1.o counter.sep.1.o nitc__coloring.sep.1.o nitc__rapid_type_analysis.sep.1.o csv.sep.1.o nitc__global_compiler.sep.1.o nitc__global_compiler.sep.2.o nitc__global_compiler.sep.3.o nitc__compiler_ffi.sep.1.o nitc__light.sep.1.o nitc__light_ffi.sep.1.o nitc__nitni_utilities.sep.1.o nitc__nitni_base.sep.1.o nitc__light_ffi_base.sep.1.o nitc__extern_classes.sep.1.o nitc__light_c.sep.1.o nitc__nitni_callbacks.sep.1.o nitc__memory_logger.sep.1.o nitc__compiler_serialization.sep.1.o nitc__serialize_model.sep.1.o json__serialization_write.sep.1.o serialization__caching.sep.1.o serialization__engine_tools.sep.1.o nitc__android.sep.1.o nitc__ffi.sep.1.o nitc__ffi_base.sep.1.o nitc__header_dependency.sep.1.o nitc__c.sep.1.o nitc__pkgconfig.sep.1.o nitc__c_compiler_options.sep.1.o nitc__cpp.sep.1.o nitc__java.sep.1.o nitc__extra_java_files.sep.1.o nitc__objc.sep.1.o nitc__android_annotations.sep.1.o nitc__app_annotations.sep.1.o nitc__pnacl.sep.1.o nitc__emscripten.sep.1.o nitc__ios.sep.1.o nitc__xcode_templates.sep.1.o nitc__transform.sep.1.o nitc.types.1.o nitc.types.2.o nitc.types.3.o nitc.types.4.o nitc.types.5.o nitc.types.6.o nitc.types.7.o nitc.types.8.o nitc.types.9.o nitc.types.10.o nitc.types.11.o nitc.types.12.o nitc.types.13.o nitc.types.14.o nitc.types.15.o nitc.types.16.o nitc.types.17.o nitc.types.18.o nitc.types.19.o nitc.types.20.o nitc.types.21.o nitc.types.22.o nitc.types.23.o nitc.types.24.o nitc.types.25.o nitc.types.26.o nitc.types.27.o nitc.types.28.o nitc.types.29.o nitc.types.30.o nitc.types.31.o nitc.types.32.o nitc.types.33.o nitc.types.34.o nitc.types.35.o nitc.types.36.o nitc.types.37.o nitc.types.38.o nitc.types.39.o nitc.types.40.o nitc.types.41.o nitc.types.42.o nitc.types.43.o nitc.types.44.o nitc.types.45.o tables_nit.extern.o c_functions_hash.extern.o gc_chooser.extern.o core__abstract_text._ffi.extern.o core__abstract_text._nitni.extern.o core__native._ffi.extern.o core__native._nitni.extern.o core__kernel._ffi.extern.o core__kernel._nitni.extern.o core__math._ffi.extern.o core__math._nitni.extern.o core__fixed_ints_text._ffi.extern.o core__fixed_ints_text._nitni.extern.o core__environ._ffi.extern.o core__environ._nitni.extern.o core__file._ffi.extern.o core__file._nitni.extern.o core__time._ffi.extern.o core__time._nitni.extern.o core__exec._ffi.extern.o core__exec._nitni.extern.o core__re._ffi.extern.o core__re._nitni.extern.o 2>/dev/null
