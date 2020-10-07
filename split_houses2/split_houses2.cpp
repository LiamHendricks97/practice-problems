#include <iostream>
#include <string>

int main() {
	std::string grid_layout{};
	unsigned grid_size{};
	int adjacent_house_count{};

	std::cin >> grid_size >> grid_layout;

	for (size_t i{}; i < grid_size; i++) {

		if (grid_layout.at(i) == '.') {
			grid_layout.replace(i, 1, 1, 'B');
			adjacent_house_count = 0;
		}

		else if (grid_layout.at(i) == 'H' ) {
			adjacent_house_count++;
			if (adjacent_house_count == 2) {
				std::cout << "NO";
				break;
			}
		}
	}
	if (adjacent_house_count != 2) {
		std::cout << "YES\n" << grid_layout;
	}
}