#include <cstdlib>
#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>
#include <random>

using namespace std;

template<class ForwardIt>
void swap_two(ForwardIt begin, ForwardIt end) {
    double tmp1, tmp2;
    for(auto it = begin; it != end; ++it) {
        iter_swap(it, it++);
    }
}

template<class container>
void fill_container_with_random_numbers(container &c) {
    for(size_t i = 0; i < c.size(); ++i) {
        c.at(i) = rand() % 1000 + 1;
    }
}

void fill_list_with_random_numbers(list<double> &l) {
    size_t n = l.size();
    l.clear();
    for(size_t i = 0; i < n; ++i) {
        l.push_back(rand() % 1000 + 1);
    }
}

void fill_flist_with_random_numbers(forward_list<double> &fl, const int n) {
    fl.clear();
    for(size_t i = 0; i < n; ++i) {
        fl.push_front(rand() % 1000 + 1);
    }
}

template<class container>
void print_container(container &c) {
    for(double i : c) {
        cout << i << '\t';
    }
    cout << endl;
}


int main(int argc, char **argv) {
    const size_t n = 6;
    array<double,n> arr;
    vector<double> vec (n, 0);
    list<double> lis (n,0);
    forward_list<double> flist;

    fill_container_with_random_numbers<array<double,n>>(arr);
    fill_container_with_random_numbers<vector<double>>(vec);
    fill_list_with_random_numbers(lis);
    fill_flist_with_random_numbers(flist, n);

    cout << "Array: \n";
    print_container<array<double,n>>(arr);
    cout << "Vector: \n";
    print_container<vector<double>>(vec);
    cout << "List \n";
    print_container<list<double>>(lis);
    cout << "Forword List \n";
    print_container<forward_list<double>>(flist);

    cout << "Swapping.....\n";
    swap_two(arr.begin(), arr.end());
    swap_two(vec.begin(), vec.end());
    swap_two(lis.begin(), lis.end());
    swap_two(flist.begin(), flist.end());

    cout << "Array: \n";
    print_container<array<double,n>>(arr);
    cout << "Vector: \n";
    print_container<vector<double>>(vec);
    cout << "List \n";
    print_container<list<double>>(lis);
    cout << "Forword List \n";
    print_container<forward_list<double>>(flist);
}
