#include <iostream>
using namespace std;

void f(int i ){
    if(i<1)return;
    cout<<i<<endl;
    f(i-1);

}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    f(n);
}