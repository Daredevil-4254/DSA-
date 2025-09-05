#include<iostream>
using namespace std;
void f (int i ,int n ){
    if (i>n)return;
    f(i+1,n);//same as recursion5.cpp
    cout<<i<<endl;
}


int main(){
    int n;
  cout << "Enter n :";
  cin >> n;
  f(1, n);
}