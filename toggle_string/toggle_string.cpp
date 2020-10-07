#include <iostream>
#include <string>

int main() {
	std::string toggle_case{};
	std::cin >> toggle_case;
	for (size_t i{}; i < toggle_case.size(); i++) {
		if (isupper(toggle_case.at(i)))
			toggle_case.at(i) = tolower(toggle_case.at(i));
		else 
			toggle_case.at(i) = toupper(toggle_case.at(i));

	}
	std::cout << toggle_case;
}