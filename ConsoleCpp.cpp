#include <iostream>
#include <cstdlib>   // для rand() и srand()
#include <ctime>     // для time()

int main() {

    std::srand(std::time(nullptr));
    int random_number = 1 + std::rand() % 10;
    int count = 0;
    int number;
    

    while (true)
    {
        std::cout << "Enter a number (1 -10): ";
        std::cin >> number;
        if (number == random_number) {
            std::cout << "You win! Number is: " << number << " you have " << count << " try" << std::endl;
            break; 
        } else if (number > random_number) {
            std::cout << "Less than " << number << std::endl;
            count += 1;
        } else {
            std::cout << "More than " << number << std::endl;
            count += 1;
        }
    }
    
    


    return 0;
}