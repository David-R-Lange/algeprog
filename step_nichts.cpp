#include <iostream>

int main() {
    std::cout << "Hello, World!\n";
    int a,b,c;
    int d = 42;
    a = -5;
    b = a + d;
    c = 6*a-d/3;
    int e = b/7;
    int zahl =  b%7;

    std::cout << "Ergebnis von c: " << c << "\n";
    std::cout << "Ergebnis von e: " << e << "\n";
    std::cout << "Ergebnis von zahl: " << zahl << std::endl;
    return 0;
}