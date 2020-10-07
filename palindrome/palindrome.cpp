#include <iostream>
#include <string>

int main() {
	int n{};
	std::cin >> n;

	while (n--) {
		std::string str{};
		std::cin >> str;
		bool is_palindrome{ true };

		for (size_t i{}; i < str.size() / 2; i++) {
			if (str.at(i) != str.at(str.size() - i - 1)) {
				is_palindrome = false;
				break;
			}
		}
		if (is_palindrome) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
	}
}