#include<iostream>
#include<vector>
using namespace std;

class solution{
  public:
    int bsHealper(vector<int>&arr, int low , int high , int target){
      // Base condition for recursion instead of a while loop
      if(low<=high){
        int mid=low+(high-low)/2; // Corrected mid formula
        if(arr[mid]==target){
          return mid;
        }
        else if(arr[mid]>target){
          return bsHealper(arr,low,mid-1,target); 
        }
        else{
          return bsHealper(arr,mid+1,high,target);
        }
      }
      return -1; 
    }
    int binarySearch(vector<int>&arr,int target){
      int n =arr.size();
  
      return bsHealper(arr,0,n-1,target);
    }
};
