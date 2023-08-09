#include <iostream>
#include <cmath>


using namespace std;

class Function{
    public:
        Function();
        double f(double const&);
        double df(double const&);
        void const eval(double const&, double&, double&);
};
