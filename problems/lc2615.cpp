// ou are given a 0-indexed integer array nums. There exists an array arr of length nums.length, where arr[i] is the sum of |i - j| over all j such that nums[j] == nums[i] and j != i. If there is no such j, set arr[i] to be 0.

// Return the array arr.

// Example 1:

// Input: nums = [1,3,1,1,2]
// Output: [5,0,3,4,0]
// Explanation:
// When i = 0, nums[0] == nums[2] and nums[0] == nums[3]. Therefore, arr[0] = |0 - 2| + |0 - 3| = 5.
// When i = 1, arr[1] = 0 because there is no other index with value 3.
// When i = 2, nums[2] == nums[0] and nums[2] == nums[3]. Therefore, arr[2] = |2 - 0| + |2 - 3| = 3.
// When i = 3, nums[3] == nums[0] and nums[3] == nums[2]. Therefore, arr[3] = |3 - 0| + |3 - 2| = 4.
// When i = 4, arr[4] = 0 because there is no other index with value 2.

// Example 2:

// Input: nums = [0,5,3]
// Output: [0,0,0]
// Explanation: Since each element in nums is distinct, arr[i] = 0 for all i.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<long long> distance(vector<int> &nums)
    {
        int n = nums.size();
        vector<long long> result(n, 0);
        unordered_map<int, vector<int>> freq;
        for (int i = 0; i < n; i++)
        {
            freq[nums[i]].push_back(i);
        }
        for (auto &[val, indices] : freq)
        {
            long long total_sum = 0;
            int indices_length = indices.size();
            if (indices_length <= 1)
                continue;
            for (int ind : indices)
            {
                total_sum += ind;
            }
            long long left_sum = 0;
            for (int i = 0; i < indices_length; ++i)
            {
                long long targetIdx = indices[i];
                long long right_sum = total_sum - left_sum - targetIdx;
                long long left_part=(i*targetIdx)-left_sum;
                long long right_part=right_sum-(indices_length-1-i)*targetIdx;
                result[targetIdx] = left_part + right_part;

                left_sum += targetIdx;
            }
        }
    return result;
    }

};

int main()
{
    vector<int> nums = {1, 3, 1, 1, 2};
    Solution sol;
    vector<long long> result = sol.distance(nums);
    cout << "Result: ";
    for (long long val : result)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}