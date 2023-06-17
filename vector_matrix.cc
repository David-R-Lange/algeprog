#include <iostream>
#include <functional>
#include <cmath>

using namespace std;

template<typename T>
T fill_vector(int* v, int const n, function<int(int)> func) {
	for(int i = 0; i <= n; ++i) {
		v[i] = func(i);
	}
	return *v;
}


template<typename T>
T fill_matrix(int* M, int const n,function<int(int, int)> func) {
	for(int i = 0, k = 0; i <= n-1 && k <= n-1; ++i, ++k) {
			M[k*n+i] = func(i, k);
	}
	return *M;
}


void print_vector(int* v, int const n) {
	for(int i = 0; i <= n; ++i) {
		cout << v[i] << " ";
	}
	cout << "\n\n";
}

void print_matrix(int* M, int const n) {
	for(int i = 0, k = 0; i <= n-1 && k <= n-1; ++i, ++k) {
		for(int k = 0; k <= n-1; ++k) {
			cout << M[k*n+i] << "\t";
		}
		cout << "\n";
	}
	cout << "\n\n";
}

int main() {
	for(int n = 1; n <= 5; ++n) {
		// Allocating memory
		int* einheitsvektor = (int *) malloc (n);

		int* einsvektor = (int *) malloc (n);

		int* v = (int *) malloc (n * sizeof(int));

		int* I = (int *) malloc (n*n * sizeof(int));

		int* M = (int *) malloc (n*n * sizeof(int));

		int* y1 = (int *) malloc (n * sizeof(int));

		int* y2 = (int *) malloc (n * sizeof(int));

		int* s = (int *) malloc (n*n * sizeof(int));

		int* y3 = (int *) malloc (n*n * sizeof(int));

		*einheitsvektor = fill_vector<int>(einheitsvektor, n, [](int x) -> int { if(x == 0) { return 1;} else { return 0;}});

		*einsvektor = fill_vector<int>(einsvektor, n, [](int x) -> int { return 1;});

		*v = fill_vector<int>(v, n, [n](int x) -> int { if(n-x == 0) {return 1;} else {return n - x;} });

		*I = fill_matrix<int>(I, n, [](int i, int k) -> int { if( i == k) { return 1;} else { return 0;} });

		*M = fill_matrix<int>(M, n, [](int i, int k) -> int { if( i == k) { return 1;} else { return abs(i-k)+1;} });


		// Operating on the y_i's and s as defined by the assignment

		for(int i = 0; i <= n; ++i) {
			y1[i] = einsvektor[i] - einheitsvektor[i];
		}

		for(int i = 0; i <= n; ++i) {
			y2[i] = v[i] + 1*einsvektor[i];
		}

		for(int i = 0, k = 0; i <= n-1 && k <= n-1; ++i, ++k) {
			s[k*n+i] = v[i]*einsvektor[k];
		}

		for(int i = 0, k = 0; i <= n-1 && k <= n-1 ; ++i, ++k) {
			y3[k*n+i] = M[k*n+i]*v[i];
		}



		// Printing of the Vectors and Matrices
		
		cout << "y1 = c1 - e1\n"; 
		print_vector(y1, n);

		cout << "y2 = v + a * c1\n";
		print_vector(y2, n);

		cout << "s = vT * c1\n";
		print_matrix(s, n);

		cout << "y3 = M * v\n";
		print_matrix(y3, n);

		cout << endl;

		free(einheitsvektor);
		free(einsvektor);
		free(v);
		free(I);
		free(M);
		free(y1);
		free(y2);
		free(s);
		free(y3);
	}
}
