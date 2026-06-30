#include "./_interim_probes__.cpp"
#include "source/general_problems_main_.cpp"
#include <stdlib.h>
#include <thread>
#include <SFML/Audio.hpp>
#include <Windows.h>
#include <chrono>
#include <iostream>
#include <string>

const std::string path_name_ = "C:/Users/andyd/source/repos/cppcmathquant/airbus-stall.wav";
static void _sound_push_() {
	sf::SoundBuffer _sound_buffer__;
	sf::Sound _sound_instance__(_sound_buffer__);
	if (!_sound_buffer__.loadFromFile(path_name_)) { 
		std::abort;
	}  _sound_instance__.play();	
	_sound_instance__.setLooping(true);
	while (_sound_instance__.getStatus() == sf::Sound::Status::Playing) {
		std::this_thread::yield();
	}
}

typedef struct _ecam_plan__ {
	int vertical_speed__lift__;
	int _altitude;
};

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


	//_pointer__arithmetic__();
	//__main__general_problems__(argc, argv);
	//__interim_probes__main_(argc, argv); 
int main(int argc, const char* argv[]) {
	_ecam_plan__ plan_set__{};
	int flight_time_duration__ = 6;
	for (unsigned int i = 0; i < flight_time_duration__; i++) {
		plan_set__.vertical_speed__lift__ += exp(i);
		if (plan_set__.vertical_speed__lift__ <= 300) { _sound_push_(); };
		std::this_thread::sleep_for(std::chrono::seconds(2));
		std::cout << "Vertical speed : " << plan_set__.vertical_speed__lift__ << std::endl;
	}
	return argc;
}