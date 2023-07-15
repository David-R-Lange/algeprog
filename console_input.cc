#include <iostream>
#include <list>

using namespace std;

list<double> sorted_input() {
    list<double> input_list;
    double input;
    cout << "Insert double numbers. If input is not a number the input will be sorted\n";
    while(1) {
        if(cin >> input) {
            input_list.push_back(input);
        }
        else {
            break;
        }
    }
    input_list.sort();
    return input_list;
}

void print_list(list<double> list) {
    for(auto i = list.cbegin(); i != list.cend(); ++i) {
        cout << *i << ' ';
    }
    cout << endl;
}

int main(int argc, char **argv) {
    list<double> input_list = sorted_input();
    print_list(input_list);
}
