#include <iostream>
using namespace std;

void alterSwap(int arr[], int size) {

  int temp = 0;
  for (int i = 0; i < (size-1); i += 2) {

    temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
  }
}
void printArray(int arr[], int size) {

  for (int j = 0; j < size; j++) {

    cout << arr[j] << " ";
  }
  cout << endl;
}
int main() {

  int oddArr[5] = {1, 2, 3, 4, 5};
  int evenArr[6] = {1, 2, 3, 4, 5, 6};
  int size = sizeof(evenArr) / sizeof(int);

  alterSwap(evenArr, size);
  printArray(evenArr, size);
}