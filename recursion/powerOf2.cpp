#include<iostream>
using namespace std;

int power(long long a,long long b){
    if(b==0)return 1;
    if(b==1)return a;

    long long ans=power(a,  b/2);
    if(b%2==0){return ans*ans;}

    else{
        return a*(ans*ans);
    }
}
int main(){
    long long a=2;
    long long b=50;
    long long ans=power(a,b);
    cout<<"Ans :"<<ans<<endl;
}