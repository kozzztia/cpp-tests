#include <iostream>

int main() {

    int number; 

    std::cout << "Enter a number (1 -4): ";
    std::cin >> number;

    switch (number)
    {
    case 1 :
        std::cout << "Number is: one" << std::endl;
        break;
    case 2:
        std::cout << "Number is: two" << std::endl;
        break;
    case 3 :
        std::cout << "Number is: three" << std::endl;
        break;
    default:
        std::cout << "you lose" << std::endl;
        break;
    }

    return 0;
}