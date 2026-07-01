#include "./_interim_probes__.cpp"
#include "source/general_problems_main_.cpp"

static void _fibonacci_iterative__(const int fibonacci_calculate_count__) {
	int _total_fibonacci_count = 0;
	int _fibonacci_n_dash_one = 0, _fibonacci_n_dash_two = 1, _fibonacci_n = 0;
	for (unsigned int i = 0; i < fibonacci_calculate_count__; i++) {
		_fibonacci_n = _fibonacci_n_dash_one + _fibonacci_n_dash_two;
		_fibonacci_n_dash_two = _fibonacci_n_dash_one;
		_fibonacci_n_dash_one = _fibonacci_n;
		_total_fibonacci_count = _fibonacci_n;
	} 
}

static inline int _overload_additive_function__(const int first_int__, const int second__int__) {
	return first_int__ + second__int__;
} static inline int _overload_additive_function(const int first_int__, const int second__int__, const int third_int__) {
	return first_int__ + second__int__ + third_int__;
}

static int _fibonacci_recurse_count(int fibonacci_count__) {
	if (fibonacci_count__ < 2) {
		return 1; 
	} else {
		return _fibonacci_recurse_count(fibonacci_count__ - 1) + 
			_fibonacci_recurse_count(fibonacci_count__ - 2);
	}
} 

static int factorial_recursion_count__(int _integral_number__) {
	if (_integral_number__ == 0 || _integral_number__ == 1) {
		return 1; 
	} else {
		return _integral_number__ * factorial_recursion_count__(_integral_number__ - 1);
	}
}
	
int main(int argc, const char* argv[]) {
	_fibonacci_iterative__(6);
	return argc;
}