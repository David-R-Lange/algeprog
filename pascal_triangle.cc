#include <iostream>

using namespace std;

int berechne_pascal_dreieck(int s) {
    return s;
}

int main() {
    int m = 0;

    cout << "Bis zu welcher Stufe m moechtest du das pascalsche Dreieck berechnen lassen?
        \nBeachte, dass es nur positive ganze Zahlen sein koennen" << endl
    cin >> m;

    if(m < 0) {
        return 0;
    }
}
