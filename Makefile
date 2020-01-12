MODULES = gauss tp tp_small
ifdef SET_TIMESTAMP
TIMESTAMP = "_$(shell date +%F_%H%M%S)"
endif

all: all_manual all_auto

all_auto: \
	$(foreach module,$(MODULES),transpiled/$(module)/bin/$(module))

all_manual: \
	$(foreach module,$(MODULES),simulated/$(module)/bin/$(module)) \
	$(foreach module,$(MODULES),optimized/$(module)/bin/$(module))

bench: \
	$(foreach module,$(MODULES),perf/transpiled/$(module)) \
	$(foreach module,$(MODULES),perf/simulated/$(module)) \
	$(foreach module,$(MODULES),perf/optimized/$(module))

perf/%: all_manual
	mkdir -p logs/perf/$(notdir $@)
	perf stat -d -r 10 --table ./$(subst perf/,,$(dir $@))$(notdir $@)/bin/$(notdir $@) \
	> logs/perf/$(notdir $@)/$(subst /,,$(subst perf/,,$(dir $@)))$(TIMESTAMP).log 2>&1

list_targets:
	@$(MAKE) -pn none | grep -o -E '^[a-z][a-z_/\.%]*' | grep -v -e '^make' -e '^none' | sort

.PHONY: all all_manual bench list_targets none


##
# Single executables
##

simulated/gauss/bin/gauss: simulated/gauss/gauss.c
simulated/tp/bin/tp: simulated/tp/tp.c
simulated/tp_small/bin/tp_small: simulated/tp_small/tp_small.c
$(foreach module,$(MODULES),simulated/$(module)/bin/$(module)): src/common/*.c src/common/*.h
	./compile.sh simulated/$(notdir $@)

optimized/gauss/bin/gauss: optimized/gauss/gauss.c
optimized/tp/bin/tp: optimized/tp/tp.c
optimized/tp_small/bin/tp_small: optimized/tp_small/tp_small.c
$(foreach module,$(MODULES),optimized/$(module)/bin/$(module)): optimized/tp/tp.c src/common/*.c src/common/*.h
	./compile.sh optimized/$(notdir $@)


##
# Transpile targets; these are only used to generate the C code and verify general viability of the resulting binaries
##

transpiled/gauss/bin/gauss: transpiled/gauss/gauss.c
transpiled/tp/bin/tp: transpiled/tp/tp.c
transpiled/tp_small/bin/tp_small: transpiled/tp_small/tp_small.c
$(foreach module,$(MODULES),transpiled/$(module)/bin/$(module)):
	./compile.sh transpiled/$(notdir $@)

transpiled/gauss/gauss.c: src/gauss/main.fyr
transpiled/tp/tp.c: src/tp/main.fyr
transpiled/tp_small/tp_small.c: src/tp_small/main.fyr
$(foreach module,$(MODULES),transpiled/$(module)/$(module).c):
	./transpile.sh src/$(basename $(notdir $@))
