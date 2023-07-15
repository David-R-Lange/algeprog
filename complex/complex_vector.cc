#include "complex_vector.hh"

using namespace std;

Complex_vector::Complex_vector() {
    m_cnumber = {};
}

Complex_vector::Complex_vector(vector<Complex> c) {
    m_cnumber = c;
}

Complex_vector::Complex_vector(Complex_vector& cvec) {
    m_cnumber = cvec.m_cnumber;
}

Complex_vector::~Complex_vector() {
    delete[] this;
}

vector<Complex> Complex_vector::get_cvev() const{
    return m_cnumber;
}

void Complex_vector::set_cvec(vector<Complex> &cvec) {
    m_cnumber = cvec;
}

void Complex_vector::print() const{
    size_t n = this->m_cnumber.size();
    for(size_t i = 0; i < n; ++i) {
        this->get_cvev().at(i).print();
    }
}

void Complex_vector::add_vector(Complex_vector &cv) {
    size_t n = this->m_cnumber.size();
    if(n != cv.m_cnumber.size()) { return;}
    for(size_t i = 0; i < n - 1; ++i) {
        Complex::add(this->get_cvev().at(i), cv.get_cvev().at(i));
    }
}

void Complex_vector::subtract_vector(Complex_vector &cv) {
    size_t n = this->m_cnumber.size();
    if(n != cv.m_cnumber.size()) { return;}
    for(size_t i = 0; i < n; ++i) {
        Complex::subtract(this->get_cvev().at(i), cv.get_cvev().at(i));
    }
}

void Complex_vector::scale(Complex &c) {
    size_t n = this->m_cnumber.size();
    for(size_t i = 0; i < n; ++i) {
        Complex::multiply(this->get_cvev().at(i), c);
    }
}
