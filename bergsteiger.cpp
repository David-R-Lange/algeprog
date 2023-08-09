#include <iostream>
#include <cmath>

using namespace std;

double t(double y, double s) {
    return sin(y*s) + y*y;
}

double f(double s) {
    double f_0 = t(-2, s) - 4.7568;
    double f_1 = t(0.5, s) - 1.0915;
    double f_2 = t(1, s) - 1.9093;
    return f_0*f_0 + f_1*f_1 + f_2*f_2;
}

double bergsteiger(double s0, double max_iter, double alpha0) {
}

double bergsteiger(double s0, double max_iter, double alpha0, double tol) {
}


