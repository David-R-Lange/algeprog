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

int Fourier::get_exponent() {
    return m_exponent;
}

vector<double> Fourier::get_ak() {
    return m_ak;
}

vector<double> Fourier::get_bk() {
    return m_bk;
}

void Fourier::set_exponent(int ex) {
    this->m_exponent = ex;
}

void Fourier::set_ak(vector<double> ak) {
    this->m_ak = ak;
}

void Fourier::set_bk(vector<double> bk) {
    this->m_bk = bk;
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
    int ex = fr.get_exponent();
    vector<double> ak = fr.get_ak();
    vector<double> bk = fr.get_bk();
    ak.at(0) = 0;
    for(size_t i = 1; i < bk.size(); ++i) {
        ak.at(i) = 2*M_PI*i*bk.at(i-1);
        bk.at(i-1) = -2*M_PI*i*ak.at(i);
    }
    Fourier dfdt(ex, ak, bk);
    return dfdt;
}
