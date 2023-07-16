#include <cmath>
#include <vector>
#include "fourier_series.hh"

using namespace std;

Fourier::Fourier(int exponent, vector<double> ak, vector<double> bk) {
    m_exponent = exponent;
    m_ak = ak;
    m_bk = bk;
}

Fourier::~Fourier() {
}

Fourier::Fourier(Fourier& fr) {
    m_exponent = fr.m_exponent;
    m_ak = fr.m_ak;
    m_bk = fr.m_bk;
}

double Fourier::eval(double x) {
    double f = 0.5 * this->m_ak.at(0);
    for(int i = 1; i < this->m_exponent+1; ++i) {
       f += this->m_ak.at(i) * cos( 2*M_PI*i*x) + this->m_bk.at(i-1) * sin( 2*M_PI*i*x );
    }
    return f;
}

double Fourier::eval(double a0, double x) {
    double f = 0.5 * a0;
    for(int i = 1; i < this->m_exponent+1; ++i) {
        f += (this->m_ak.at(i) * cos( 2*M_PI*i*x)) + this->m_bk.at(i-1) * sin( 2*M_PI*i*x );
    }
    return f;
}

Fourier Fourier::derivative(Fourier& fr) {
    vector<double> ak = fr.m_ak;
    vector<double> bk = fr.m_bk;
    ak.at(0) = 0;
    for(size_t i = 1; i < bk.size(); ++i) {
        ak.at(i) = 2*M_PI*i*bk.at(i-1);
        bk.at(i-1) = -2*M_PI*i*ak.at(i);
    }
    Fourier dfdt(fr.m_exponent, ak, bk);
    return dfdt;
}
