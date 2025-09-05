#include <iostream>
using namespace std;

void print() {
  static int count =0; // static keyword is used to tackle the problem of local varable scope.

  if (count > 5) { // base condition should be defined at the top or before the
                   // function actualy to be performed (here print )in the
                   // recursion function ALWAYS!!

    return;
  }
  cout << count << '\n';
  count++;
  print();
}

int main() {
  print();
  return 0;
}