#include <iostream>

using namespace std;

//Assignment 5.2

int main()
{
    int const n = 5;
    int const m = 5;
    int e_1 [n];    // Einheitsvektor e1 nach aufg. (i)
    int c_1 [n];    // Einsvektor c1 aufg. (ii)
    int v[n];       // Vektor v def. in (iii)
    int I[m*n];     // Einheitsmatrix auf. (iv)
    int M[m*n];     // Matrix M def. in (v)

    for(int i = 0; i <= n; ++i)
    {
        if(i == 0)
        {
            e_1[i] = 1;
        }
        else
        {
            e_1[i] = 0;
        }
        c_1[i] = 1;
        v[i] = n-i;
    }

    for(int i = 0; i <= m-1; ++i)
    {
        for(int k = 0; k <= n-1; ++k)
        {
            if(i == k)
            {
                I[k*m+i] = 1;
                M[k*m+i] = 1;
            }
            else
            {
                I[k*m+i] = 0;
                M[k*m+i] = k+1;
            }
        }
    }
}