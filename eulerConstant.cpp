#include <iostream>
#include <cmath>

float euler_asc(float n) {
    float fac = 1.0;
    float e = 1.0;
    for (float k = 1.0; k <= n; ++k) {
        fac *= k;
        e += 1.0 / fac;
    }
    return e;
}

float euler_desc(float n) {
    float fac = 1.0;
    float e = 1.0;
    for (float k = n-1; k > 0.0; --k) {
        fac *= (n-k);
        e += 1.0 / fac;
    }
    return e;
}

double euler_asc_double(double n) {
    double fac = 1.0;
    double e = 1.0;
    for (double k = 1.0; k <= n; ++k) {
        fac *= k;
        e += 1.0 / fac;
    }
    return e;
}

double euler_desc_double(double n) {
    double fac = 1.0;
    double e = 1.0;
    for (double k = n-1; k > 0.0; --k) {
        fac *= (n-k);
        e += 1.0 / fac;
    }
    return e;
}

double euler_asc_tol(double n, double tol) {
    double fac = 1.0;
    double e = 1.0;
    double e_old;
    for(double k = 1; k <= n; ++k) {
        e_old = e;
        fac *= k;
        e += 1.0/fac;

        if((e - e_old) < tol) {
            std::cout << "\nAbbruch bei k = " << k << std::endl;
            return e_old;
        }
    }

    return e;
}

int main() {
    std::cout << "\nApprox. e (asc) mit n = (5, 10, 20): (\n"
              << euler_asc(5.0f) << ", " << euler_asc(10.0f) << ", " << euler_asc(20.0f) << ")" << std::endl;

    std::cout << "\nApprox. e (desc) mit n = (5, 10, 20): \n("
              << euler_desc(5.0f) << ", " << euler_desc(10.0f) << ", " << euler_desc(20.0f) << ")" << std::endl;

    std::cout << "\nApprox. e (asc) mit double n = (5, 10, 20): \n("
              << euler_asc_double(5.00) << ", " << euler_asc_double(10.00) << ", " << euler_asc_double(20.00) << ")" << std::endl;

    std::cout << "\nApprox. e (desc) mit double n = (5, 10, 20): \n("
              << euler_desc_double(5.00) << ", " << euler_desc_double(10.00) << ", " << euler_desc_double(20.00) << ")" << std::endl;

    std::cout << "\ne aus std::cmath: \n"
              << std::exp(1.0) << std::endl;

    std::cout << "\nApprox. e (asc) mit double n = 500.0 and tol = 1e-6: "
              << euler_asc_tol(500.0, 1e-6) << std::endl;
}
