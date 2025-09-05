#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;

  cout << "Binary representation: ";
  for (int i = 7; i >= 0; i--) { // 8-bit representation
    cout << ((n >> i) & 1);
  }
  cout << endl;

  return 0;
}
