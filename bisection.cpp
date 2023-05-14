#include <iostream>
#include <cmath>
#include <functional>

using namespace std;

float bisec(function<float(float)> func, float a, float b, float max_iter, float tol)
{
    if((func(a) > 0.0 && func(b) > 0.0) ||
       (func(a) < 0.0 && func(b) < 0.0))
    {
        return -1;
    }

    float retval;

    for(float k = 1; k <= max_iter; ++k)
    {
        
        retval = (a+b)*0.5;

        if(fabs(func(retval)) < tol)
        {
            break;
        }

        if( (func(a) > 0.0 && func(retval) < 0.0) ||
            (func(a) < 0.0 && func(retval) > 0.0))
        {
            b = retval;
        }
        else if( (func(b) > 0.0 && func(retval) < 0.0) ||
                 (func(b) < 0.0 && func(retval) > 0.0))
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

    float bisecZero = bisec([](float x) -> float { return exp(sin(x)) - 0.5; },
    a,b,max_iter,tol);

    cout << bisecZero << " ist die gesuchte Nullstelle von f = exp(sin(x)) - 0.5 \n" << endl;

    bisecZero = bisec([](float x) -> float { return 1/sqrt(pow(x,2) + 1) - cos(x+1); },
    a,b,max_iter,tol);

    cout << bisecZero << " ist die gesuchte Nullstelle von f = 1/sqrt(pow(x,2) + 1) - cos(x+1) \n" << endl;

    bisecZero = bisec([](float x) -> float { return sin(cos(x+1)); },
    a,b,max_iter,tol);

    cout << bisecZero << " ist die gesuchte Nullstelle von f = sin(cos(x+1)) \n" << endl;

    bisecZero = bisec([](float x) -> float { return atan(pow(x,2) + 2*x) -0.2; },
    a,b,max_iter,tol);

    cout << bisecZero << " ist die gesuchte Nullstelle von f = atan(pow(x,2) + 2*x) -0.2 \n" << endl;

    bisecZero = bisec([](float x) -> float { return pow(x,2) + 1; },
    a,b,max_iter,tol);

    cout << bisecZero << " ist die gesuchte Nullstelle von f = pow(x,2) + 1 " << endl;

    return 0;
}