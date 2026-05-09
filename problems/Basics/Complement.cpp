#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "\n Enter the number :";
  cin >> n;
  int mask = 0;
  int temp = n;

  if (n == 0) {
    cout << "The Complement is : 1";
  
  
  return 0;
  }


  while (temp > 0) {

    mask = (mask << 1) | 1;
    temp >>= 1;
  }
  int complement = (~n & mask);
  cout << "The Complement is :"<<complement << endl;
}
