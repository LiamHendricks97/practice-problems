#include <iostream>
#include <string>
#include <vector>
int main() {
	std::string grid_layout{};
	unsigned grid_size{};

	std::cin >> grid_size >> grid_layout;

	std::vector <int> end_index_fence_count_tuple{};
	int big_fence_end_index{};
	int fences_count{};
	int adjacent_house_count{};
	int check_no_house_count{};
	std::string largest_fence{};

	grid_size += 2;
	grid_layout = 'O' + grid_layout + 'O';

	for (size_t i{}; i < grid_size; i++) {

		if (grid_layout.at(i) == '.') {
			grid_layout.replace(i, 1, 1,'B');
			fences_count++;
			adjacent_house_count = 0;
		}
		else if (grid_layout.at(i) == 'O') {
			end_index_fence_count_tuple.push_back(i);
			end_index_fence_count_tuple.push_back(fences_count);
		}
		else if (grid_layout.at(i) == 'H') {
			check_no_house_count++;
			adjacent_house_count++;
			end_index_fence_count_tuple.push_back(i); /*multi by 1000 for own tests*/
			end_index_fence_count_tuple.push_back(fences_count);
			fences_count = 0;

			if (adjacent_house_count == 2) {
				std::cout << "NO" <<std::endl;
				break;
			}
		}		
	}
	int most_fences{};
	if (check_no_house_count != 0 ) {
		if (adjacent_house_count != 2) {
			for (size_t i{ 1 }; i < end_index_fence_count_tuple.size(); i += 2) {
				if (most_fences <= end_index_fence_count_tuple.at(i)) {
					most_fences = end_index_fence_count_tuple.at(i);
				}
			}
			for (size_t i{ 1 }; i < end_index_fence_count_tuple.size(); i += 2) {
				if (most_fences == end_index_fence_count_tuple.at(i)) {
					big_fence_end_index = end_index_fence_count_tuple.at(i - 1);
					//std::cout << end_index_fence_count_tuple.at(i - 1);
				}
			}
			//std::cout << "YES" << " " << big_fence_end_index << " " << most_fences << std::endl;

			//get rid of O's
			largest_fence = grid_layout.substr(big_fence_end_index - most_fences - 1, most_fences + 2);

			for (size_t i{}; i < largest_fence.size(); i++) {
				if (largest_fence.at(i) == 'O')
					largest_fence.erase(i, 1);
			}
			std::cout << "YES\n" << largest_fence << std::endl;
		}
	}
	else { std::cout << "NO" << std::endl; }




	//Debug help
	/*std::cout << grid_layout << std::endl;
	for (size_t i{}; i < end_index_fence_count_tuple.size(); i++) {
		std::cout << end_index_fence_count_tuple.at(i) << std::endl;
	}*/



}
