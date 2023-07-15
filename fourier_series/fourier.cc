#include <iostream>
#include "fourier_series.hh"

int main(int argc, char **argv) {
    int n = 3;

    vector<double> a = {1,2,3,4};
    vector<double> b = {2,3,4};

    double x = 2;

    Fourier f1(n, a,b);
    double s_x = f1.eval(x);

    cout << "Fourier series at x = " << x << " is: " << s_x << endl;

    Fourier f2(f1);

    double a0 = 3;

    s_x = f2.eval(a0, x);

    cout << "Fourier series at x = " << x << " with a0 = " << a0 <<  " is: " << s_x << endl;
}
