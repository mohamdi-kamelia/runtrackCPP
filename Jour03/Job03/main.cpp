#include <iostream>
#include <string>

int comparerChaines(const std::string& chaine1, const std::string& chaine2) {
    if (chaine1 == chaine2) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    std::string chaine1 = "1";
    std::string chaine2 = "2";

    int resultat = comparerChaines(chaine1, chaine2);

    if (resultat == 0) {
        std::cout << "Les chaines sont egales." << std::endl;
    } else {
        std::cout << "Les chaines sont differentes." << std::endl;
    }

    return 0;
}
