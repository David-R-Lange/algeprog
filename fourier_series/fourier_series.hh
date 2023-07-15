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
        Fourier(int exponent, vector<double> ak, vector<double> bk);
        ~Fourier();
        Fourier(Fourier& fr);
        double eval(double x);
        double eval(double a0, double x);
        

};
#endif // !FOURIER_SERIES_H
