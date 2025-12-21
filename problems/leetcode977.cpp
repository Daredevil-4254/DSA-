#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            } else {
                pos.push_back(nums[i]);
            }
        }

        for (int i = 0; i < neg.size(); i++) {
            neg[i] = neg[i] * neg[i];
        }

        for (int i = 0; i < pos.size(); i++) {
            pos[i] = pos[i] * pos[i];
        }

        reverse(neg.begin(), neg.end());

        int i = 0, j = 0;
        while (i < neg.size() && j < pos.size()) {
            if (neg[i] < pos[j]) {
                ans.push_back(neg[i++]);
            } else {
                ans.push_back(pos[j++]);
            }
        }

        while (i < neg.size()) ans.push_back(neg[i++]);
        while (j < pos.size()) ans.push_back(pos[j++]);

        return ans;
    }
};

int main() {
    Solution sol;

    // hardcoded test case
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> result = sol.sortedSquares(nums);

    cout << "Output: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
