#include <iostream>
#include <cstring> 

int main() {

    // more safe
    std::string text;
    std::string flag_input;
    bool flag = false; 

    std::cout << "Enter a text: ";
    std::cin >> text;
    std::cout << "Enter a flag  (true/false): ";
    std::cin >> flag;

    if (flag_input == "true") flag = true;
    else flag = false;

    if(text == "one" || text == "four") std::cout << "1 or  4";
    else if (text == "two" && flag) std::cout << "2 and flag  true";
    else if (text == "three") std::cout << "three";
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