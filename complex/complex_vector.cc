#include "complex_vector.hh"
#include "complex_numbers.hh"

using namespace std;

Complex_vector::Complex_vector() {
    m_cnumber = {};
}

Complex_vector::Complex_vector(vector<Complex> &c) {
    m_cnumber = c;
}

Complex_vector::Complex_vector(Complex_vector& cvec) {
    m_cnumber = cvec.m_cnumber;
}

Complex_vector::~Complex_vector() {
}

vector<Complex>* Complex_vector::get_cvec() {
    return &m_cnumber;
}

void Complex_vector::set_cvec(vector<Complex> &cvec) {
    m_cnumber = cvec;
}

void Complex_vector::print() const{
    for(size_t i = 0; i < this->m_cnumber.size(); ++i) {
        this->m_cnumber.at(i).print();
    }
}

void Complex_vector::add_vector(Complex_vector cv) {
    size_t n = this->get_cvec()->size();
    if(n != cv.m_cnumber.size()) { return;}
    for(size_t i = 0; i < n - 1; ++i) {
        Complex::add(this->get_cvec()->at(i), cv.get_cvec()->at(i));
    }
}

void Complex_vector::subtract_vector(Complex_vector cv) {
    size_t n = this->get_cvec()->size();
    if(n != cv.m_cnumber.size()) { return;}
    for(size_t i = 0; i < n - 1; ++i) {
        Complex::subtract(this->get_cvec()->at(i), cv.get_cvec()->at(i));
    }
}

void Complex_vector::scale(Complex &c) {
    size_t n = this->get_cvec()->size();
    for(size_t i = 0; i < n - 1; ++i) {
        Complex::multiply(this->get_cvec()->at(i), c);
    }
}
