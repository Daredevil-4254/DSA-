
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the no. :";
  cin >> n;
  if (n<=1) {
    cout << "Not a Prime";
  cout<<endl;
  }
  else if (n==2) {
  cout<<"Prime";
  cout<<endl;
  return 0;
  }




for (int i = 2; i <sqrt(n); i++) {
      if (n % i == 0) {
        cout << "Not a Prime !!";
        cout<<endl;
        return 0;
      } 
      else {
        cout << "Prime !!";
        cout<<endl;
      }
    }
  }
