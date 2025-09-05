
// Given an integer array nums of length n where all the integers of nums are in
// the range [1, n] and each integer appears at most twice, return an array of
// all the integers that appears twice. You must write an algorithm that runs in
// O(n) time and
//  uses only constant auxiliary space, excluding the space needed to store the
//  output

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;

        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;

            if (nums[index] < 0) {
                duplicates.push_back(index + 1);
            } else {
                nums[index] = -nums[index];
            }
        }

        return duplicates;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> result = sol.findDuplicates(arr);

    cout << "Duplicate elements are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
