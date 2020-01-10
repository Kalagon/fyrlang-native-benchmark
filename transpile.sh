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
