#include <iostream>
#include <cmath>

using namespace std;

unsigned int bin_rec(unsigned int n, unsigned int k) {
    if (k == 0 || k == n) { return 1;}
    return bin_rec(n-1, k-1) + bin_rec(n-1, k);
}

unsigned int binomial_productrule(unsigned int n, unsigned int k) {
    unsigned int prod = 1;
    for (unsigned int j = 1; j <= k; ++j) {
        prod = prod * (n-j+1)/j;
    }
    return prod;
}

int main() {
    unsigned int n, k;
    cout << "n ueber k = " << endl;

    cout << "Mit n = 49 und k = 6: \n";

    n = 49;
    k = 6;

    cout << "\nMit Fakultaet: \n" << n << " ueber " << k << " = " << bin_rec(n,k) << endl;
    cout << "\nMit dem Produkt: \n" << n << " ueber " << k << " = " << binomial_productrule(n,k) << endl;
}
