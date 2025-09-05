#include<iostream>
using namespace std;
int countDistantways(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return countDistantways(n-1)+ countDistantways(n-2);
}
int main(){
    int n ;
    cout<<"Enter n :";

    cin>>n;
    int ans=countDistantways(n);
    cout<<"ans: "<<ans;
}