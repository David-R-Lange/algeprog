#include <iostream>

unsigned int binomial_productrule(unsigned int n, unsigned int k)
{
    unsigned int prod = 1;
    for (unsigned int j = 1; j < k+1; ++j)
    {
        prod *= ((n+1-j)/j);
    }
    return prod;
}

unsigned int factorial(unsigned int n)
{
    unsigned int prod = 1;
    if(n > 0)
    {
        for (unsigned int i = n; i > 1; --i)
        {
            prod *= i;
        }
    }
    
    return prod;
}

unsigned int binomial_factorial(unsigned int n, unsigned int k)
{
    if (k == 0 || k == n)
        return 1;

    return binomial_factorial(n-1, k-1) + binomial_factorial(n-1, k);
}

unsigned int binomial_no_factorial(unsigned int n, unsigned int k)
{
    unsigned int binomial = 1;
    for (unsigned int i = 0; i < k+2; ++i)
    {
        binomial *= (n-i);
    }

    binomial = binomial/factorial(k);

    return binomial;
}

int main()
{
    unsigned int n, k;
    std::cout << "n ueber k = " << std::endl;
    std::cin >> n >> k;
    if (k>n)
    {
        std::cout << "Fehler! k darf nicht groesser als n sein. Abbruch";
        return -1;
    }
    std::cout << "\nMit Fakultaet: \n" << n << " ueber " << k << " = " << binomial_factorial(n,k) << std::endl;
    std::cout << "\nOhne Fakultaet: \n" << n << " ueber " << k << " = " << binomial_no_factorial(n,k) <<std::endl;
    std::cout << "\nMit dem Produkt: \n" << n << " ueber " << k << " = " << binomial_productrule(n,k) <<std::endl;

}