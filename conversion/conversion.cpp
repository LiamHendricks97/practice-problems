#include <iostream>
#include <string>
#include <vector>

int main() {
    int n{1};
    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::string input{"AMbuj verma"};
        std::string result{};
        int char_num{};

        getline(std::cin, input);
        for (size_t i{}; i < input.size(); i++) {
            if (isupper(input.at(i))) {
                input.at(i) = tolower(input.at(i));
            }
            if (input.at(i) == ' ') {
                input.replace(i, 1, 1, '$');
                result += input.at(i);
            }
            if (isalpha(input.at(i))) {
                char_num = input.at(i);
                char_num -= 96;
                result += std::to_string(char_num);

            }
        }
        std::cout << result << std::endl;
    }
}
//97 == a
//122 == z