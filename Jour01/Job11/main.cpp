#include <iostream>

int main() {
    int n,m;

    std::cout <<"Entrez la valeur de n : ";
    std:: cin >> n;
    std::cout <<"Entrez la valeur de m : ";
    std:: cin >> m;

      // Afficher les entiers avant l'échange
    std::cout << "Avant l'echange : n = " << n << ", m = " << m << std::endl;

     int temp = n;
    n = m;
    m = temp;

    // Afficher les entiers après l'échange
    std::cout << "Après l'echange : n = " << n << ", m = " << m << std::endl;

    return 0;

}