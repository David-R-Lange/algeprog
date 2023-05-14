#include <iostream>

unsigned int ggT(unsigned int a, unsigned int b)
{
    unsigned int teiler = 1;
    while (teiler > 0)
    {
        teiler = a % b;

        if(teiler == 0)
            return b;
        else if(teiler == 1)
            return 1;
        b = teiler;
    }
    return 1;
}

int main()
{
    unsigned int a = 13575;
    unsigned int b = 354;

    std::cout << "Der groesste Gemeinsame Teiler von: " << a << " und " << b << " ist: "
    << ggT(a, b) << std::endl;  
}