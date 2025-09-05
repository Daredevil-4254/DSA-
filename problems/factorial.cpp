#include <iostream>
using namespace std;

int main() {
  long long n, t = 1;

  cout << "Enter the number to find its factorial: ";
  cin >> n;

  if (n < 0) {
    cout << "Factorial of negative numbers is not defined." << endl;
  } else {
    for (int i = 1; i <= n; i++) {
      t *= i;
    }
    cout << "Factorial of " << n << " is: " << t << endl;
  }

  return 0;
}
