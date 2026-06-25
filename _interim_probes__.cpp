#include "_c_cpp_langwork_.h"

static inline void __minimum_element_in_array() {
	int __target_array_[] = { 5, 2, 9, 1, 5, 6 };
	int* min_element_ptr = __target_array_;
	int size_of_arary__ = sizeof(__target_array_) / sizeof(__target_array_[0]);
	for (unsigned int i = 0; i < size_of_arary__; i++) {
		if (*(__target_array_ + i) < *min_element_ptr) {
			*min_element_ptr = *(__target_array_ + i);
		}
		else { continue; }
	} printf("Min Element: %d\n", *min_element_ptr);
}

static inline void __maximum_element_in_array(int __target_array_[]) {
	int* max_element__ptr__ = __target_array_;
	int size_of__array_ = sizeof(__target_array_) / sizeof(__target_array_[0]);
	for (unsigned int i = 0; i < size_of__array_; i++) {
		if (*(__target_array_ + i) > *max_element__ptr__) {
			*max_element__ptr__ = *(__target_array_ + i);
		}
		else { continue; }
	} printf("Max Element: %d\n", *max_element__ptr__);
}

static inline void __count_occurence_linear_search(int _numeric_search, int sample_array__[]) {
	int occurence_count__ = 0;
	const int size_of_array__ = sizeof(sample_array__) / sizeof(sample_array__[0]);
	for (unsigned int i = 0; i < size_of_array__; i++) {
		if (*(sample_array__ + i) == _numeric_search) {
			occurence_count__++;
		}
		else if (occurence_count__ == 0) { occurence_count__ = -0x1; };
	} printf("Occurence Count: %d\n", occurence_count__);
}

static inline void __array_reversal_() {
	int _loop_run_array_value__ = 0;
	int _reversal_array[] = { 1, 2, 3, 4, 5 };
	int size_of_array__ = sizeof(_reversal_array) / sizeof(_reversal_array[0]);
	for (size_t i = 0; i < size_of_array__ / 2; i++) {
		_loop_run_array_value__ = *(_reversal_array + i);
		_reversal_array[i] = _reversal_array[size_of_array__ - i - 1];
		_reversal_array[size_of_array__ - i - 1] = _loop_run_array_value__;
	} for (unsigned int i = 0; i < size_of_array__; i++) {
		printf_s("%d ", _reversal_array[i]);
	}
}

static inline bool __palindrome_check(char _target__string[], int _string_length__) {
	for (unsigned int i = 0; i < _string_length__ / 2; i++) {
		if (*(_target__string + i) != *(_target__string + (_string_length__ - i - 1))) {
			return false;
		} return true;
	}
}

static inline void _sum_of_array() {
	int __sum_result__ = 0;
	int average_computation = 0;
	const int target_array__[] = { 1, 2, 3, 4, 5 };
	const int length = sizeof(target_array__) / sizeof(target_array__[0]);
	for (unsigned int i = 0; i < length; i++) {
		__sum_result__ += target_array__[i];
	} printf("Sum of Array: %d\n", __sum_result__);
	average_computation = __sum_result__ / length;
	printf("Average of Array: %d\n", average_computation);
}

static inline int __recurse_fibonacci(int _n_fibonacci) {
	if (_n_fibonacci == 1 || _n_fibonacci == 2) {
		return 1;
	}
	else {
		return __recurse_fibonacci(_n_fibonacci - 1) + __recurse_fibonacci(_n_fibonacci - 2);
	}
} // O(2powN) - Time complexity

static inline void _fibonacci_sequencing(int fibonacci_sequence_print) {
	int fib_n_1 = 1, fib_n_2 = 1, fib_n_next = 0; int fibonacci_find = fibonacci_sequence_print;
	for (unsigned int i = 0; i < fibonacci_find; i++) {
		fib_n_1 = fib_n_2;
		fib_n_2 = fib_n_next;
		fib_n_next = fib_n_1 + fib_n_2;
		printf("\tF[%d]:%d \n", i, fib_n_next);
	}
}

static inline void _vowel_counting_string(char __target_string__[], int size_of_string__strlen__) {
	const int _vowel_count__ = 0;
	const char _vowel__point[] = "aeiouAEIOU";
	for (size_t i = 0; i < size_of_string__strlen__; i++) {
		switch (size_of_string__strlen__)
		{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		default:
			break;
		}
	}
}

static inline void _memory_break(int _explicit_element__) {
	int array_length__ = 5;
	int* _array_base = (int*)malloc(sizeof(int) * array_length__);
	for (unsigned int i = 0; i < 5; i++) {
		*(_array_base + i) = i + 1;
		if (*(_array_base + i) == _explicit_element__) {
			free(_array_base);
			array_length__ = 4;
			break;
		}
	}
}

static int* copy_array__(int target_array[], int _length_array_) {
	int* allocate = (int*)malloc(_length_array_ * sizeof(int));
	for (unsigned int i = 0; i < _length_array_; i++) {
		*(allocate + i) = *(target_array + i);
	}  return allocate;
	free(allocate);
}

static int print_face_work() {
	int target_array__[] = { 2, 2, 4, 1, 9 };
	int size_of_array__ = sizeof(target_array__) / sizeof(target_array__[0]);
	int* copy_array_ = copy_array__(target_array__, size_of_array__);
	target_array__[3] = 2342; // test case if copy is failed or not? 
	for (unsigned int i = 0; i < size_of_array__; i++) {
		printf("copy{%d} = %d\n", i, copy_array_[i]);
	}
	return 0;
}