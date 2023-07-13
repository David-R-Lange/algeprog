#include <codecvt>
#include <complex>
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

class Complex {
    private:
        double M_real;
        double M_imaginary;

    public:
        Complex(double r, double i);
        double get_real() const;
        double get_imaginary() const;
        void set_real(double r);
        void set_imaginary(double i);
        void print() const;
        Complex conjugate();
        double abs() const;
        Complex add(Complex c);
        Complex subtract(Complex c);
        Complex multiply(Complex c);
        Complex divide(Complex c);

};

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

int main() {
    Complex c1(5,3);
    Complex c2(4,2);

    cout << "c1 = ";
    c1.print();
    cout << "c2 = ";
    c2.print();

    Complex c3 = c1.conjugate();
    Complex c4 = c1.conjugate();

    cout << "c3 = ";
    c3.print();
    cout << "c4 = ";
    c4.print();

    c3.add(c4);
    cout << "c3 + c4 = ";
    c3.print();
    c3.subtract(c4);
    cout << "c3 + c4 - c4 = ";
    c3.print();

    cout << "c1 / c2 = ";
    c1.divide(c2);
    c1.print();
}
