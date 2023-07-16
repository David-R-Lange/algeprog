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
        std::vector<Complex> get_cvev() const;
        void set_cvec(std::vector<Complex>&);
        

        void print() const;
        Complex_vector add_vector(Complex_vector);
        Complex_vector subtract_vector(Complex_vector);
        Complex_vector scale(Complex&);
};
#endif
