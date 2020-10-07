#include <iostream>
#include <string>

int main() {
	int n{3};
	std::cin >> n;

	while (n--) {
		std::string str{};
		std::cin >> str;
		int count{};

		for (size_t i{}; i < str.size(); i++) {
			if (str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u') {
				count++;
			}
		}
		std::cout << count << std::endl;
	}
}