#!/bin/env python3
ARRAY_TYPE = "t_7c8c88665f5d7d690e67ae72d2de5b3729538848f0d1729c0f9e9f844488bf08"
MALLOC_CALL = "Malloc_5cdcff11cc4fe0b7702dcefd8e40a3205be2181cfbca6974337e1a1f974cd4e8"
START_SIZE = 8
END_SIZE = 32 # 32 for tp_small, 128 for tp
STEP_SIZE = 4

START_ARRAY_NUMBER = 0
START_TMPVAR_NUMBER = 3

def run():
	size = START_SIZE
	tmpvar = START_TMPVAR_NUMBER
	arr = START_ARRAY_NUMBER
	full_allocation_size = 0
	while size <= END_SIZE:
		print_tp_optimized(tmpvar, arr, size)
		# print_tp_simulated(tmpvar, arr, size)
		full_allocation_size += size
		size += STEP_SIZE
		tmpvar += 2
		arr += 1
		# print("size: {}; tmpvar: {}; arr: {}; full: {}".format(size, tmpvar, arr, full_allocation_size)) # for verification

	print("\n\nSize of the whole allocation: ({} * sizeof(int))".format(
		full_allocation_size))

def print_tp_optimized(tmpvar, arr, size):
	print("""{} tmp_{} = {{tmp_{}.ptr + {}, {}, {}}};
{} v_arr{};
v_arr{} = tmp_{};""".format(
		ARRAY_TYPE, tmpvar, (tmpvar - 2), (size - STEP_SIZE), 0, size,
		ARRAY_TYPE, arr,
		arr, tmpvar
	))

def print_tp_simulated(tmpvar, arr, size):
	print("""{} tmp_{} = ({}){{(int*){}({}, sizeof(int), &v_g_0), 0, {}}};
{} v_arr{};
v_arr{} = tmp_{};""".format(
		ARRAY_TYPE, tmpvar, ARRAY_TYPE, MALLOC_CALL, size, size,
		ARRAY_TYPE, arr,
		arr, tmpvar
	))

run()
