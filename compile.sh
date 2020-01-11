#!/bin/bash -xe

source .env

if [[ "$DEBUG" ]]; then
	OPT="-g -Og" # for debugging
else
	OPT="-O3"
fi

COMPILE_PATH=$1
if [ -n "$2" ]; then
	FYR_NATIVE_MALLOC=$2
fi
BIN_NAME=`echo $1 | sed 's#.*/\([a-zA-Z0-9]\+\)/\?#\1#g'`
MALLOC_ARCHIVE=`find $FYRLIB_NATIVE -ipath "*/*$(uname -s)*$(uname -m)*/lib${FYR_NATIVE_MALLOC}.a"`

# NOTE: we assume that the runtime library has already been compiled

cd $COMPILE_PATH
/usr/bin/gcc \
	-D_FORTIFY_SOURCE=0 $OPT \
	-I${FYRLIB_NATIVE}include/$FYR_NATIVE_MALLOC \
	-include malloc.h \
	-c \
	-I${CACHE}/fyrlang/lib/ \
	-include runtime.h \
	-I../../src/common \
	*.c

mkdir -p bin
/usr/bin/gcc \
	-o bin/$BIN_NAME \
	*.o \
	$CACHE/fyrlang/lib/runtime.a \
	$MALLOC_ARCHIVE \
	../../src/common/measurement.c \
	-lpthread
