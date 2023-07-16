#include "complex_vector.hh"
#include <vector>


int main() {
    std::cout << "Welcome to the Test:\n\n\n" << std::endl;
    std::cout << "Creating Complex Numbers.......: " << std::endl;
    Complex c1(5,3);
    Complex c2(4,2);
    Complex c3(3,1);
    Complex c4(2,0);
    Complex c5(2,0);
    std::cout << "Done....." << std::endl;

    std::cout << "Creating Complex Vectors......: " << std::endl;
    std::cout << "Done....." << std::endl;

    std::cout << "Filling Complex Vectors with complex numbers:.." << std::endl;

    Complex myComp[] = {c1, c2, c3, c4};

    std::vector<Complex> cv (myComp, myComp + sizeof(myComp)/sizeof(myComp[0]) );

    Complex_vector cv1(cv);

    std::cout << "Testing printing of complex vector: " << std::endl;
    cv1.print();

    std::cout << "Test successfull...................." << std::endl;

    std::cout << "Testing Copy-Constructor: " << std::endl;

    Complex_vector cvc(cv1);


    std::cout << "Test successfull..................." << std::endl;

    std::cout << "Testing adding complex vector with  complex vector: " << std::endl;
    cv1.add_vector(cvc);
    std::cout << "Test successfull..................." << std::endl;

    cv1.print();

    std::cout << "Testing subtracting complex vector from complex vector: " << std::endl;

    cv1.subtract_vector(cvc);

    std::cout << "Test successfull..................." << std::endl;

    cv1.print();

    std::cout << "Testing scaling of complex vector: " << std::endl;

    cv1.scale(c5);

    std::cout << "Test successfull..................." << std::endl;

    cv1.print();
}
