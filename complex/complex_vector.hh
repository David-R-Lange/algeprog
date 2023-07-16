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
        Complex_vector(std::vector<Complex>&);
        Complex_vector(Complex_vector&);
        ~Complex_vector();
        std::vector<Complex>* get_cvec();
        void set_cvec(std::vector<Complex>&);
        

        void print() const;
        void add_vector(Complex_vector);
        void subtract_vector(Complex_vector);
        void scale(Complex&);
};
#endif
