#include <iostream>
#include <string>
// what even is this solution bruh
int main() {
    short test_cases{ 2 };
    std::cin >> test_cases;

    while (test_cases--) {

        int str_length{ 62 }, encrypt_key{ 29 };
        std::string str{"sadfbchdicbjsdnbcxhbs-DKSFCBJDCD161648-djfcbskjdxncsdjcjkbsdxc"}, result{};
        std::cin >> str_length >> encrypt_key >> str;
        int num_encrypt_key{ encrypt_key };


        while (encrypt_key > 26) {
            encrypt_key -= 26;
        }
        while (num_encrypt_key > 9) {
            num_encrypt_key -= 10;
        }
        

        for (size_t i{}; i < str_length; i++) {
            int num_image = str.at(i);
            char char_image{};

            if (isupper(str.at(i)) && isalpha(str.at(i))) {
                num_image += encrypt_key;

                if (num_image > 90) {
                    num_image -= 26;
                    char_image = num_image;
                    result += char_image;
                }
                /*else if (num_image < 65) {
                    num_image += 26;
                    char_image = num_image;
                    result += char_image;
                }*/
                else {
                    char_image = num_image;
                    result += char_image;
                }
            }
            else if (islower(str.at(i)) && isalpha(str.at(i))) {
                num_image += encrypt_key;

                if (num_image > 122) {
                    num_image -= 26;
                    char_image = num_image;
                    result += char_image;
                }
                /*else if (num_image < 97) {
                    num_image += 26;
                    char_image = num_image;
                    result += char_image;
                }*/
                else {
                    char_image = num_image;
                    result += char_image;
                }
            }
            else if (isdigit(str.at(i))) {
                num_image += num_encrypt_key;
                /*if (num_image < 48) {
                    num_image += 10;
                    result += num_image;
                }
                else*/ if (num_image > 57) {
                    num_image -= 10;
                    result += num_image;
                }
                else {
                    result += num_image;

                }
            }
            else {
                result += str.at(i);
            }
        }
        //std::cout << str << std::endl;
        std::cout << result << std::endl;
    }
}
//a == 97
//A == 65
//z == 122
//Z = 90
//look at image name
//NOTES for improvement:

/* ~~ you do not need to change to int and char etc, simply ask: str.at(i) < 97 or something -- wayyy faster
   ~~ consider using more methods like .find*/

//problem rn is that adding over 26 breaks entire system