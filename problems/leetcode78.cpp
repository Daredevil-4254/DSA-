#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    void solve(vector<int>& nums, vector<int> output, vector<vector<int>>& ans, int index) {

        // base case
        if (index >= nums.size()) {
            ans.push_back(output);
            return;
        }

        // include current element
        output.push_back(nums[index]);
        solve(nums, output, ans, index + 1);

        // exclude current element
        output.pop_back(); // remove last added element before exclude call (optional since output is copied by value)
        solve(nums, output, ans, index + 1);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, ans, index);
        return ans;
    }
};

// ---------------- Main Function ----------------
int main() {
    Solution s;
    vector<int> nums = {1, 2, 3}; // sample input

    vector<vector<int>> result = s.subsets(nums);

    cout << "All subsets are:\n";
    for (auto subset : result) {
        cout << "{ ";
        for (auto num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
