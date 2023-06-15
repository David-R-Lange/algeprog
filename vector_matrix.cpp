#include <iostream>
#include <math.h>

using namespace std;

// Assignment 5.2

// Def. of unitvector for as. a) (i)
int* normal_vector(int const dimension, int one_at_number) {
   int* v[dimension];  // v could be zero-initialized, but that is indetermined
   for(int i = 0; i <= dimension; ++i) {
        if( i == one_at_number) {
            *v[i] = 1;
        }
        else {
            *v[i] = 0;
        }
   }
   return *v;
}

//Def. of one-vector for as. a) (ii)
int* one_vector(int const dimension) {
    int* v[dimension];
    for(int i = 0; i <= dimension; ++i) {
        *v[i] = 1;
    }
    return *v;
}

// Def. of vector s.t. (a) (iii) is satisfied
int* vector_v(int const dimension) {
    int* v[dimension];
    for(int i = 0; i <= dimension; ++i) {
        *v[i] = dimension - i;
    }
    return *v;
}

// Def. of 1-matrix for as. a) (iv)
int* one_matrix_coloum_major(int const m, int const n) {
    int* I[m*n];
    for(int i = 0; i <= m-1; ++i) {
        for(int k = 0; k <= n-1; ++k) {
            if(i == k) {
                *I[k*m+i] = 1;
            }
            else {
                *I[k*m+i] = 0;
            }
        }
    }
    return *I;
}

int* matrix_in_coloum_major(int const m, int const n) {
    int* M[m*n];
    for( int i = 0; i <= m-1; ++i) {
        for( int k = 0; k <= n-1; ++k) {
            *M[k*m+i] = 1;
        }
    }
    return *M;
}

void print_vector(int* v, int n) {
   for(int i = 0; i <= n; ++i) {
       cout << v[i] << "\t";
   }
   cout << endl;
}

void print_Matrix_coloum_major(int* M, int const m, int const n) {
    for(int i = 0; i <= m-1; ++i) {
        for(int k = 0; k <= n-1; ++k) {
            cout << M[k*m+i] << "\t";
        }
        cout << "\n";
    }
    cout << endl;
} 

int main() {
    int const nv = 5; // Def. der Vektorengroesse nach Aufg.
    int const n = 4; 
    int const m = 4;

    int* e = normal_vector(nv, 1);
    int* I = one_matrix_coloum_major(m, n);

    print_vector(e, nv);
    
    print_Matrix_coloum_major(I, m, n);

    return 1;
}
