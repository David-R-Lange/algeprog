#include <iostream>

using namespace std;

int fibonacci_iter(int n)
{
    int previous = 0;
    int current = 1;
    int next = 0;

    cout << "\nn\tfib(n)\n";
    for(int i = 0; i<=n;++i)
    {
        if(i == 0 || i == 1)
        {
            next = i;
        }
        else
        {
            next = previous + current;
            previous = current;
            current = next;
        }
        cout << i << "\t" << next << endl;
    }
    return 0;
}

int fibonacci_rec(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return (fibonacci_rec(n-1) + fibonacci_rec(n-2)); 
    }
    
}

int main()
{
    int n = 21;
    
    fibonacci_iter(n);

    cout << "\n\nn\tfib(n)\n";

    for(int i = 0; i <= n; ++i)
    {
        cout << i << "\t" << fibonacci_rec(i) << endl;
    }

    return 0;
}