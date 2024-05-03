#include <iostream>
#include <iomanip>

int main() {
    const int size = 10;


    std::cout << std::setw(4) << "I";
    for (int i = 1; i <= size; ++i) {
        std::cout << std::setw(4) << i;
    }
    std::cout << std::endl;

    std::cout << std::setw(4) << std::setfill('-') << " ";
    for (int i = 0; i < size; ++i) {
        std::cout << std::setw(4) << std::setfill('-') << " ";
    }
    std::cout << std::setfill(' ') << std::endl;

  
    for (int i = 1; i <= size; ++i) {
        std::cout << std::setw(2) << i << " I";
        for (int j = 1; j <= size; ++j) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << std::endl;
    }

    return 0;
}
