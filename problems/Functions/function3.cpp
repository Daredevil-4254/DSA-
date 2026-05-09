#include <iostream>
using namespace std;

int ap(int x){

int nth_term=3*x + 7;
return nth_term;

}
int main (){
int n ;
cout <<"Enter the number :";
cin>>n;
int term=ap(n);
cout<<"The nth term of series is :"<<term<<endl;



    return 0; 
}