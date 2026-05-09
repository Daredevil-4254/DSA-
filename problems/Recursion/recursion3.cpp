#include<iostream>
using namespace std;

void print(int i,int n){

    if(i>n)return;

    cout<<i<<"\n";
    
    
    print(i+1,n);//parameter based recurion 
}
int main (){
    
    int n ;
    
    cout<<"enter n :";
    cin>>n;
    print( 1,n);
}