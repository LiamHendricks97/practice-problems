#include <iostream>
#include <vector>

int main() {
	int test_cases{ 1 };
	//std::cin >> test_cases;

	while (test_cases--) {
		int n{ 3 }, m{ 5 };
		//std::cin >> n >> m;
		//    101 0 101
		std::vector <std::string> vec_rows{ "10101", "00001", "10001" };
		std::vector <std::string> vec_rows_check{};

		//input phase
		for (int i{}; i < n; i++) {
			std::string vec_row{};
			std::cin >> vec_row;
			vec_rows.push_back(vec_row);
		}

		std::copy(vec_rows.begin(), vec_rows.end(), vec_rows_check);

		//check phase
		bool can_erase{ true };

		for (size_t i{}; i < m; i++) {
			for (size_t j{}; j < n; j++) {
				//where we at now, trying to skip a column using substr
				//hard part is where to skip using i & j
				//maybe add another variable just for that
				//first iter can have a delayed start and last iter will be similar in that it used the same or similar varible to have its delayed end
				if (vec_rows.at(j).substr(i, 1) + vec_rows.at(j).substr(i, 1) == "ab") {

				}
			}
		}
	}

//run for loop and skip over column
//perform erase on throwaway vector
//check use of std::copy
	// cobine two substrings to skip over a number

		/*
		if (can_erase) {
					vec_rows_check.at(j).erase(i, 1);
					can_erase = false;
				}*/
