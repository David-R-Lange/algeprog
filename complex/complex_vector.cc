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

vector<Complex> Complex_vector::get_cvev() const {
    return m_cnumber;
}

void Complex_vector::set_cvec(vector<Complex> &cvec) {
    m_cnumber = cvec;
}

void Complex_vector::print() const{
    for(size_t i = 0; i < this->m_cnumber.size(); ++i) {
        this->m_cnumber.at(i).print();
    }
}

Complex_vector Complex_vector::add_vector(Complex_vector cv) {
    size_t n = this->get_cvev().size();
    if(n != cv.m_cnumber.size()) { return *this;}
    for(size_t i = 0; i < n - 1; ++i) {
        Complex::add(this->m_cnumber.at(i), cv.m_cnumber.at(i));
    }
    return *this;
}

Complex_vector Complex_vector::subtract_vector(Complex_vector cv) {
    size_t n = this->m_cnumber.size();
    if(n != cv.m_cnumber.size()) { return *this;}
    for(size_t i = 0; i < n; ++i) {
        Complex::subtract(this->m_cnumber.at(i), cv.m_cnumber.at(i));
    }
    return *this;
}

Complex_vector Complex_vector::scale(Complex &c) {
    size_t n = this->m_cnumber.size();
    for(size_t i = 0; i < n; ++i) {
        Complex::multiply(this->m_cnumber.at(i), c);
    }
    return *this;
}
