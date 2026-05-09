#include<iostream>
using namespace std ;

int main(){
    int x=5;
    // *-> is called 'value-at' operator
    // & -> is called 'address-of' operator
    // they both work as anti of each other => they cancel each other 
    // int a[3]={10,20,30}
    // *a==*&*a , &a==&*&*&a 
    cout<<"The value of x is :"<<x<<"\n";
    cout<<"The size of x is :"<<sizeof(x)<<"\n";

     cout<<"The address of x is :"<<&x<<endl;

     int *p=&x;
     
    cout<<"The value of *p is :"<<*p<<"\n";
    // *(a+1)==20 , &(a+1)==104(assuming the base address to be 100), &(a+2)==108

    cout<<"The value of p is :"<<p<<"\n";
    cout<<"The size of pointer is :"<<sizeof(p)<<"\n";






}