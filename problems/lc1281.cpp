// leetcoode problem 1281
// Given an integer number n, return the difference between the product of its
// digits and the sum of its digits.

#include <iostream>
using namespace std;

int main() {

  int n;
  cout << endl;
  cout << "Enter the number:";
  cin >> n;
  int temp = n, sum = 0, product = 1;
  while (temp > 0) {
    int digit = temp % 10;
    product = product * digit;
    sum += digit;
    temp /= 10;
  }
  cout << "Result: " << product - sum << endl;
  return 0;
}