#include "function.hh"

Function::Function() {
}

void const Function::eval(double const& x, double& f, double& df) {
    f = x*x*exp(x);
    df = (x*x + 2*x) * exp(x);
}
