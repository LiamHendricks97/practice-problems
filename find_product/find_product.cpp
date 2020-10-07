#include <iostream>
#include <vector>

int main()
{
	unsigned long long n{};
	std::cin >> n;

	unsigned long long number{};
	unsigned long long result{1};

	while (n--) {
		std::cin >> number;
		result = (result * number) % (1'000'000'007);

	}
	std::cout << result;
}

/*You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo
Input Format:
The first line contains a single integer N denoting the size of the array. The next line contains N space separated integers denoting the elements of the array*/