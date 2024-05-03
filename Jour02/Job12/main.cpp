#include <iostream>

double calculerSommeHarmonique(int n) {
    double somme = 0.0;
    for (int i = 1; i <= n; ++i) {
        somme += 1.0 / i;
    }
    return somme;
}

int main() {
    int n;
    std::cout << "Entrez la valeur de n : ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "La valeur de n doit être un entier positif." << std::endl;
        return 1;
    }

    double somme = calculerSommeHarmonique(n);
    std::cout << "La somme des " << n << " premiers termes de la serie harmonique est : " << somme << std::endl;

    return 0;
}
