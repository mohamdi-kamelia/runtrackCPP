#include <iostream>

int main() {
    char c = '\x01';
    short int p = 10;

    // Expression 1
    short int x = p + 3;
    std::cout << "x = " << x << std::endl;

    // Expression 2
    char y = c + 1;
    std::cout << "y = " << static_cast<int>(y) << std::endl;

    // Expression 3
    short int z = p + c;
    std::cout << "z = " << z << std::endl;

    // Expression 4
    short int w = 3 * p + 5 * c;
    std::cout << "w = " << w << std::endl;

    return 0;
}
