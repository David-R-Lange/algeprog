#include <iostream>
#include <vector>
#include <array>

using namespace std;

vector<double> ax_plus_y(vector<double> &x, vector<double> &y, double &a) {
    if(x.size() != y.size()) {return vector<double>();}
    for(size_t i = 0; i < x.size(); ++i) {
        x.at(i) = a * x.at(i) + y.at(i);
    }
    return x;
}

template<typename T, const size_t SIZE>
vector<T> matrix_vector_mult(array<T, SIZE> &matrix, vector<T> &vect) {
    if(SIZE != vect.size()) { return vector<T>(); }
    for(size_t i = 0; i < SIZE; ++i) {
        vect.at(i) = matrix.at(i) * vect.at(i);
    }
    return vect;
}

template<typename T>
void print_vector(vector<T> &vec) {
    for(size_t i = 0; i < vec.size(); ++i) {
        cout << vec.at(i) << ' ';
    }
    cout << endl;
}

int main (int argc, char *argv[]) {
    const size_t n = 3;
    vector<double> x;
    vector<double> y;
    array<double,n> mat;
    double a = 1.5986e-1;

    x.assign(n,255);
    y.assign(n,1);
    for(size_t i = 0; i < n; ++i) {
        mat.at(i) = (i+a) * a;
    }

    vector<double> res = ax_plus_y(x, y, a);
    if(res.size() != x.size() || res.size() != y.size()) { return 1;}

    print_vector<double>(res);

    vector<double> result = matrix_vector_mult<double, n>(mat, res);
    if(result.size() != x.size() || result.size() != y.size()) { return 1;}

    print_vector<double>(result);

    return 0;
}
