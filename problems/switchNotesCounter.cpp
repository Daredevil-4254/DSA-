#include <iostream>
using namespace std;

int main(){
int amount;
int note100=0,note50=0,note20=0,note1=0;
cout <<"Enter the amount:";
cin>>amount;
int x=1;
switch (x) {
    case 1:
    note100=amount/100;
    amount%=100;
    case 2:
    note50=amount/50;
    amount%=50;
    case 3:
    note20=amount/20;
    amount%=20;
    case 4:
    note1=amount/1;
    amount%=1;
    break;
    default:
    cout<<"Enter a valid choice!!";

}
cout<<"\nThe notes count for amount "<<amount<<" is: ";
cout<<"100 rupee notes :"<<note100<<endl;
cout<<"50 rupee notes :"<<note50<<endl;
cout<<"20 rupee notes :"<<note20<<endl;
cout<<"1 rupee notes :"<<note1<<endl;
return 0;






}