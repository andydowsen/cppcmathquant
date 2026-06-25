#include<iostream>
#include<vector>

class problems_prof_sec__ {
private:
	static inline void merge_sort__array__(std::vector<int> target_array_,
		int _left_values, int _mid_values, int right_values) {
		int num_1 = _mid_values - _left_values + 1;
		int num_2 = right_values - _mid_values;
		std::vector<int> left_vector(num_1), right_vector(num_2);
		for (unsigned int i = 0; i < num_1; i++) {
			left_vector[i] = target_array_[static_cast<std::vector<int,
				std::allocator<int>>::size_type>(_left_values) + 1];
		} for (unsigned int i = 0; i < num_2; i++) {
			right_vector[i] = target_array_[static_cast<unsigned long long>(_mid_values) + 1
				+ static_cast<std::vector<int,
				std::allocator<int>>::size_type>(i)];
		} int i = 0, j = 0, k = _left_values;
		while (i < num_1 && j < num_2) {
			if (left_vector[i] == right_vector[j]) {
				target_array_[k] = left_vector[i];
				i++;
			}
			else {
				target_array_[k] = right_vector[j];
				j++;
			}
			k++;
		}
	}
	static inline int _linear_array_search_(std::vector<int> target_array__, int finding_value__) {
		for (unsigned int i = 0; i < target_array__.size(); i++) {
			if (finding_value__ == target_array__[i]) {
				return i;
			}
		} return -1;
	}
	static inline int equilibrium_point__(const std::vector<int>& array_target__) {
		int _sum_value__ = 0, index_value = array_target__[0];
		int left_sum__ = 0, _right_sum_ = 0;
		for (unsigned int i = 0; i < array_target__.size(); i++) {
			_sum_value__ += array_target__[i];
		}  for (unsigned int i = 0; i < array_target__.size(); i++) {
			_right_sum_ = _sum_value__ - left_sum__ - array_target__[i];
			if (left_sum__ == _right_sum_) {
				return i;
			} left_sum__ += array_target__[i];
		}
		return _sum_value__;
	}
	static void sort_bubble_(std::vector<int>& array_target_space) {
		int temp_value__ = 0;
		for (unsigned int i = 0; i < array_target_space.size() - 1; i++) {
			for (unsigned int j = 0; j < array_target_space.size() - i - 1; j++) {
				if (array_target_space[j] >
					array_target_space[static_cast<std::vector<int,
					std::allocator<int>>::size_type>(j) + 1]) {
					temp_value__ = array_target_space[j];
					array_target_space[j] = array_target_space[static_cast<std::vector<int,
						std::allocator<int>>::size_type>(j) + 1];
					array_target_space[static_cast<std::vector<int,
						std::allocator<int>>::size_type>(j) + 1] = temp_value__;
				}
			}
		}
	}
public:
	static inline void __implement_equilibrium_point__() {
		std::vector<int> target_array = { 1, 2, 0, 3 };
		std::cout << equilibrium_point__(target_array);
	}
	static inline void implement_bubble_sort__() {
		std::vector<int> sort_array__ = { 2, 5, 6, 2, 4,2, 1 };
		sort_bubble_(sort_array__);
		std::cout << "{ ";
		for (int i : sort_array__) {
			std::cout << i << ",";
		}
		std::cout << " } \n";
	}
};

static inline int __main__general_problems__(int argc, const char* argv[]) {
	problems_prof_sec__::__implement_equilibrium_point__();
	return argc;
}