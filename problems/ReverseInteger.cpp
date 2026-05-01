
#include <climits>
#include <iostream>
using namespace std;

int ReverseInt(int n) {

  int i = 0, digit = 0, ans = 0;
  int temp = n;
  while (n != 0)

  {
    digit = n % 10;
    if (n <= INT_MIN / 10 || n >= INT_MAX / 10) {

      return 0;
    }
    // the above condition is to make the vanswer lie betwen the integer range
    ans = (ans * 10) + digit;
    n /= 10;

    i += 1;
  }
  return ans;
}
int main() {

  int n;
  cout << "Enter the no :";
  cin >> n;
  cout << "Reverse Integer for " << n << " is :" << ReverseInt(n) << endl;
  return 0;
}