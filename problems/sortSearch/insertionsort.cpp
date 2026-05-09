#include <iostream>
#include <utility>
using namespace std;

void insertion(vector<int> &arr, int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j;
    for (j = i - 1; j >= 0; j--) {
      if (key < arr[j]) {
        arr[j+1] = arr[j];

      } else {
        break;
      }
    }
arr[j+1]=key;  
}
}
int main() {
  vector<int> arr = {5, 2, 9, 6};
  int n = arr.size();
  insertion(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}