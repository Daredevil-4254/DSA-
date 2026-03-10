#include<iostream>
using namespace std;

class Solution{
  public:
  public:
    void prefixSum(vector<int>& arr) {
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            arr[i] = arr[i] + arr[i - 1];
        }
    }
};

int main(){
  vector<int>arr={10, 20, 10, 5, 15};
  Solution sol;
  sol.prefixSum(arr);
  cout<<"prefix array :";
  for(int i :arr){
    cout<<i<<" ";
  }

}