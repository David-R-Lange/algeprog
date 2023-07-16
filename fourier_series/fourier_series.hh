#ifndef FOURIER_SERIES_H
#define FOURIER_SERIES_H
#include <vector>

using namespace std;

class Fourier {
    private:
        int m_exponent;
        vector<double> m_ak;
        vector<double> m_bk;

    public:
        Fourier(int, vector<double>, vector<double>);
        ~Fourier();
        Fourier(Fourier&);
        double eval(double);
        double eval(double, double);
        static Fourier derivative(Fourier&);
};
#endif // !FOURIER_SERIES_H
