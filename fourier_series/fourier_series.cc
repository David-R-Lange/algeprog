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
