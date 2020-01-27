#!/bin/bash

source .env

echo "Preparing the runtime sources for use on a 32 bit system..."

sed -i 's/uint64_t/uint32_t/g' runtime/*/runtime.h runtime/*/runtime.c
sed -i 's/uint64_t/uint32_t/g' src/common/*.h src/common/*.c


echo "Preparing the library headers..."
sed -i 's/uint64_t/uint32_t/g' $FYRLIB_NATIVE/include/*/malloc.h


echo "Cleaning previously built archives..."
make clean

echo "Done."
