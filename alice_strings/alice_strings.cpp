#include <iostream>
#include <string>
#include <vector>

int main() {

    std::string str_a{ "adlz" }; // i is mapped here
    std::string str_b{ "xyzz" };// j us mapped here
    std::cin >> str_a >> str_b;

    if (str_a.at(str_a.size() - 1) == str_b.at(str_b.size() - 1)) {
        str_a.pop_back();
        str_b.pop_back();

        unsigned prefix_letters_size{ str_a.size() };

        bool allow{ true };
        for (size_t i{}; i < prefix_letters_size - 1; i++) {
            if (str_a[i] > str_b[i]) {
                allow = false;
            }
        }
        while (0 < prefix_letters_size && allow == true) {

            if (str_a.at(prefix_letters_size - 1) < str_b.at(prefix_letters_size - 1)) {
                for (size_t j{}; j < prefix_letters_size; j++) {
                    str_a[j]++;
                }
            }
            else {
                prefix_letters_size--;
            }
        }
    }
    if (str_a == str_b) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
}
