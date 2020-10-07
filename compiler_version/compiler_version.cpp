#include <iostream>
#include <string>

int main() {
    std::string line_of_code{};
    bool loop_on{ true };

    while (loop_on) {
        getline(std::cin, line_of_code);
        if (!line_of_code.empty()) {
            for (size_t i{}; i < line_of_code.size() - 1; i++) {
                if (line_of_code == "return 0;" || line_of_code == " ") {
                    loop_on = false;
                    break;
                }
                if (line_of_code.at(i) == '/' && line_of_code.at(i + 1) == '/') {
                    break;
                }
                else if (line_of_code.at(i) == '-' && line_of_code.at(i + 1) == '>') {
                    line_of_code.replace(i, 2, 1, '.');
                }

            }
            std::cout << line_of_code << std::endl;
        }
        else {
            break;
        }
    }
}


//return 0 can end loop