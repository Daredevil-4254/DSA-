#include<iostream>
using namespace std;
 void f(){
     cout<<"hello\n";
   f();  //condition for stack over flow or aka segementation fault
   
    }
 int main (){
    f();
 }