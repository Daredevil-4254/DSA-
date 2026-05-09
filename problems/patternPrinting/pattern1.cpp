#include <iostream>
using namespace std;
int main() {
  cout << "enter the no of star rows : ";
  int n, i = 1;
  cin >> n;
  while (i <= n) {
    for (i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        cout << " * ";
      }
      cout << endl;
    }
    i += 1;
  }
}