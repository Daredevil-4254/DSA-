#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a base 10 integer :";
  cin >> n;
  int x = 1;

  while (x <= n) {
    if (n == 0) {
      cout << "compliment is 1 .";
      break;
    }

    n = n ^ x;
    x <<= 1;
  }
  cout << "THE COMPLIMENT IS : " << n << endl;

  return 0;
}