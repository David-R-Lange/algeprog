#include <iostream>
#include <math.h>

int main() 
{
    int a,b;
    std::cout << "Eingabe fuer a^b \n";
    std::cin >> a >> b;
    if (b < 0) 
    {
        std::cout << "Fehler. b < 0 \n";
        return 1;
    }
    else if (b == 0)
        std::cout << "a^b = 1 \n";
    else
        std::cout << "a^b = " << std::pow(a, b) << std::endl;
}