#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string str{ "ozzhellzzo" };
    std::cin >> str;

    for (size_t i{ str.size() - 1 }; i + 1 > 0; i--) {
        for (size_t j{ str.size() - 1 }; j + 1 > 0; j--) {
            if (str.at(i) == str.at(j) && i != j) {
                str.erase(i, 1);
                break;
            }
        }
    }
    std::cout << str;
}
