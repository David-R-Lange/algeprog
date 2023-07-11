#include <iostream>

using namespace std;

int main() {
    int rows = 0;

    cout << "Enter number of rows. Number has to be positive: ";
    cin >> rows;
    cout << endl;

    if(rows < 0) {
        cout << "Die Zahl muss positiv sein" << endl;
        return 1;
    }

    for(int i = 0; i < rows; ++i) {
        int val = 1;
        for(int j = 1; j < (rows - i); ++j) {
            cout << "   ";
        }
        for(int k = 0; k <= i; ++k) {
            cout << "   " << val;
            val = val * (i-k) / (k+1);
        }
        cout << endl << endl;
    }
    cout << endl;
    return 0;
}
