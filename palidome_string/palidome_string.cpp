#include <iostream>
#include <string>

int main() {
	std::string input{}, output{};
	std::cin >> input;

	for (size_t i{}; i < input.size(); i++) {
		output.push_back(input.at(input.size() - i - 1));
	}
	if (input == output)
		std::cout << "YES";
	else {
		std::cout << "NO";
	}
}