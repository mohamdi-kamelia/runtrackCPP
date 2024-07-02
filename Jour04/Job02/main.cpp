#include <iostream>

void swap(int* ptrA, int* ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    int a = 5;  // Première variable entière
    int b = 10; // Deuxième variable entière

    // Affichage des valeurs avant l'interversion
    std::cout << "Avant l'interversion :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    // Appel de la fonction d'interversion
    swap(&a, &b);

    // Affichage des valeurs après l'interversion
    std::cout << "Après l'interversion :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}