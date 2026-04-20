#include <iostream>
// #include <iomanip>

int main() {
    // date  type

    int number = 100000; // integer -2billion / +2billion 4bytes
    unsigned int unsigned_number = 200000; // unsigned integer 0 / +4billion 4bytes
    short short_number = 2; // short integer  -32k /+32k 2bytes
    long long_number = 1000000000; // long integer -9 quintillion / +9 quintillion 4bytes windows 8 linux
    long long long_long_number = 1000000000000; // long long integer -9 quintillion / +9 quintillion 8bytes
    float float_number = 3.1415926f; // floating point number 4bytes f as good practice 7 digits precision
    double double_number = 3.141592653589793; // double precision floating point number 8bytes 15 digits precision


    // std::cout << std::setprecision(10); // установить точность вывода
    // std::cout << "float: " << float_number << std::endl;
    // std::cout << "double: " << double_number << std::endl;

    char sym = 'A'; // character type 1 byte
    char str[] = "Hello, World!"; // string - array of characters + null terminator \0 14 * 1 bytes ()
    int numbers[] = {1, 2, 3, 4, 5}; // array of integers 5 * 4 bytes (20 bytes)
   
    bool is_true = true; // boolean type 1 byte (true/false)

    for (size_t i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        std::cout << numbers[i] << " ";
    }
    

    return 0;
}