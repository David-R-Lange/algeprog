#include <iostream>
#include "complex_numbers.hh"

using namespace std;


int main() {
    Complex c1(5,3);
    Complex c2(4,2);

    cout << "c1 = ";
    c1.print();
    cout << "c2 = ";
    c2.print();

    Complex c3 = Complex::conjugate(c1);
    Complex c4 = Complex::conjugate(c2);

    cout << "c3 = ";
    c3.print();
    cout << "c4 = ";
    c4.print();

    Complex::add(c3, c4);
    cout << "c3 + c4 = ";
    c3.print();
    Complex::subtract(c3, c4);
    cout << "c3 + c4 - c4 = ";
    c3.print();

    cout << "c1 / c2 = ";
    Complex::divide(c1,c2);
    c1.print();
}
