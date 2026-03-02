#include<iostream>
#include <utility>
using namespace std;
class Solution{
  public:
    void rotateArray(vector<int>&arr, int d){
      int n = arr.size();
      // edge cases
      if(n==0)return;

      d=d%n;
      if(d==0)return;
      int i =0 ; 
      int j = d-1;
      while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
      }
      
      int k=d;
      int l= n-1;
      while(k<=l) {
        swap(arr[k],arr[l]);
        k++;
        l--;
      
      }
      int m=0;
      int o=n-1;
     while(m<=o){
      swap(arr[m],arr[o]);
      m++;
      o--;
     }

    }
};
int main(){
vector<int>arr={1, 2, 3, 4, 5};
int d =2;
Solution sol;
sol.rotateArray(arr,d);
for(int i :arr){
  cout<<i<<" ";
}cout<<endl;
}