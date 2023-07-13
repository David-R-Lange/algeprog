#include <codecvt>
#include <complex>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include "complex_numbers.hh"

using namespace std;

Complex::Complex(double r, double i) {
    M_real = r;
    M_imaginary = i;
}

double Complex::get_real() const {
    return M_real;
}

double Complex::get_imaginary() const {
    return M_imaginary;
}

void Complex::set_real(double r) {
    M_real = r;
}

void Complex::set_imaginary(double i) {
    M_imaginary = i;
}

void Complex::print() const {
    if(this->get_imaginary() >= 0) {
        cout << this->get_real() << "+" << this->get_imaginary() << "i" << endl;
    }
    else {
        cout << this->get_real() << this->get_imaginary() << "i" << endl;
    }
}

Complex Complex::conjugate() {
    this->set_imaginary(-this->get_imaginary());
    return *this;
}

double Complex::abs() const {
    return sqrt(pow(this->get_real(),2) + pow(this->get_imaginary(),2));
}

Complex Complex::add(Complex c) {
    this->set_real(this->get_real()+c.get_real());
    this->set_imaginary(this->get_imaginary()+c.get_imaginary());
    return *this;
}

Complex Complex::subtract(Complex c) {
    this->set_real(this->get_real()-c.get_real());
    this->set_imaginary(this->get_imaginary()-c.get_imaginary());
    return *this;
}


Complex Complex::multiply(Complex c) {
    this->set_real(this->get_real()*c.get_real() - this->get_imaginary()*c.get_imaginary());
    this->set_imaginary(this->get_real()*c.get_imaginary() + c.get_real()*this->get_imaginary());
    return *this;
}

Complex Complex::divide(Complex c) {
    double z2 = (c.multiply(c.conjugate()).abs());
    this->set_real((this->get_real()*c.get_real() + this->get_imaginary()*c.get_imaginary()) / z2);
    this->set_imaginary((this->get_imaginary()*c.get_real() - this->get_real()*c.get_imaginary())/z2);
    return *this;
}
