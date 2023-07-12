#include <iostream>
#include <random>

using namespace std;

void swap(double &number1, double &number2) {
    double tmp = number1;
    number1 = number2;
    number2 = tmp;
}

void print_dyn_array(int n, double* arr) {
    for(int i = 0; i <= n - 1; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort(int n, double* arr) {
    for(int step = 0; step < n - 1; ++step) {
        for(int i = 0; i < n - step - 1; ++i) {
            if(arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
            }
        }
    }
}

int main(int argv, char **argc) {
    const int n = 5;
    double *arr = new double[5];
    double lower_bound = 0;
    double upper_bound = 10000;
    uniform_real_distribution<double> unif(lower_bound, upper_bound);
    default_random_engine re;
    for(int i = 0; i < n; ++i) {
        arr[i] = unif(re);
    }
    print_dyn_array(n,arr);
    bubblesort(n, arr);
    print_dyn_array(n,arr);
    delete[] arr;
}
