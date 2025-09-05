#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter a base 10 integer :";
  cin >> n;
  int count = 0;
  int temp = n;
  while (n > 0) {
    int bit = n & 1;
    n >>= 1;

    if (bit == 1) {
      count += 1;
    }
  }
  if (count == 1) {
    cout << temp << " is a power of 2!";
  } else {
    cout << "not a power of two ! ";
  }
}
