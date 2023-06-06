#include <iostream>
#include <cmath>

using namespace std;

unsigned int binomial_productrule(unsigned int n, unsigned int k)
{
    unsigned int prod;
    unsigned int a;
    for (unsigned int j = 1; j <= k; ++j)
    {
        a = (n+1-j);
        prod *= a/j;
    }
    return prod;
}

unsigned int binomial_factorial(unsigned int n, unsigned int k)
{
    if (k == 0 || k == n)
        return 1;

    return binomial_factorial(n-1, k-1) + binomial_factorial(n-1, k);
}

int factorial(unsigned int n)
{
    unsigned int prod = 1;
    if(n > 0)
    {
        for (unsigned int i = n; i > 1; --i)
        {
            prod = prod * i;
        }
    }
    
    return prod;
}

unsigned int binomial_no_factorial(unsigned int n, unsigned int k)
{
    unsigned int binomial = 1;
    for (unsigned int i = 0; i <= k+1; ++i)
    {
        binomial *= (n-i);
    }

    binomial = binomial/factorial(k);

    return binomial;
}

int main()
{
    unsigned int n, k;
    cout << "n ueber k = " << endl;
    cin >> n >> k;
    if (k>n)
    {
        cout << "Fehler! k darf nicht groesser als n sein. Abbruch";
        return -1;
    }
    cout << "\nMit Fakultaet: \n" << n << " ueber " << k << " = " << binomial_factorial(n,k) << endl;
    cout << "\nOhne Fakultaet: \n" << n << " ueber " << k << " = " << binomial_no_factorial(n,k) << endl;
    cout << "\nMit dem Produkt: \n" << n << " ueber " << k << " = " << binomial_productrule(n,k) << endl;

}