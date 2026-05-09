#include <iostream>
#include <utility>
using namespace std;

void insertion_sort(int arr[], int n) {
  for (int i = 1; i < n; i++) { // inatilation condition is very important!!
    int j = i;
    while (j > 0 && arr[j] < arr[j - 1]) {
      swap(arr[j], arr[j - 1]);
      j--;
    }
  }
}
int main() {

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  insertion_sort(arr, n);
  cout << "Sorted array :";
  for (int k = 0; k < n; k++) {
    cout << arr[k] << " ";
  }
}
//worst and avg case tc =O(N^2)
//for best case its O(N)