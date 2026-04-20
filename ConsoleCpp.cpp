#include <iostream>
#include <cstring> 

int main() {

    // more safe
    std::string text;

    std::cout << "Enter a text: ";
    std::cin >> text;

    if(text == "one") std::cout << "1";
    else if (text == "two") std::cout << "2";
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