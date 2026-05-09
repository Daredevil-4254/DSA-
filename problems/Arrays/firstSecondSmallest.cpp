#include <climits>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
private:
  
public:
  vector<int> minAnd2ndMin(vector<int> &arr) {
    int min=INT_MAX;
    int _2min=INT_MAX;
    for(int i=0; i<arr.size();i++){
      if(arr[i]<min){
        _2min=min;
        min=arr[i];
      }
      else if (arr[i] < _2min && arr[i] != min) {
        _2min = arr[i];
      }
    }
    
    return {min,_2min};
  }
};
int main() {
  vector<int> arr = {2, 4, 3, 5, 6};
  Solution sol;
  vector<int> finalAns = sol.minAnd2ndMin(arr);
  for (int i : finalAns) {
    cout << i << " ";
  }
}