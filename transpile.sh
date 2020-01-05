#!/bin/bash -xe

source .env

PACKAGE=$1
if [ -n "$2" ]; then
	FYR_NATIVE_MALLOC=$2
fi

export FYRBASE
export FYR_NATIVE_MALLOC

$FYRBASE/fyrc -n $PACKAGE

##
# clean the transpiled resources by removing system-dependent paths
##
TRANSPILED_PATH=`echo $PACKAGE | sed 's#src/#transpiled/#g' | sed 's#pkg/*/##g'`
cp $PACKAGE/pkg/*/*.c $PACKAGE/pkg/*/*.h $TRANSPILED_PATH

sed -i 's|#include ".*/\(\w*\.h\)"|#include "\1"|g' $TRANSPILED_PATH/*.c
sed -i 's|#include ".*/lib/runtime\.h"||g' $TRANSPILED_PATH/*.h
