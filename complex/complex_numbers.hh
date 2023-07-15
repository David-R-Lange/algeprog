#ifndef COMPLEX_NUMBERS_H
#define COMPLEX_NUMBERS_H

class Complex {
    private:
        double M_real;
        double M_imaginary;
    public:
        Complex(double r, double i);
        ~Complex();

        double get_real() const;
        double get_imaginary() const;
        void set_real(double r);
        void set_imaginary(double i);

        void print() const;
        static Complex conjugate(Complex c);
        double abs() const;
        static Complex add(Complex &c, Complex &c1);
        static Complex subtract(Complex &c, Complex &c1);
        static Complex multiply(Complex &c, Complex c1);
        static Complex divide(Complex &c, Complex c1);
};
#endif // !COMPLEX_NUMBERS_H
