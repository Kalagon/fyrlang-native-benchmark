#!/bin/bash

source .env

if [[ "$DEBUG" ]]; then
	OPT="-ggdb -Og -D DEBUG=1" # for debugging
else
	OPT="-O3"
fi

COMPILE_PATH=$1
if [ -n "$2" ]; then
	FYR_NATIVE_MALLOC=$2
fi

case "$FYR_NATIVE_MALLOC" in
"default" | "")
	FYR_NATIVE_MALLOC=default
	COMPILER=gcc
	;;
"tcmalloc")
	COMPILER=g++
	MALLOC_INCLUDE="-I${FYRLIB_NATIVE}include/$FYR_NATIVE_MALLOC -include malloc.h"
	MALLOC_ARCHIVE=`find $FYRLIB_NATIVE -ipath "*/*$(uname -s)*$(uname -m)*/lib${FYR_NATIVE_MALLOC}.a"`
	;;
*)
	COMPILER=gcc
	MALLOC_INCLUDE="-I${FYRLIB_NATIVE}include/$FYR_NATIVE_MALLOC -include malloc.h"
	MALLOC_ARCHIVE=`find $FYRLIB_NATIVE -ipath "*/*$(uname -s)*$(uname -m)*/lib${FYR_NATIVE_MALLOC}.a"`
esac

if [[ "$SYSTEM_RUNTIME" ]]; then
	RUNTIME_DIR=${CACHE}/fyrlang/lib
else
	RUNTIME_DIR="../../runtime/${FYR_NATIVE_MALLOC}"
fi

BIN_NAME=`echo $1 | sed 's#.*/\([a-zA-Z0-9]\+\)/\?#\1#g'`

# NOTE: we assume that the runtime library has already been compiled

cd $COMPILE_PATH
gcc \
	-D_FORTIFY_SOURCE=0 $OPT \
	$MALLOC_INCLUDE \
	-c \
	-I${RUNTIME_DIR}/ \
	-include runtime.h \
	-I../../src/common \
	*.c

mkdir -p bin
$COMPILER \
	$OPT \
	-o bin/$BIN_NAME \
	*.o \
	${RUNTIME_DIR}/runtime.a \
	$MALLOC_ARCHIVE \
	../../src/common/common.a \
	-lpthread
