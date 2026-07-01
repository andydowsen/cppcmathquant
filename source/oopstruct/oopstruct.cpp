#include "../../_c_cpp_langwork_.h"

struct check_logger__{
	int* _current_serial__;
	std::string* _name_main__;
	std::string* _name_child__;
};

static inline void __oopstruct_main__() {
	std::vector<check_logger__> _check_logger__;
	_check_logger__.push_back({ new int(1), new std::string("main"), new std::string("child1") });
	_check_logger__.push_back({ new int(2), new std::string("main"), new std::string("child2") });
	_check_logger__.push_back({ new int(3), new std::string("main"), new std::string("child3") });
	_check_logger__.push_back({ new int(4), new std::string("main"), new std::string("child4") });
	_check_logger__.push_back({ new int(5), new std::string("main"), new std::string("child5") });
	_check_logger__.push_back({ new int(6), new std::string("main"), new std::string("child6") });
	_check_logger__.push_back({ new int(7), new std::string("main"), new std::string("child7") });
	_check_logger__.push_back({ new int(8), new std::string("main"), new std::string("child8") });
	_check_logger__.push_back({ new int(9), new std::string("main"), new std::string("child9") });
	_check_logger__.push_back({ new int(10), new std::string("main"), new std::string("child10") });
	//printup 
	for (int i = 0; i < _check_logger__.size(); i++) {
		std::cout << _check_logger__[i]._name_main__ << " " << _check_logger__[i]._name_child__ << " " << *_check_logger__[i]._current_serial__ << std::endl;
	}
}