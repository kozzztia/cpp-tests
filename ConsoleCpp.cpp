#include <iostream>

int main() {

    char text; 

    std::cout << "Enter a text: ";
    std::cin >> text;

    switch (text)
    {
    case '1' :
        std::cout << "Number is: one" << std::endl;
        break;
    case '2':
        std::cout << "Number is: two" << std::endl;
        break;
    case '3' :
        std::cout << "Number is: three" << std::endl;
        break;
    default:
        std::cout << "you lose" << std::endl;
        break;
    }

    return 0;
}