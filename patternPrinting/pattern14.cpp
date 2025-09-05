#include <iostream>
using namespace std;
int main() {

  int n, i = 1;
  cout << "enter the row no.";
  cin >> n;
  while (i <= n) {
    int j = 1;
    while (j <= n) {

      char ch = 'A' + i + j - 2;
    //   logic is {char(A)+i+j-2} :-)
      cout << ch << " ";
      j += 1;
    }
    cout << endl;
    i += 1;
  }
}
