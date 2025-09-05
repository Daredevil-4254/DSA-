#include<iostream>
using namespace std;
int main (){
int n ;
cout<<"Enter the number :";
cin>>n;
int count=0;
while (n>0) 
{
    
    int bit =n&1;
    n>>=1;
    if (bit==1) {
    count+=1;

    }

}
if (count==1) {
cout<<"Power of two found !!";
}
else {
cout<<"Not power of two!"
;}




}