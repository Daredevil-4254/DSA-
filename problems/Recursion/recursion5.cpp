#include <iostream>
using namespace std;

void f(int i, int n) {

  if (i < 1)
    return;
  f(i - 1, n); // using i-1 to print increasing numbers from 1 to n ( kind of
               // backtracking)
  cout << i << endl;
}
int main() {
  int n;
  cout << "Enter n :";
  cin >> n;
  f(n, n);
}