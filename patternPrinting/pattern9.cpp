#include <iostream>
using namespace std;
int main() {

  int i = 1;
  int n;
  int count = 1;
  cout << "enter the no. of rows :";
  cin >> n;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      cout << count << " ";
      count += 1;
      j += 1;
    }
    cout << endl;
    i += 1;
  }
  return 0;
}