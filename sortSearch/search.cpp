#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int> &arr, int n) {
    int s = 0, e = n - 1;


    if (arr[s] <= arr[e]) return 0;

    while (s < e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s; 
}

int binarySearch(vector<int>&arr,int s ,int e,int k){
  int mid=s+(e-s)/2;
  while(s<=e){
    if(arr[mid]==k){
      return mid ; 
      break;

    }
    else if(arr[mid]>k){
      e=mid-1;
    }
    else
   { s=mid+1;}
   mid=s+(e-s)/2;
  }
return -1;
}
int search(vector<int>arr,int n ,int k ){
  int pivot=getPivot(arr,n);
  if(arr[pivot]<= k && k <= arr[n-1]){
    return binarySearch(arr,pivot,n-1,k);
  }
  else{
return binarySearch(arr,0,pivot-1,k);

  }
  return -1;
}
int main() {
  vector<int> arr = {7, 9, 1, 2, 3};  // Rotated sorted array
  int n = arr.size();
  int key = 7;                        // Element to search

  int index = search(arr, n, key);

  if (index != -1) {
    cout << "Element " << key << " found at index: " << index << endl;
  } else {
    cout << "Element " << key << " not found in the array." << endl;
  }

  return 0;
}
