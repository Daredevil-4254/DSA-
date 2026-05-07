/*You are given an integer array nums.

From any index i, you can jump to another index j under the following rules:

Jump to index j where j > i is allowed only if nums[j] < nums[i].
Jump to index j where j < i is allowed only if nums[j] > nums[i].
For each index i, find the maximum value in nums that can be reached by following any sequence of valid jumps starting at i.

Return an array ans where ans[i] is the maximum value reachable starting from index i.



Example 1:

Input: nums = [2,1,3]

Output: [2,2,3]

Explanation:

For i = 0: No jump increases the value.
For i = 1: Jump to j = 0 as nums[j] = 2 is greater than nums[i].
For i = 2: Since nums[2] = 3 is the maximum value in nums, no jump increases the value.
Thus, ans = [2, 2, 3].

Example 2:

Input: nums = [2,3,1]

Output: [3,3,3]

Explanation:

For i = 0: Jump forward to j = 2 as nums[j] = 1 is less than nums[i] = 2, then from i = 2 jump to j = 1 as nums[j] = 3 is greater than nums[2].
For i = 1: Since nums[1] = 3 is the maximum value in nums, no jump increases the value.
For i = 2: Jump to j = 1 as nums[j] = 3 is greater than nums[2] = 1.
Thus, ans = [3, 3, 3].



Constraints:

1 <= nums.length <= 105
1 <= nums[i] <= 109
soln:1. i can jum left only if elemn is greater than current elemt ; 2. i can jump right only if element is less than current element ; 3. for each index i , find the max value in nums that can be reached by following any sequence of valid jumps starting at i. 4. ill calculate two arrays a. where i store the maximum value in the array to the left of the current elemtnt and b. where i store the minimum vlaue in the array to the right of the current elemrt
5. for each nums[i] , if leftMax[i]<= rightMin[i] then , i cant jumnp to any index other ttahan left and ans[i]=leftmax[i]
6. if leftMax[i]>rightMin[i] then i can jump to right and evantauly jump to best value so i can say ans[i]=ans[i+1]
m-2: i can use a graph and do dfs to find the max value reachable from each index i. but this will be O(n^2) in worst case and will give TLE






​​​​​*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution
{
public:
    vector<int> maximumJumps(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> rightMin(n);
        vector<int> leftMax(n);
        leftMax[0] = nums[0];

        // Bug fix: should go up to i < n
        for (int i = 1; i < n; i++)
        {
            leftMax[i] = max(leftMax[i - 1], nums[i]);
        }

        // Bug fix: rightMin should strictly represent elements to the right of i
        rightMin[n - 1] = INT_MAX; 
        for (int i = n - 2; i >= 0; i--)
        {
            rightMin[i] = min(rightMin[i + 1], nums[i + 1]);
        }

        vector<int> ans(n);
        // Bug fix: Must process from right to left so ans[i + 1] is already computed
        for (int i = n - 1; i >= 0; i--)
        {
            if (leftMax[i] <= rightMin[i])
            {
                ans[i] = leftMax[i];
            }
            else
            {
                ans[i] = ans[i + 1];
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {2, 3,1};
    Solution s;
    vector<int> ans = s.maximumJumps(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

}