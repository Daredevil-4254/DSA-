#include <iostream>
#include <vector>
using namespace std;
int sumArr(int *arr,int n){
    if(n==0){return 0;}
    if(n==1){return arr[0];}
    int remaingPart=sumArr(arr+1, n-1);
    int sum=arr[0]+remaingPart;
    return sum;
}
int main(){
    int arr[4]={1,4,6,9};
    int n=4;
    int ans=sumArr(arr,n);
    cout<<"ans :"<<ans<<endl;
    
}