#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter the number :";
  cin >> n;
  cout << "Fibonacci Series :";
  int a = 0, b = 1, nextnumber;
  for (int i = 0; i < n; i++) {

    nextnumber = a + b;

    cout << a << " ";

    a = b;
    b = nextnumber;
  }
  cout << endl;
  return 0;
}
