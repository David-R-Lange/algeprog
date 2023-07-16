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
        static Complex conjugate(Complex &c);
        double abs() const;
        static Complex* add(Complex&, Complex);
        static Complex* subtract(Complex&, Complex);
        static Complex* multiply(Complex&, Complex);
        static Complex* divide(Complex&, Complex);
};
#endif // !COMPLEX_NUMBERS_H
