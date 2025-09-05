#include <iostream>
#include <vector>
using namespace std;

void swapalt(vector<int> &arr) {
  for (int i = 0; i < arr.size()-1 ; i += 2) {
    swap(arr[i], arr[i + 1]);
  }
}

void printarr(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> arr = {1, 2, 3, 4,9};

  swapalt(arr);
  printarr(arr);

  return 0;
}
