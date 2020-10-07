#include <iostream>
#include <string>

int main() {
	float z_count{};
	std::string input{};
	std::cin >> input;

	if (input.size() < 20) {
		unsigned i{};
		for (i; i < input.size(); i++) {
			if (input.at(i) == 'z')
				z_count++;
		}
		if (i / z_count == 3)
			std::cout << "Yes";
		else {
			std::cout << "No";
		}
	}
	else {
		std::cout << "No" << std::endl; 
	}
}