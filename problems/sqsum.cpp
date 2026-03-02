#include<iostream>
using namespace std ;

class Solution{
  public:
    vector<int>sortedSquares(vector<int>&nums){
      vector<int>neg;
      vector<int>nonNeg;
      vector<int>ans;

      for(int i =0; i<nums.size();i++){
        if(nums[i]<0){
          neg.push_back(nums[i]);

        }else{
          nonNeg.push_back(nums[i]);
        }
      }
      for(int i=0; i<neg.size();i++){
        neg[i]*=neg[i];
      }
      for(int i=0; i<nonNeg.size();i++){
        nonNeg[i]*=nonNeg[i];
      }
      int i=neg.size()-1,j=0;
      while(i>=0 && j<nonNeg.size() ){
        if(neg[i]<nonNeg[j]){
          ans.push_back(neg[i--]);

        }else{
          ans.push_back(nonNeg[j++]);
        }
      }
      while (i>=0) {
      ans.push_back(neg[i--]);
      }
      while(j<nonNeg.size()){
        ans.push_back(nonNeg[j++]);
      }
      return ans;
    }
};
int main (){
  vector<int> nums={-4,-1,0,3,10};
  Solution sol;
  vector<int>finalAns=sol.sortedSquares(nums);
  for(int i :finalAns){
    cout<<i<<" , ";
  }cout<<endl;
  return 0;
}