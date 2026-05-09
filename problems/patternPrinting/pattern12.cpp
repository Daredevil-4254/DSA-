#include <iostream>
using namespace std;
int main() {

  int n, i = 1;
  cout << "enter the rows no. :";
  cin >> n;
  while (i <= n) {
    int j = 1;
    char ch = 'A';
    // the above initialization could be done inside below while loop
    // but to execute the uncommented cout statement this was necessary condition.
    while (j <= n) {
      //  char ch ='A'+j-1

      cout << ch;
      ch += 1;
      j += 1;
    }
    cout << endl;
    i += 1;
  }
}