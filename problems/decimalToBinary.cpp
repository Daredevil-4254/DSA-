#include <iostream>

using namespace std;

int main() {


  int n;
  cout<<"\nEnter a Decimal no. : ";
  cin >> n;
  int ans=0,bit=0,i=1 ;
while (n!=0)
{

bit=n&1;
n>>=1;
ans=(bit*i)+ans;
i*=10;

}
cout<<"Binary : "<<ans<<endl;

}