#include <iostream>

using namespace std;

int main() {
    int const n = 15;
    int iarray [n];
    double darray [n];
    float farray [n];
    for(int i = 0; i <= n; ++i) {
        cout << iarray[i] << "\t" << darray[i] << "\t" << farray[i] << endl;
    }
}
