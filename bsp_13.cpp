#include <iostream>

int main()
{
    unsigned int n;
    std::cout << "Eingabe von n: ";
    std::cin >> n;
    std::cout << "Tabelle mit k, k^2, k^3 fuer k <= " << n << ".\n";
    for (unsigned int k = 0; k <= n; ++k)
    {
        unsigned int k2 = k*k;
        unsigned int k3 = k2*k;
        std::cout << k << ' ' << k2 << ' ' <<  k3 << '\n';
    }
}