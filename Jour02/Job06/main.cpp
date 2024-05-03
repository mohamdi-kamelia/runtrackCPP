#include <iostream>

int main() {
    int n;

    std::cout << "Entrez un entier n : ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << i << " est un multiple de 3 et de 5." << std::endl;
        } else if (i % 3 == 0) {
            std::cout << i << " est un multiple de 3." << std::endl;
        } else if (i % 5 == 0) {
            std::cout << i << " est un multiple de 5." << std::endl;
        } else {
            std::cout << i << " n'est ni un multiple de 3 ni de 5." << std::endl;
        }
    }

    return 0;
}
