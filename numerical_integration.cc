#include <iostream>
#include <cmath>
#include <functional>

using namespace std;
typedef double (*ftptr) (double);

double f(double x) {
    return exp(x);
}

double midpoint(ftptr f, double &a, double &b) {
  return f(0.5*(a+b));
}

double trapezoid_rule(ftptr f, double &a, double &b) {
    return 0.5*f(a)+0.5*f(b);
}

double upper_sum_midpoint(ftptr f, double &a, double &b, double n) {
    double result = 0;
    double h = (b-a)/n;
    double x1, x2;
    for(int i = 0; i < n; ++i) {
        x1 = a+i*h;
        x2 = a+(i+1)*h;
        result += (x2-x1)*midpoint(f, x1,x2);
    }
    return result;
}

double upper_sum_trapezoid(ftptr f, double &a, double &b, double n) {
    double result = 0;
    double h = (b-a)/n;
    double x1, x2;
    for(int i = 0; i < n; ++i) {
        x1 = a+i*h;
        x2 = a+(i+1)*h;
        result += (x2-x1)*trapezoid_rule(f, x1,x2);
    }
    return result;
}

int main(int argc, char **argv) {
    double begin = 0;
    double end = 10;
    double number_of_intervalls = 100;
    double I_mid = upper_sum_midpoint(f, begin, end, number_of_intervalls);
    cout << "Numberical Integration of the function e^x from " << begin << " to " << end << " is = " << I_mid << endl;

    double I_trap = upper_sum_trapezoid(f, begin, end, number_of_intervalls);
    cout << "Numberical Integration of the function e^x from " << begin << " to " << end << " is = " << I_trap << endl;
    return 0;
}
