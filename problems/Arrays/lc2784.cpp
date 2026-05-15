/*
You are given an integer array nums. We consider an array good if it is a permutation of an array base[n].

base[n] = [1, 2, ..., n - 1, n, n] (in other words, it is an array of length n + 1 which contains 1 to n - 1 exactly once, plus two occurrences of n). For example, base[1] = [1, 1] and base[3] = [1, 2, 3, 3].

Return true if the given array is good, otherwise return false.

Note: A permutation of integers represents an arrangement of these numbers.



Example 1:

Input: nums = [2, 1, 3]
Output: false
Explanation: Since the maximum element of the array is 3, the only candidate n for which this array could be a permutation of base[n], is n = 3. However, base[3] has four elements but array nums has three. Therefore, it can not be a permutation of base[3] = [1, 2, 3, 3]. So the answer is false.
Example 2:

Input: nums = [1, 3, 3, 2]
Output: true
Explanation: Since the maximum element of the array is 3, the only candidate n for which this array could be a permutation of base[n], is n = 3. It can be seen that nums is a permutation of base[3] = [1, 2, 3, 3] (by swapping the second and fourth elements in nums, we reach base[3]). Therefore, the answer is true.
Example 3:

Input: nums = [1, 1]
Output: true
Explanation: Since the maximum element of the array is 1, the only candidate n for which this array could be a permutation of base[n], is n = 1. It can be seen that nums is a permutation of base[1] = [1, 1]. Therefore, the answer is true.
Example 4:

Input: nums = [3, 4, 4, 1, 2, 1]
Output: false
Explanation: Since the maximum element of the array is 4, the only candidate n for which this array could be a permutation of base[n], is n = 4. However, base[4] has five elements but array nums has six. Therefore, it can not be a permutation of base[4] = [1, 2, 3, 4, 4]. So the answer is false.


Constraints:

1 <= nums.length <= 100
1 <= num[i] <= 200
soln:
1. i need to check the freq of each elemnt ;
2. if the freq. of hightest term in array in 2 alone ,return true
3.else return false ;


*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution
{
public:
    bool isGood(vector<int> &nums)
    {
        int n = nums.size();
        int maxm = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxm = max(maxm, nums[i]);
        }
        if (!(n>=maxm+1))
        {
            /* code */
            return false;
        }
        
        int maxCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == maxm)
            {
                maxCount++;
            }
        }
        if (maxCount < 2)
        {
            return false;
        }
        else if(maxCount==2)
        {
            unordered_map<int, int> freq;
            for (int i = 0; i < n; i++)
            {
                freq[nums[i]]++;
            }
            int doubleCount = 0;
            for (auto const& pair : freq)
            {
                if (pair.second > 1)
                {
                    doubleCount++;
                }
            }
            if (doubleCount > 1)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        else{
            return false;
        }
    }
};

int main(){
    vector<int>nums={1,1,1};
    Solution s;
    s.isGood(nums)?cout<<"true":cout<<"false";

}