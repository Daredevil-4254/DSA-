/*You are given an integer array nums of length n.

Assume arrk to be an array obtained by rotating nums by k positions clock-wise. We define the rotation function F on nums as follow:

F(k) = 0 * arrk[0] + 1 * arrk[1] + ... + (n - 1) * arrk[n - 1].
Return the maximum value of F(0), F(1), ..., F(n-1).

The test cases are generated so that the answer fits in a 32-bit integer.



Example 1:

Input: nums = [4,3,2,6]
Output: 26
Explanation:
F(0) = (0 * 4) + (1 * 3) + (2 * 2) + (3 * 6) = 0 + 3 + 4 + 18 = 25
F(1) = (0 * 6) + (1 * 4) + (2 * 3) + (3 * 2) = 0 + 4 + 6 + 6 = 16
F(2) = (0 * 2) + (1 * 6) + (2 * 4) + (3 * 3) = 0 + 6 + 8 + 9 = 23
F(3) = (0 * 3) + (1 * 2) + (2 * 6) + (3 * 4) = 0 + 2 + 12 + 12 = 26
So the maximum value of F(0), F(1), F(2), F(3) is F(3) = 26.
Example 2:

Input: nums = [100]
Output: 0


Constraints:

n == nums.length
1 <= n <= 105
-100 <= nums[i] <= 100*/
/*
soln:
[a,b,c,d]
f(0)=0xa+1xb+2xc+3xd
f(1)=0xd+1xa+2xb+3xc|1xa-0xa+2xb-1xb+3xc-2xc+0xd-3xd
 f(1)-f(0)=a+b+c-3d+(+d-d)=>a+b+c+d -4d=> total sum - size*lastElemnt of that rotation;

f(k)-f(k-1)=(total sum of nums arr)- size*(last elemnt of that rotation);

f(k)=f(k-1)+(total sum of nums arr)- size*(last elemnt of that rotation);
last elemnt of arr in kth rotation is =n-1-k

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        long long totalSum = 0;
        long long currentF = 0;

        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
            currentF += (long long)i * nums[i];
        }

        long long maxVal = currentF;

        // Start from 1 because we already calculated currentF for F(0)
        for (int i = 1; i < n; i++) {
            // F(i) = F(i-1) + totalSum - n * last_element_of_previous_state
            // The last element for F(i-1) is nums[n - i]
            currentF = currentF + totalSum - (long long)n * nums[n - i];
            maxVal = max(maxVal, currentF);
        }

        return (int)maxVal;
    }
};