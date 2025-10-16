#include <iostream>
#include <utility>
using namespace std;
class Solution {
private:
  void permuteHelper(vector<int> nums, int indx, vector<vector<int>> &ans) {
    // base case
    if (indx >= nums.size()) {
      ans.push_back(nums);
      return;
    }
    // precomputation

    for (int j = indx; j < nums.size(); j++) {
      swap(nums[indx], nums[j]);
      permuteHelper(nums, indx + 1, ans);
      // backtracking step
      swap(nums[indx], nums[j]);
    }
  }

public:
  vector<vector<int>> permute(vector<int> &nums) {
    int indx = 0;
    vector<vector<int>> ans;
    permuteHelper(nums, indx, ans);
    return ans;
  }
};
int main() {
    vector<int> nums = {1, 2, 3}; 

    Solution sol;
    vector<vector<int>> finalAns = sol.permute(nums);

    cout << "All permutations:\n";
    for (const auto &perm : finalAns) {
        cout << "[ ";
        for (int num : perm) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}