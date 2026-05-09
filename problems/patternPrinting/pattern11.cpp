#include <iostream>
using namespace std;
int main() {

  int n, i = 1;
  cout << "enter the rows no. :";
  cin >> n;
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      // char ch =65+i-1; also could be used 
    //   i needs to be initialozed to 1 not to 0 .
      char ch = 'A' + i - 1;
      cout << ch;
      j += 1;
    }
    cout << endl;
    i += 1;
  }
}