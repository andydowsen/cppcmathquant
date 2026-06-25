#pragma once
#include <iostream>
#include <stdio.h>
#include <vector>

static inline int __factorial_calculate(int _integer) {
	if (_integer == 0 || _integer == 1) {
		return 1;
	}
	else {
		return _integer * __factorial_calculate(_integer - 1);
	}
}
static inline int permutants_calculate(int word_of_length_form, char target_string[], bool repeating_factor) {
	int permutants_form = 0;
	if (repeating_factor) {
		permutants_form = pow(strlen(target_string), word_of_length_form);
		return permutants_form;
	}
	else if (!repeating_factor) {
		for (unsigned int i = 0; i < word_of_length_form; i++) {
			printf("Permutants Form: %d\n", (int)(strlen(target_string) - i));
			permutants_form = __factorial_calculate(strlen(target_string))
				/ __factorial_calculate(strlen(target_string) - word_of_length_form);
		}
		return permutants_form;
	}
}

static inline int _trace_of_matrix__() {
	const int __matrix_trace[][4] = {
		{5, 8, 2, 9},
		{3, 1, 7, 6},
		{2, 1, 8, 2},
		{1, 4, 3, 3}
	};
	const int col_size_mark = sizeof(__matrix_trace) / sizeof(__matrix_trace[0][0]);
	const int size_printing_matrix = sizeof(__matrix_trace) / sizeof(__matrix_trace[0]);
	const int multiplier = size_printing_matrix * col_size_mark;
	int trace_matrix_value = 0;
	if ((col_size_mark * size_printing_matrix == multiplier) &&
		(col_size_mark / size_printing_matrix == size_printing_matrix)) {
		for (unsigned int i = 0; i < multiplier / col_size_mark; i++) {
			trace_matrix_value += __matrix_trace[i][i];
		} return trace_matrix_value;
	}
	else {
		return -0x1;
	}
}