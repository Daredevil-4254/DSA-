

#include <iostream>
using namespace std;

int main(){
    float num1,num2;
cout <<"Enter the first number :";
cin>>num1;

cout <<"Enter the second number :";
cin>>num2;
char op;
cout<<"Enter the operator:";
cin>>op;
switch (op) {
    case '+':
        cout<<(num1+num2)<<endl;
        break;
    case '-':
        cout<<(num1-num2)<<endl;
        break;
    case '/':
        cout<<(num1/num2)<<endl;
        break;
    case '*':
        cout<<(num1*num2)<<endl;
        break;
    default:
        cout<<"You've entered a wrong operator !!";

}

return 0;

}