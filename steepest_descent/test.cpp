#include "steepest_descent.hh"

using namespace std;

int main() {
    double const x_test = -1;

    Function func;
    double f = 0;
    double df = 0;


    func.eval(x_test, f, df);

    double x0 = 0.33;

    SteepestDescent sd(func);
    int i = sd.solve(x0);
   
    double const x = sd.x();

    func.eval(x, f, df);
    cout << "x = " << x << "\n" << "i = " << i << endl;
    cout << "f(x) = " << f << "\tdf(x) = " << df << endl;
}
