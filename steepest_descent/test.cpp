#include "steepest_descent.hh"

using namespace std;

int main() {
    double const x = -1;

    Function func;
    double f = func.f(x);
    double df = func.df(x);

    func.eval(x, f, df);

    double x0 = 0.33;

    SteepestDescent sd(func);
    int i = sd.solve(x0,10e-3, 1e5);
    cout << "x = " << sd.x() << "\n" << "i = " << i << endl;
}
