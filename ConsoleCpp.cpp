#include <iostream>

int main() {
    int a, b, c , result;
    char aa[] = "insert a: ", bb[] = "insert b: ", cc[] = "insert c: ";

    std::cout << aa;
    std::cin >> a;
    std::cout << bb;
    std::cin >> b;
    std::cout << cc;
    std::cin >> c;

    result = a + b + c;

    std::cout << "result" << result << std::endl;

    return 0;
}