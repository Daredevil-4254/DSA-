#include <iostream>
using namespace std;

void unique_elmt(int arr[], int size) {
  cout << "Function is running\n";
  for (int i = 0; i < size; i++) {
    int count = 0;

    for (int j = 0; j < size; j++) {
      if (arr[i] == arr[j]) {
        count++;
      }
    }
    if (count == 1) {
      cout <<"Unique Element is : "<< arr[i]<<endl;
    }
  }
}

int main() {
  int arr[10] = {1, 1, 2, 2, 3,4,3,5,6,5,};
  int size = sizeof(arr) / sizeof(int);
  unique_elmt(arr, size);
  return 0;
}