#include<iostream>
using namespace std;
// 1 based indexing ; sorted inc.; i+j=target

class Solution{
  public:
    vector<int> twoSum(vector<int>&numbers, int target){
      int i =0; 
      int j= numbers.size()-1;
      vector<int>ans;
      while (i<j) {
        if(numbers[i]+numbers[j]==target){
          ans.push_back(i+1);
          ans.push_back(j+1);
          return ans;
        }
        else if (numbers[i]+numbers[j]>target) {
          j--;

        
        }else {
        i++;
        }
      }
      return ans;
    }


};
int main (){
  vector<int>numbers={2,7,11,15};
  int target=9;
  Solution sol;
  vector<int>answer=sol.twoSum(numbers,target);
  for(int i =0 ; i<answer.size();i++){
    cout<<answer[i]<<" ";;
  }
}