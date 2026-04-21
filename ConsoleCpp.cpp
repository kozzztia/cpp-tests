#include <iostream>
#include <cstring> 

int main() {

    // more safe
    std::string text;
    char flag_input;


    std::cout << "Enter a text: ";
    std::cin >> text;
    std::cout << "Enter a flag  (y/n): ";
    std::cin >> flag_input;

    if(text == "one" || text == "four" || text == "1" || text == "4") std::cout << "1 or  4";
    else if ((text == "two" || text == "2" ) && flag_input == 'y') std::cout << "2 and flag  true";
    else if (text == "three" || text == "4") std::cout << "three";
    else std::cout << "other";


    // old variant
    // char text[10]; 

    // std::cout << "Enter a text: ";
    // std::cin >> text;

    // if(std::strcmp(text, "one") == 0)
    // {
    //     std::cout << "1";
    // }else if (std::strcmp(text, "two") == 0)
    // {
    //     std::cout << "2";
    // }
    // else if (std::strcmp(text, "three") == 0)
    // {
    //     std::cout << "three";
    // }
    // else
    // {
    //     std::cout << "other";
    // }

    return 0;
}