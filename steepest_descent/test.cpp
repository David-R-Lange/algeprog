#include "steepest_descent.hh"

using namespace std;

int main() {
    double const x = -1;

    Function func;
    double f = 0;
    double df = 0;


    func.eval(x, f, df);

    double x0 = 0.33;

    SteepestDescent sd(func);
    int i = sd.solve(x0);
    cout << "x = " << sd.x() << "\n" << "i = " << i << endl;
}
