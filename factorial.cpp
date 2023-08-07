#include <iostream>

int factorial(unsigned int n) {
    unsigned int prod = 1;
    for (unsigned int i = n; i > 1; --i) {
        prod = prod * i;
    }
    return prod;
}

int main() {
    unsigned int input = 0;
    std::cout << "Von welcher Zahl soll die Fakultaet berechnet werden?: ";
    std::cin >> input;
    std::cout << "Die Fakultaet von " << input << " ist: " << factorial(input) << std::endl;
}
