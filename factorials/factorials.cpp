#include <iostream>

int main() {
	int factorial_input{}, result{ 1 };
	std::cin >> factorial_input;

	for (size_t i{1}; i <= factorial_input; i++) {
		result *= i;
	}
	std::cout << result;
}