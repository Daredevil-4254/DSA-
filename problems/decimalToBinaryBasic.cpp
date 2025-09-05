
#include<iostream>
using namespace std;

int main(){

int n; 
cout<<"\nEnter a no :";

cin>>n;
int i =1, binary=0;
while (n>0) 
{
     int rem=0;
 rem=n%2;
 n=n/2;
binary=(rem*i)+binary;
i=i*10;


}
cout<<"Binary : "<<binary<<endl;

return 0;
}
