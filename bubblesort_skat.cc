#include <iostream>
#include <string>

using namespace std;

typedef struct {
  int value;
  string name;
  int color; // 0 for pik and 1 for ace
} card;

void swap(card &c1, card &c2) {
  card tmp = c1;
  c1 = c2;
  c2 = tmp;
}

void print_card_array(int n, card *arr) {
  for (int i = 0; i < n ; ++i) {
    cout << arr[i].name << " ";
  }
  cout << endl;
}

void bubblesort(int n, card *arr) {
  for (int step = 0; step < n - 1; ++step) {
    for (int i = 0; i < n - step - 1; ++i) {
      if (arr[i].value > arr[i + 1].value) {
        swap(arr[i], arr[i + 1]);
      }
      if (arr[i].value == arr[i + 1].value && arr[i].color > arr[i + 1].color) {
        swap(arr[i], arr[i + 1]);
      }
    }
  }
}

int main(int argv, char **argc) {
    const int n = 5;
    card *arr = new card[5];
    arr[0].value = 0;
    arr[0].name = "7";
    arr[0].color = 0;

    arr[1].value = 5;
    arr[1].name = "Dame";
    arr[1].color = 0;

    arr[2].value = 1;
    arr[2].name = "8";
    arr[2].color = 0;

    arr[3].value = 7;
    arr[3].name = "Ass";
    arr[3].color = 0;   

    arr[4].value = 7;
    arr[4].name = "Ass";
    arr[4].color = 1;

    print_card_array(n, arr);
    bubblesort(n, arr);
    print_card_array(n,arr);
    delete[] arr;
}
