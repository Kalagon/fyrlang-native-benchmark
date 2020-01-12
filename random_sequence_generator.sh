#!/bin/bash

LENGTH=$1
if [ "$2" ]; then
	SMALL_PROBABILITY=$2
else
	SMALL_PROBABILITY=90
fi

NUMBERS_SMALL=(4 8 12 16)
NUMBERS_LARGE=(64 68 72 76 80 84 88 92 96 100 104 108 112 116 120 124 128)
SMALL_MAX=$(($SMALL_PROBABILITY * 32767 / 100))

for (( i = 0; i < $LENGTH; i++ )); do
	if [ $RANDOM -le $SMALL_MAX ]; then
		CEILING=$((${#NUMBERS_SMALL[@]} - 1))
		NUMBER=$(($RANDOM % $CEILING))
		printf "%s, " ${NUMBERS_SMALL[NUMBER]}
	else
		CEILING=$((${#NUMBERS_LARGE[@]} - 1))
		NUMBER=$(($RANDOM % $CEILING))
		printf "%s, " ${NUMBERS_LARGE[NUMBER]}
	fi
done
printf "\n"
