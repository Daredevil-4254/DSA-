#include<iostream>
#include <utility>
using namespace std;
// its reverse of rotating array to left using advansed reversal algorithm 
// rotating array to left by k steps 
// 1. reverse 0 to k-1; 2. reverse k to n-1 ; 3.reverse 0 to n-1
// rotatating the array to right , k steps is reversal of left rotating algorithm 
//1. reverse 0 to n-1; 2. reverse upto k 3. reverse k to n-1
class Solution{
  public:
    void  rotateclockwise(vector<int>& arr, int k) {
        int n = arr.size();
        k=k%n;
        if(n==0)return;
        if(k==0)return ;
        int i =0 ; 
        int j =n-1;
        while (i<j) {
          swap(arr[i],arr[j]);
          i++;
          j--;
        }
        i=0;
        j=k-1;
        while (i<j) {
          swap(arr[i],arr[j]);
          i++;
          j--;
        }
         i=k;
        j=n-1;
        while (i<j) {
          swap(arr[i],arr[j]);
          i++;
          j--;
        }
        return;
      }
};
int main(){
  vector<int>arr={1, 2, 3, 4, 5, 6};
  int k =2;
  Solution sol;
  sol.rotateclockwise(arr,k);
  cout<<"Array after rotation is :";
  for(int i :arr){
    cout<<i<<" ";
  }
}