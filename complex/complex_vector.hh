#ifndef COMPLEX_VECTOR_H
#define COMPLEX_VECTOR_H

#include <vector>
#include <iostream>
#include "complex_numbers.hh"

class Complex_vector {
    private:
        std::vector<Complex> m_cnumber;
        
    public:
        Complex_vector();
        Complex_vector(std::vector<Complex> c);
        Complex_vector(Complex_vector& cvec);
        ~Complex_vector();
        std::vector<Complex> get_cvev() const;
        void set_cvec(std::vector<Complex> c);
        

        void print() const;
        void add_vector(Complex_vector cv);
        void subtract_vector(Complex_vector cv);
        void scale(Complex c);
};
#endif
