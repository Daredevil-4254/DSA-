#include <algorithm>
#include <iostream>
using namespace std;
  bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) {
                return true; // found duplicate
            }
        }
        return false;
    }
int main(){
    vector<int>nums={1,2,3,4};
    
    containsDuplicate(nums)?cout<<"No Duplicate present":cout<<"Duplicate present"<<endl;
}