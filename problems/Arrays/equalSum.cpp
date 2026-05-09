#include <iostream>
using namespace std;

class Solution {
public:
  int equalSum(vector<int> &arr) {
    int n = arr.size();
    if (n == 0) return -1;

    long long totalSum = 0;

    vector<long long> prefSum(n); 

    for (int i = 0; i < n; i++) {
      totalSum += arr[i];
      if (i == 0) 
        prefSum[i] = arr[i];
      else 
        prefSum[i] = arr[i] + prefSum[i - 1];
    }


    for (int i = 0; i < n; i++) {
      long long leftSum = prefSum[i] - arr[i];
      long long rightSum = totalSum - leftSum - arr[i];
      
      if (leftSum == rightSum) {
        return i;
      }
    }
    return -1;
  }
};
int main (){
  vector<int>arr={-7, 1, 5, 2, -4, 3, 0};
  Solution sol;
int finalAns= sol.equalSum(arr);
cout<<"Final Ans :"<<finalAns<<endl;
}