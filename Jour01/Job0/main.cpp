#include <iostream>
#include <string>

// Fonction pour éliminer les parenthèses superflues
std::string eliminerParenthesesSuperflues(std::string expression) {
    std::string result;

    for (char c : expression) {
        if (c != '(' && c != ')') {
            result += c;
        }
    }

    return result;
}

int main() {
    // Expressions initiales
    std::string expressions[] = {
        "a =(x+5)",
        "a = (x=y) +2",
        "a=(x==y)",
        "(a<b) && (c<d)",
        "(i++) * (n+p)"
    };

    // Affichage des expressions après élimination des parenthèses superflues
    std::cout << "Expressions après élimination des parenthèses superflues :\n";
    for (const auto& expression : expressions) {
        std::cout << eliminerParenthesesSuperflues(expression) << std::endl;
    }

    return 0;
}
