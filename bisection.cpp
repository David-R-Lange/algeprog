#include <iostream>
#include <cmath>

float f(float x)
{
    return exp(sin(x)) - 0.5;
    // return 1/sqrt(pow(x,2) + 1) - cos(x+1);
    // return sin(cos(x+1));
    // return atan(pow(x,2) + 2*x) -0.2;
    // return pow(x,2) + 1;
}

float bisec(float a, float b, float max_iter, float tol)
{
    if((f(a) > 0.0 && f(b) > 0.0) ||
       (f(a) < 0.0 && f(b) < 0.0))
    {
        return -1;
    }

    float retval;

    std::cout << "a\t" << "b\t" << "retval\t" << "f(retval)\n";

    for(float k = 1; k <= max_iter; ++k)
    {
        std::cout << "\n" << a << "\t" << b;
        
        retval = (a+b)*0.5;

        std::cout << "\t" << retval << "\t" << f(retval) << std::endl;

        if(fabs(f(retval)) < tol)
        {
            break;
        }

        if( (f(a) > 0.0 && f(retval) < 0.0) ||
            (f(a) < 0.0 && f(retval) > 0.0))
        {
            b = retval;
        }
        else if( (f(b) > 0.0 && f(retval) < 0.0) ||
                 (f(b) < 0.0 && f(retval) > 0.0))
        {
            a = retval;
        }
    }

    return retval;
}

int main()
{
    float a = -1.0;
    float b = 1.0;
    float max_iter = 50;
    float tol = 1e-7;

    float bisecZero = bisec(a,b,max_iter,tol);

    std::cout << bisecZero << " ist die gesuchte Nullstelle" << std::endl;
    return 0;
}