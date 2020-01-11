MODULES = tp

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
	> logs/perf/$(notdir $@)/$(subst /,,$(subst perf/,,$(dir $@)))_$(shell date +%F_%H%M%S).log 2>&1

list_targets:
	@$(MAKE) -pn none | grep -o -E '^[a-z][a-z_/\.%]*' | grep -v -e '^make' -e '^none' | sort

.PHONY: all all_manual bench list_targets none


##
# Single executables
##

simulated/tp/bin/tp: simulated/tp/tp.c
$(foreach module,$(MODULES),simulated/$(module)/bin/$(module)): src/common/*.c src/common/*.h
	./compile.sh simulated/$(notdir $@)

optimized/tp/bin/tp: optimized/tp/tp.c
$(foreach module,$(MODULES),optimized/$(module)/bin/$(module)): optimized/tp/tp.c src/common/*.c src/common/*.h
	./compile.sh optimized/$(notdir $@)


##
# Transpile targets; these are only used to generate the C code and verify general runnability of the resulting binaries
##

transpiled/tp/bin/tp: transpiled/tp/tp.c
$(foreach module,$(MODULES),transpiled/$(module)/bin/$(module)):
	./compile.sh transpiled/$(notdir $@)

transpiled/tp/tp.c: src/tp/main.fyr
	./transpile.sh src/$(basename $(notdir $@))
