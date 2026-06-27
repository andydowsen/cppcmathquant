#include "./_interim_probes__.cpp"
#include "source/general_problems_main_.cpp"
#include <stdlib.h>
#include <thread>
#include <Windows.h>
#include <chrono>

static inline void _pointer__arithmetic__() {
	int arr_phase[1000] = { 0 };
	int iterator_random_integer_push = 0;
	while (iterator_random_integer_push < 1000) {
		int random_generator__ = rand();
		arr_phase[iterator_random_integer_push] = random_generator__;
		std::cout << "ending crash value: " << iterator_random_integer_push << std::endl;
		iterator_random_integer_push++;
	}
	std::this_thread::sleep_for(std::chrono::milliseconds(2000)); // sleep the thread
	Beep(750, 323);
	const int* first_element__ = arr_phase;
	for (unsigned int i = 0; i < int(sizeof(arr_phase) / sizeof(arr_phase[0])); i++) {
		std::cout << *(first_element__ + i) << std::endl; // pointer arithemetic
	}
}

static inline void __pointer_points() {
	int a = 3;
	int* b;
	b = &a;
	int** pointer_pointer = &b;
	std::cout << "Pointer pointer: " << pointer_pointer;
	std::cout << "Address of a " << &a;
}


int main(int argc, const char* argv[]) {
	__main__general_problems__(argc, argv);
	//_pointer__arithmetic__();
	//__interim_probes__main_(argc, argv); 
	return argc;
}