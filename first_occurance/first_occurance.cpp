#include <iostream>
#include <string>

int main() {
    int n{ 1 };
    std::cin >> n;

    while (n--) {
        std::string input{ "ahellabchhloha" };
        std::cin >> input;
        std::string result{ "!" };
        int count{};

        for (size_t i{}; i < input.size(); i++) {
            count = 0;

            for (size_t j{}; j < result.size(); j++) {

                if (input.at(i) == result.at(j)) {
                    break;
                }
                else {
                    count++;
                    if (count == result.size()) {
                        result.push_back(input.at(i));
                        count = 0;
                    }
                }
            }
        }
        result.erase(0, 1);
        std::cout << result << std::endl;
    }
}
