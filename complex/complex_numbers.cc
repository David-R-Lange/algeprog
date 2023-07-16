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

Complex::~Complex() {
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

Complex Complex::conjugate(Complex &c) {
    c.set_imaginary(-c.get_imaginary());
    return c;
}

double Complex::abs() const {
    return sqrt(this->get_real()*this->get_real() + this->get_imaginary()*this->get_imaginary());
}

Complex* Complex::add(Complex &c1, Complex c2) {
    c1.set_real(c1.get_real()+c2.get_real());
    c1.set_imaginary(c1.get_imaginary()+c2.get_imaginary());
    return &c1;
}
Complex* Complex::subtract(Complex &c1, Complex c2) {
    c1.set_real(c1.get_real()+c2.get_real());
    c1.set_imaginary(c1.get_imaginary()+c2.get_imaginary());
    return &c1;
}

Complex* Complex::multiply(Complex &c1, Complex c) {
    c1.set_real(c1.get_real()*c.get_real() - c1.get_imaginary()*c.get_imaginary());
    c1.set_imaginary(c1.get_real()*c.get_imaginary() + c.get_real()*c1.get_imaginary());
    return &c1;
}

Complex* Complex::divide(Complex &c1, Complex c) {
    c = *multiply(c, conjugate(c));
    double z2 = c.abs();
    c1.set_real((c1.get_real()*c.get_real() + c1.get_imaginary()*c.get_imaginary()) / z2);
    c1.set_imaginary((c1.get_imaginary()*c.get_real() - c1.get_real()*c.get_imaginary())/z2);
    return &c1;
}
