#include <iostream>

int main() {
    int n;

    do {
        std::cout << "Donnez un nombre  positif : ";
        std::cin >> n;
    } while (n <= 0);

   
    std::cout << n ;

    return 0;
}
