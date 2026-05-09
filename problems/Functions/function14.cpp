#include <iostream>
using namespace std;

int xorArr(int arr[], int size) {
  int ans = 0;
  for (int i = 0; i < size; i++) {
    ans = ans ^ arr[i];
  }
  for (int j = 1; j < size; j++) {
    ans = ans ^ j;
  }
  return ans;
}
int main() {

  int arr[5] = {1, 2, 3, 4, 4};
  int size = sizeof(arr) / sizeof(int);
  int duplicate = xorArr(arr, size);
  cout << "Duplicate value is :" << duplicate << "\n";
}