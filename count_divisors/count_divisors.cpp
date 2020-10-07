#include <iostream>

int main() {
	int l{}, r{}, k{}, result{};
	std::cin >> l >> r >> k;

	for (int i{ l }; i <= r; i++) {
		if (i % k == 0)
			result++;
	}
	std::cout << result;
}