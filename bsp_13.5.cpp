#include <iostream>
#include <math.h>

int main()
{
    unsigned int n;
    std::cout << "Eingabe von n: ";
    std::cin >> n;
    std::cout << "Tabelle mit k, k^2, 2^k fuer k <= " << n << ".\n";
    for (unsigned int k = 0; k <= n; ++k)
    {
        unsigned int power = std::pow(2, k);
        std::cout << k << ' ' << k*k << ' ' <<  power << '\n';
    }
}