#include <iostream>

int main() {

    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num > 5){
        std::cout << "Greater than 5" << std::endl;
    }else{
        std::cout << "Less than or equal to 5" << std::endl;
    }

    return 0;
}