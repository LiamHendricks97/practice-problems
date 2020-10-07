#include <iostream>
#include <string>

int main() {
	int t{};
	std::cin >> t;
	std::string vowels{ "aeiou" };


	while (t--) {
		int count{};
		int n{};
		std::string s{};
		std::cin >> n >> s;

		for (size_t i{}; i < s.size(); i++) {
			for (size_t j{}; j < vowels.size(); j++) {
				if (s.at(i) == vowels.at(j)) {
					s.replace(i, 1, 1, 'a');
				}
			}
			//Neat trick to skip first iteration so no range errors occur
			if (i > 0) {
				if (s.at(i) == 'a' && s.at(i - 1) != 'a') {
					count++;
				}
			}
		}
		std::cout << count << std::endl;
	}
}