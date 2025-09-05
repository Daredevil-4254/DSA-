#include <iostream>

using namespace std;
int main() {

  int n;
 
  int i = 1;
  cout << "enter the no of rows :";
  cin >> n;
 while (i<=n) 
 {   int j=1;// this j must be innitialised in this while loop instead of outside of all lops 
 
    while (j<=n)
    {
       
        cout<<n-j+1<<" ";
          j=j+1;
 
    }
 cout<<endl;
 i=i+1;
 }
 }