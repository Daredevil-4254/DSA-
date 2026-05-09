// although pow() is an inbuilt function in c++to use directly but i made 
// this function program just to demostrate the working of a function.



#include <iostream>
#include <cmath>
using namespace std;

int power(int x, int y) { return pow(x,y); }
int main() {
int m,n;
cout <<"Enter the base :";
cin>>m;
cout <<"Enter the power :";
cin>>n;
  int w = power(m,n);
  cout << w;
  return 0;
}
