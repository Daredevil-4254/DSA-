#include <iostream>
using namespace std;

int binary(int arr[], int size, int key) {
  int start = 0, end = size - 1;
  int mid;

  while (start <= end) {
    mid = (start + end) / 2;

    if (arr[mid] == key) {
      return mid; // Element found

    } else if (arr[mid] < key) {
      start = mid + 1; // Search right

    } else {
      end = mid - 1; // Search left
    }
  }

  return -1; // Element not found
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int ans = binary(arr, 5, 5);
  cout << "The element '5' is present at index: " << ans << endl;
  return 0;
}
