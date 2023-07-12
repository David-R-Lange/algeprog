#include <iostream>
#include <cmath>
#include <functional>

using namespace std;


double midpoint(function<double(double)> func, double &a, double &b) {
  if (b > a) {
    return 0;
  }
  return (b - a) * func((a + b) / 2);
}

double trapezoid_rule(function<double(double)> func, double &a, double &b) {
    if(b > a) {
        return 0;
    }
    return (b-a) * (0.5 * func(a) + 0.5 * func(b));
}

double upper_sum(function<double(double)> func, double &a, double &b, int n) {
    if(b>a) {
        return 0;
    }
    return 0;
}

int main(int argc, char **argv) {
    return 0;
}
