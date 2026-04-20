#include <iostream>
// #include <iomanip>

int main() {
    // date  type

    int number = 100000; // integer -2billion / +2billion 4bits
    unsigned int unsigned_number = 200000; // unsigned integer 0 / +4billion 4bits
    short short_number = 2; // short integer  -32k /+32k 2bits
    long long_number = 1000000000; // long integer -9 quintillion / +9 quintillion 4bits windows 8 linux
    long long long_long_number = 1000000000000; // long long integer -9 quintillion / +9 quintillion 8bits
    float float_number = 3.1415926f; // floating point number 4bits f as good practice 7 digits precision
    double double_number = 3.141592653589793; // double precision floating point number 8bits 15 digits precision


    // std::cout << std::setprecision(10); // установить точность вывода
    std::cout << "float: " << float_number << std::endl;
    std::cout << "double: " << double_number << std::endl;

    return 0;
}