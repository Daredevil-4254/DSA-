#include<iostream>
using namespace std;

void mergeSort(vector<int>&arr, int n){
    int s=0;
    int e=n-1;
    

}
int main(){
    vector<int>arr={5,4,3,2,1};
    int n =arr.size();
    cout<<"Array before sorting :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    mergeSort(arr,n);
    cout<<"Array after sorting :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}