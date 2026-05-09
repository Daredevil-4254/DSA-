#include<iostream>
using namespace std;
 void f(){
     cout<<"hello\n";
   f();  //condition for stack over flow or aka segementation fault =>fubction called without parameter reduced makes an infinite calls up until the stack memory is exhausted and program crashes with segmentation fault   
   
    }
 int main (){
    f();
 }