#include<iostream>
#include <unordered_map>
using namespace std;

class Solution{
  public:
vector<vector<int>> countFreq(vector<int>& arr) {
  unordered_map<int, int>freq;
  for(int i =0 ; i< arr.size(); i++){
    freq[arr[i]]++;

  }
  vector<vector<int>>final;
  for(auto const& it:freq){
    final.push_back({it.first,it.second});
  }
return final;
}
};
int main(){
  vector<int>arr={1, 2, 2, 3, 3, 5};
  Solution sol;
  vector<vector<int>>ans;
  ans=sol.countFreq(arr);
  for (const auto& pairVec : ans) {

    cout << "[" << pairVec[0] << ", " << pairVec[1] << "] ";
}
return 0;
}