
#include <cstdlib>
#include <iostream>
using namespace std;

int firstocc(vector<int> &arr, int n, int k) {
  int s = 0, e = n - 1;
  int first = -1;

  while (s <= e) {
      int mid = s + (e - s) / 2;

    if (arr[mid] == k) {
      first = mid;
      e = mid - 1;

    } else if (arr[mid] > k) {
      e = mid - 1;

    } else {
      s = mid + 1;
    }

}
  
  return first;
}
int lastocc(vector<int> &arr, int n, int k) {
  int s = 0, e = n - 1;
  int last = -1;

  while (s <= e) {
      int mid = s + (e - s) / 2;

    if (arr[mid] == k) {
      last = mid;
      s = mid + 1;

    } else if (arr[mid] > k) {
      e = mid - 1;

    } else {
      s = mid + 1;
    }

}
  return last;
}
pair<int, int> ans(vector<int> &arr, int n, int k) {
  int first = firstocc(arr, n, k);
  int last = lastocc(arr, n, k);
  return {first, last};
}
int main() {
    

  vector<int> arr = {1, 1, 2, 2, 2, 3, 3, 4, 5, 6};
  int n = arr.size();
  int k = 2;

  pair<int, int> result = ans(arr, n, k);

  if (result.first != -1 && result.second != -1) {
    cout << "First Occurrence of " << k << " is at index: " << result.first
         << endl;
    cout << "Last Occurrence of " << k << " is at index: " << result.second
         << endl;
  } else {
    cout << k << " not found in array." << endl;
  }

  return 0;
}
