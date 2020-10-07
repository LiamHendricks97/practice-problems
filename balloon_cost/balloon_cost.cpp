#include <iostream>
#include <vector>

int main() {
	unsigned test_cases{};
	unsigned green_balloon_cost{}, purple_balloon_cost{}, participants{};
	int status_user_1{}, status_user_2{};
	std::vector <unsigned> vec_status_user_1, vec_status_user_2;

	int high_balloon_cost{};
	int low_balloon_cost{};

	int count_status_user1{};
	int count_status_user2{};

	//int cost_green{};
	//int cost_purple{};


	std::cin >> test_cases;

	for (size_t i{}; i < test_cases; i++) {
		vec_status_user_1.clear();
		vec_status_user_2.clear();
		std::cin >> green_balloon_cost >> purple_balloon_cost >> participants;
		if (green_balloon_cost >= purple_balloon_cost) {
			high_balloon_cost = green_balloon_cost;
			low_balloon_cost = purple_balloon_cost;
		}
		else {
			high_balloon_cost = purple_balloon_cost;
			low_balloon_cost = green_balloon_cost;
		}



		for (size_t i{}; i < participants; i++) {
			std::cin >> status_user_1 >> status_user_2;
			vec_status_user_1.push_back(status_user_1);
			vec_status_user_2.push_back(status_user_2);
		}

		for (size_t i{}; i < vec_status_user_1.size(); i++) {
			count_status_user1 += vec_status_user_1.at(i);
			count_status_user2 += vec_status_user_2.at(i);
		}

		if (count_status_user1 >= count_status_user2) {
			low_balloon_cost *= count_status_user1;
			high_balloon_cost *= count_status_user2;
		}
		else {
			low_balloon_cost *= count_status_user2;
			high_balloon_cost *= count_status_user1;
		}

		std::cout << low_balloon_cost + high_balloon_cost << std::endl;

		count_status_user1 = 0;
		count_status_user2 = 0;
		low_balloon_cost = 0;
		high_balloon_cost = 0;
	}
}

