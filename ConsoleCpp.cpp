#include <iostream>
#include <cstring> 

enum Number {
    ONE = 1,
    TWO = 2,
    THREE = 3,
    FOUr = 4 
};

int main() {

    int input;

    std::cout << "Enter a text: ";
    std::cin >> input;
    
    Number num = static_cast<Number>(input);

    switch (num){
    case ONE :
        std::cout << "Number is: one"; 
        break;

    case TWO :
        std::cout << "Number is: two";
        break;  

    case THREE:
        std::cout << "Number is: three"; 
        break;

    default:
        std::cout << "Number is: other  or  four"; 
        break;

    return 0;
    }

}