#include <iostream>
using namespace std;

int fibonacci(int n) {

  if (n == 1)
    return 0;
  if (n == 2)
    return 1;
  int a = 0, b = 1, next;
  for (int i = 3; i <= n; i++) {
    next = a + b;
    a = b;
    b = next;
  }
  return b;
}

int main() {
  int n;
  cout << "Enter the term number (n): ";
  cin >> n;

  if (n <= 0) {
    cout << "Please enter a positive integer greater than 0." << endl;
  } else {
    int result = fibonacci(n);
    cout << "The " << n << "th Fibonacci term is: " << result << endl;
  }

  return 0;
}
