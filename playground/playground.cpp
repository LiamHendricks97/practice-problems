#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main() {
	std::string str{ "Hello Liam Hendricks" };
	std::string result{ str.substr(0, 5) + str.substr(11, str.size()-1) };

	std::cout << str << std::endl;
	std::cout << result << std::endl;
	std::cout << str.back() << std::endl;

}