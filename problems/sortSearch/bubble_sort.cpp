#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n) {
  for (int i = n - 1; i >= 0; i--) {
    int didswap = 0;
    for (int j = 0; j <= i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        didswap = 1;
      }
    }
    if (didswap == 0)
      break; // this single line reduces the time complexity from n^2 to n in
             // best case
  }
}
int main() {
  int arr[] = {5, 2, 9, 1, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubble_sort(arr, n);
  cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}