#include <iostream>
#include <string>
#include <vector>

int main() {
	int n{ 1 };
	std::cin >> n;

	while (n--) {
		bool result{true};
		std::string str{ "a" };
		std::cin >> str;
		for (size_t i{ 1 }; i < str.size(); i++) {
			if (str.at(i) == str.at(i - 1) - 1 || str.at(i) == str.at(i - 1) + 1) {
				result = true;
			}
			else if (str.at(i) == str.at(i - 1) - 25 || str.at(i) == str.at(i - 1) + 25) {
				result = true;
			}
			
			else {
				result = false;
				break;
			}
		}
		if (result == true) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
		//std::cout << str.size();
	}
}