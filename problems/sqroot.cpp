#include <iostream>
using namespace std;

double binarySearch(int n) {
  double s = 0, e = n;
  double mid = s + (e - s) / 2;
  double ans = -1;

  while (s <= e) {
    mid = s + (e - s) / 2;
    double mul = mid * mid;

    if (mul == n) {
      return mid;
    } else if (mul < n) {
      ans = mid; // store possible floor
      s = mid + 1;
    } else {
      e = mid - 1;
    }
  }

  return ans; // returns floor of sqrt
}

int floorSqrt(int n) { return binarySearch(n); }

int main() {
  int n = 6;
  double sqroot = floorSqrt(n);
  cout << "Root is: " << sqroot << endl;
  return 0;
}
