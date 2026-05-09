#include <iostream>
using namespace std;
int main() {

  int n, i = 1;
  cout << "enter the no. of rows :";
  cin >> n;
  int count = 0;
//   the above initialization is very crucial to be global.
  while (i <= n) {
    int j = 1;
    

    while (j <= n) {
      char ch = 'A' + count;
      cout << ch << " ";
      count += 1;
      j += 1;
    }

    cout << endl;
    i += 1;
  }
}