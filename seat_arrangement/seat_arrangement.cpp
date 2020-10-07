#include <iostream>
#include <string>

int main() {
	unsigned opposite_seat{}, n{};
	std::cin >> n;

	while (n--) {
		unsigned input{}, counter{};
		std::cin >> input;
		unsigned input_copy{input};

		while (input > 12) {
			input -= 12;
			counter++;
		}

		opposite_seat = (13 - input) + 12 * counter;

		std::string seat_position{};
		if (input == 1 || input == 12 || input == 7 || input == 6) {
			seat_position = "WS";
		}
		else if (input == 2 || input == 11 || input == 5 || input == 8) {
			seat_position = "MS";
		}
		else
			seat_position = "AS";

		std::cout << opposite_seat  << " " << seat_position << std::endl << std::endl;
	}
}
//Note the use of n-- as oppsed to  --n
//do i need to use string directive