#include "function.hh"

Function::Function() {
}

double Function::f(double const& x) {
    return x*x*exp(x);
}

double Function::df(double const& x) {
    return (x*x + 2*x) * exp(x);
}

void const Function::eval(double const& x, double& f, double& df) {
    cout << "Function at Point " << x << " is: " << f << "\n";
    cout << "Derivative of Function at Point " << x << " is: " << df << endl;
}
