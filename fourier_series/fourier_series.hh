#ifndef FOURIER_SERIES_H
#define FOURIER_SERIES_H
#include <vector>

using namespace std;

class Fourier {
    private:
        int M_exponent;
        vector<double> M_ak;
        vector<double> M_bk;

    public:
        Fourier(int exponent, vector<double> ak, vector<double> bk);
        ~Fourier();

};
#endif // !FOURIER_SERIES_H
