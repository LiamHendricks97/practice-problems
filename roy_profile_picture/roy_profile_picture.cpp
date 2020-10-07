#include <iostream>

int main() {
	int minimum_dimension{}, photos_amount{}, width{}, height{};
	std::cin >> minimum_dimension >> photos_amount;

	for (size_t i{}; i < photos_amount; i++) {
		std::cin >> width >> height;
		if (width < minimum_dimension || height < minimum_dimension) {
			std::cout << "UPLOAD ANOTHER" << std::endl;
		}
		else if (width != height) {
			std::cout << "CROP IT" << std::endl;
		}
		else {
			std::cout << "ACCEPTED" << std::endl;
		}
	}
}