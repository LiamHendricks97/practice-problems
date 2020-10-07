#include <iostream>
#include <string>

int main()
{
	unsigned n{};
	int test{1};
	std::cin >> n;
	while (n--) {
		std::string string1{}, string2{};
		std::cin >> string1 >> string2;

		std::string longstring{}, shortstring{};
		if (string1.length() <= string2.length()) {
			longstring = string2;
			shortstring = string1;
		}
		else {
			longstring = string1;
			shortstring = string2;
		}

		for (size_t i{}; i < longstring.length(); i++) {
			for (size_t j{}; j < shortstring.length(); j++) {
				//std::cout << (shortstring.at(shortstring.length() - j - 1)) << " " << longstring.at(longstring.length() - i - 1) << " " << (shortstring.length() - j - 1) << (longstring.length() - i - 1) << " ";

				if (shortstring.at(shortstring.length() - j - 1) == longstring.at(longstring.length() - i - 1)) {
					shortstring.erase((shortstring.length() - j - 1), 1);      /*Problem line*/
					longstring.erase((longstring.length() - i - 1), 1);
					i = j = 0;
					if (test) {
						j--;
						test = 0;
						continue;
					}
				}
				//std::cout << (shortstring.at(shortstring.length() - j - 1)) << " " << longstring.at(longstring.length() - i - 1) << " " << (shortstring.length() - j - 1) << (longstring.length() - i - 1) << std::endl;
			}
		}
		
		std::cout << longstring.length() + shortstring.length() << std::endl;
		//std::cout << longstring + " " + shortstring;
	}
}

//happen   phze
//std::string string1{ "skjjdy" }, string2{ "fgff" };
/*Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character deletions required to make a and b anagrams. Any characters can be deleted from either of the strings.

Input :

    test cases,t
    two strings a and b, for each test case

Output:

Desired O/p

Constraints :

string lengths<=10000*/