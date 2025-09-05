// Given a positive integer n, write a function that returns the number of
// set bits
//  in its binary representation (also known as the Hamming weight).
// 191 leetcode

#include <iostream>

using namespace std;

int countSetBits(int n) {

  int count = 0;
  while (n != 0) {


    n &= (n - 1); // Removes the rightmost set bit using Brian Kernighan’s Algorithm
// Why Use Brian Kernighan’s Algorithm?
// Instead of checking every bit, it removes the rightmost 1 in each step.
// It runs in O(number of set bits) instead of O(log n).

count++;  
  
  }
  return count;
}
int main() {

  int n;

  cout << endl;
  cout << "Enter the number:";
  cin >> n;
  cout << "The Hamming Weight of " << n << " is :" << countSetBits(n);
  cout << endl;

  return 0;
}