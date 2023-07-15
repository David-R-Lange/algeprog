#include "complex_vector.hh"


int main() {
    Complex c1(5,3);
    Complex c2(4,2);
    Complex c3(3,1);
    Complex c4(2,0);
    Complex c5(15,35);

    std::vector<Complex> c = {c1, c2, c3, c4};
    Complex_vector cv = c;

    std::cout << "Testing printing of complex vector: " << std::endl;
    cv.print();

    std::cout << "Test successfull...................." << std::endl;

    std::cout << "Testing Copy-Constructor: " << std::endl;
    Complex_vector cv2(c);

    std::cout << "Test successfull..................." << std::endl;

    std::cout << "Testing adding complex vector with  complex vector: " << std::endl;
    cv.add_vector(cv2);
    std::cout << "Test successfull..................." << std::endl;

    cv.print();

    std::cout << "Testing subtracting complex vector from complex vector: " << std::endl;

    cv.subtract_vector(cv2);

    std::cout << "Test successfull..................." << std::endl;

    std::cout << "Testing scaling of complex vector: " << std::endl;

    cv.scale(c5);

    std::cout << "Test successfull..................." << std::endl;

    cv.print();
}
