#include <iostream>

// Déclaration de la structure Point
struct Point {
    int x;
    int y;
};

int main() {
    // Déclaration d'une instance de la structure Point
    Point p;

    // Déclaration d'un pointeur vers la structure Point
    Point* ptr = &p;

    // Accès et modification des membres de la structure via le pointeur
    ptr->x = 5; // Accès à la variable x via le pointeur et modification de sa valeur
    ptr->y = 10; // Accès à la variable y via le pointeur et modification de sa valeur

    // Affichage des valeurs des membres de la structure après modification
    std::cout << "Valeur de x apres modification : " << ptr->x << std::endl;
    std::cout << "Valeur de y apres modification : " << ptr->y << std::endl;

    return 0;
}