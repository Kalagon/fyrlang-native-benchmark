#!/bin/bash -xe

source .env

if [[ "$DEBUG" ]]; then
	DEBUGFLAGS="-v"
fi

PACKAGE=$1
if [ -n "$2" ]; then
	FYR_NATIVE_MALLOC=$2
fi

export FYRBASE
export FYR_NATIVE_MALLOC

$FYRBASE/fyrc -n $DEBUGFLAGS $PACKAGE

##
# clean the transpiled resources by removing system-dependent paths
##
TRANSPILED_PATH=`echo $PACKAGE | sed 's#src/#transpiled/#g' | sed 's#pkg/*/##g'`
cp $PACKAGE/pkg/*/*.c $PACKAGE/pkg/*/*.h $TRANSPILED_PATH

sed -i 's|#include ".*/\(\w*\.h\)"|#include "\1"\n#include "measurement.h"|g' $TRANSPILED_PATH/*.c
sed -i 's|#include ".*/lib/runtime\.h"||g' $TRANSPILED_PATH/*.h

sed -i 's|123456789|EVAL_LOOP_RUNS|g' $TRANSPILED_PATH/*.c
sed -i 's|Malloc_[a-z0-9]*|Malloc_5cdcff11cc4fe0b7702dcefd8e40a3205be2181cfbca6974337e1a1f974cd4e8|g' $TRANSPILED_PATH/*.c
sed -i 's|Free_[a-z0-9]*|Free_17cd220e161d0642d8eb85204f15c78e318810795cb3cfa0160f7806603a731a|g' $TRANSPILED_PATH/*.c
sed -i 's|Merge_[a-z0-9]*|Merge_0a07642b5f32c65a63a806dde3e254e9db9e84ab40901a0b432741643f03ac64|g' $TRANSPILED_PATH/*.c
sed -i 's|__init___bff25aa32db800b71183c55b8baf8114ed116ceb29999e8fba1bd86b05f082d2(|__init___a0deb5ebe09db172d62667761dc6bc16118f6fb5e048a991b1ca841a830f76f0(|g' $TRANSPILED_PATH/*.c

mkdir -p runtime/system
cp $CACHE/fyrlang/lib/runtime.* runtime/system/
sed -i 's|#include ".*/lib/runtime\.h"|#include "runtime.h"|g' runtime/system/*.c
