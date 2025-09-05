#include<iostream>
#include <utility>
using namespace std;

void selection(vector<int>&arr,int n,int start){
    //base case
    if(start>=(n-1))return;
    int mnindex=start;
    for(int i=start; i<n; i++){
        if(arr[mnindex]>arr[i]){
            mnindex=i;
        }
        
    }
    swap(arr[mnindex],arr[start]);
    selection(arr,  n,  start+1);
}
int main(){
    vector<int>arr={5,4,3,2,1};
    int n =arr.size();
    selection(arr,n,0);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
