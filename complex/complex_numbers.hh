#ifndef COMPLEX_NUMBERS_H
#define COMPLEX_NUMBERS_H

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
#endif // !COMPLEX_NUMBERS_H
