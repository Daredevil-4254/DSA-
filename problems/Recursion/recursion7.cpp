#include <iostream>
using namespace std;

void f(int i, int sum) {
  if (i < 1) {

    cout << sum<<endl;
    return;
  }
  f(i-1,sum+i);//parameterised recursion!!
}
int main (){
    int n,sum =0;
    cout<<"Enter n :";
    cin>>n;
    f(n, 0);
}