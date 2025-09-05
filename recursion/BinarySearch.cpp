#include<iostream>
using namespace std;

int binarySearch(vector<int>&arr,int s, int e,int key){
    if(s>e)return -1;
    int mid=s+(e-s)/2;
    
    if(arr[mid]==key) return mid;
    else if (arr[mid]>key){
         return binarySearch(arr,s,mid-1,key);
    }else {
       return binarySearch(arr, mid+1,e, key);
    }
  return -1;   
}


int main(){
    vector<int>arr={1,3,55,77,89};

    int ans=binarySearch(arr, 0, 4,0);
    cout<<"The key is at index : "<<ans<<endl;

}