#include <iostream>

int main() {
    // Déclaration de trois variables entières
    int a = 10;
    int b = 20;
    int c = 30;

    // Déclaration de trois pointeurs, chacun pointant vers une variable différente
    int* ptrA = &a;
    int* ptrB = &b;
    int* ptrC = &c;

    // Affichage des valeurs initiales des variables en utilisant les pointeurs
    std::cout << "Valeurs initiales :\n";
    std::cout << "a = " << *ptrA << "\nb = " << *ptrB << "\nc = " << *ptrC << std::endl;

    // Modification des valeurs des variables en utilisant les pointeurs
    *ptrA = 100;
    *ptrB = 200;
    *ptrC = 300;

    // Affichage des nouvelles valeurs des variables
    std::cout << "Valeurs modifiees :\n";
    std::cout << "a = " << *ptrA << "\nb = " << *ptrB << "\nc = " << *ptrC << std::endl;

    // Affichage directe des variables pour vérifier les modifications
    std::cout << "Valeurs des variables directement :\n";
    std::cout << "a = " << a << "\nb = " << b << "\nc = " << c << std::endl;

    return 0;
}