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

if [[ "$SYSTEM_RUNTIME" ]]; then
	RUNTIME_DIR=${CACHE}/fyrlang/lib
else
	RUNTIME_DIR="../../runtime/${FYR_NATIVE_MALLOC}"
fi

if [[ "$FYR_NATIVE_MALLOC" == "tcmalloc" ]]; then
	COMPILER=g++
else
	COMPILER=gcc
fi

BIN_NAME=`echo $1 | sed 's#.*/\([a-zA-Z0-9]\+\)/\?#\1#g'`
MALLOC_ARCHIVE=`find $FYRLIB_NATIVE -ipath "*/*$(uname -s)*$(uname -m)*/lib${FYR_NATIVE_MALLOC}.a"`

# NOTE: we assume that the runtime library has already been compiled

cd $COMPILE_PATH
gcc \
	-D_FORTIFY_SOURCE=0 $OPT \
	-I${FYRLIB_NATIVE}include/$FYR_NATIVE_MALLOC \
	-include malloc.h \
	-c \
	-I${RUNTIME_DIR}/ \
	-include runtime.h \
	-I../../src/common \
	*.c

mkdir -p bin
$COMPILER \
	-o bin/$BIN_NAME \
	*.o \
	${RUNTIME_DIR}/runtime.a \
	$MALLOC_ARCHIVE \
	../../src/common/common.a \
	-lpthread
