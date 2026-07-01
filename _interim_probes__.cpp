

/*
* ------------------------------------------------
* ------------------------------------------------
    General problems for good hand in - c++
    proct: Portfolio 295 general problems and methods
	YT: portfolio courses; https://www.youtube.com/watch?v=AhAz6cOl_DA&list=PLA1FTfKBAEX6dPcQitk_7uL3OwDdjMn90&index=6
* ------------------------------------------------
* ------------------------------------------------
*/


#include "_c_cpp_langwork_.h"

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

class algorithmic_sets__ {
private:
	static inline int equilibrium_point(std::vector<int> target_array__) {
		int equilibrium_index_ = 0;
		int total_sum_array__ = 0, left_sum__ = 0, right_sum__ = 0;
		for (unsigned int i = 0; i < target_array__.size(); i++) {
			total_sum_array__ += target_array__[i];
		} for (unsigned int i = 0; i < target_array__.size(); i++) {
			left_sum__ += target_array__[i];
			right_sum__ = total_sum_array__ - left_sum__ - target_array__[i];
			if (right_sum__ == left_sum__) {
				equilibrium_index_ = i;
			}
		} return equilibrium_index_;
	}
	static inline void sort_bubble(std::vector<int>& target_array__) {
		int temp_value__ = 0; 
		for (unsigned int i = 0; i < target_array__.size() - 1; i++) {
			for (unsigned int j = 0; j < target_array__.size() - i -1; j++){
				if (target_array__[j] < target_array__[static_cast<std::vector<int,
					std::allocator<int>>::size_type>(j) + 1]) {
					temp_value__ = target_array__[j];
					target_array__[j] = target_array__[static_cast<std::vector<int,
						std::allocator<int>>::size_type>(j) + 1];
					target_array__[static_cast<std::vector<int, 
						std::allocator<int>>::size_type>(j) + 1] = temp_value__;
				}
			}
		}
	}
	static inline void array_reversal__(std::vector<int> &target_array__) {
		int _current_value__ = 0; 
		for (unsigned int i = 0; i < target_array__.size() /2; i++) {
			target_array__[i] = _current_value__;
			target_array__[i] = target_array__[target_array__.size() - i - 1];
			target_array__[target_array__.size()] = _current_value__;
		} for (unsigned int i = 0; i < target_array__.size(); i++){
			std::cout << target_array__[i] << std::endl;
		}
	}
};

class _general_cpp_problems__: private algorithmic_sets__ {
public: 
	static inline int occurence_count__(const std::vector<int> &target_array__, 
		int occurence_target_count__) {
		int occurence_number__ = 0;
		for (unsigned int i = 0; i < target_array__.size(); i++){
			if (target_array__[i] == occurence_target_count__) {
				occurence_number__ += (i + 1);
				return occurence_number__;
			}
		}
	}
	static inline int find_maximum_in_array__(const std::vector<int> &target_array__) {
		int maximum_element = target_array__[0]; 
		for (unsigned int i = 0; i < target_array__.size(); i++) {
			if (maximum_element <= target_array__[i]) {
				maximum_element = target_array__[i]; 
				return maximum_element;
			}
		}
	}
	static inline int find_minimum_in_array__(const std::vector<int> &target_array__) {
		int minimum_element__ = target_array__[0];
		for (unsigned int i = 0; i < target_array__.size(); i++) {
			if (minimum_element__ >= target_array__[i]) {
				minimum_element__ = target_array__[i];
			}
		} return minimum_element__;
	} 
};

static inline int __interim_probes__main_(int argc, const char* argv[]) {
	_general_cpp_problems__ general_instance__ = _general_cpp_problems__();
	std::vector<int> target_array__ = { 1, 2, 3, 4, 5 };
	const int minimum_element = general_instance__.find_minimum_in_array__(target_array__);
	std::cout << minimum_element << std::endl;

	return argc; 
}