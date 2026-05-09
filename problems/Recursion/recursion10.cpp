#include <iostream>
#include <utility>
using namespace std;
void reversearr(
    int l, int r,
    int arr[]) { // this coud be done with just one variable i.e;r=n-i-1
  if (l >= r)
    return;

  swap(arr[l], arr[r - 1]);
  reversearr(l + 1, r - 1, arr);
}
int main() {
  int l = 0, r;
  int arr[4] = {1, 2, 3, 4};
  r = sizeof(arr) / sizeof(int);
  reversearr(l, r, arr);
  for (int i = 0; i < r; i++) {
    cout << arr[i] << " ";
  }
}