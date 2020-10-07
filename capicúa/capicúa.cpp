#include <iostream>
#include <string>
#include <algorithm>

int main() {
	int n{ 1 };
	std::cin >> n;

	while (n--) {
		std::string input{ "12321" };
		std::cin >> input;

		std::string output{ input };
		std::reverse(output.begin(), output.end());

		if (input == output) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
	}
}