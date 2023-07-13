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
