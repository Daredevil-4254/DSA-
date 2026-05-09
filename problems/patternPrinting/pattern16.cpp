#include <iostream>
using namespace std;
int main() {

  int n, i = 1;
  cout << "enter the row no.";
  cin >> n;
  int count=0;
  while (i <= n) {
    int j = 1;
    while (j <= i) {

      char ch = 'A'+count;

      cout << ch << " ";
      j += 1;
      count+=1;
    }
    cout << endl;
    i += 1;
  }
}
