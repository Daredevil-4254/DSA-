/*
You are given an integer array nums of length n.

You start at index 0, and your goal is to reach index n - 1.

From any index i, you may perform one of the following operations:

Adjacent Step: Jump to index i + 1 or i - 1, if the index is within bounds.
Prime Teleportation: If nums[i] is a prime number p, you may instantly jump to any index j != i such that nums[j] % p == 0.
Return the minimum number of jumps required to reach index n - 1.

 

Example 1:

Input: nums = [1,2,4,6]

Output: 2

Explanation:

One optimal sequence of jumps is:

Start at index i = 0. Take an adjacent step to index 1.
At index i = 1, nums[1] = 2 is a prime number. Therefore, we teleport to index i = 3 as nums[3] = 6 is divisible by 2.
Thus, the answer is 2.

Example 2:

Input: nums = [2,3,4,7,9]

Output: 2

Explanation:

One optimal sequence of jumps is:

Start at index i = 0. Take an adjacent step to index i = 1.
At index i = 1, nums[1] = 3 is a prime number. Therefore, we teleport to index i = 4 since nums[4] = 9 is divisible by 3.
Thus, the answer is 2.

Example 3:

Input: nums = [4,6,5,8]

Output: 3

Explanation:

Since no teleportation is possible, we move through 0 → 1 → 2 → 3. Thus, the answer is 3.
 

Constraints:

1 <= n == nums.length <= 105
1 <= nums[i] <= 106
soln:
1. i can jump to adjacent index i+1 or i-1 obviously excluding the indices 0 , n-1
2. if nums[i] is prime like 2,3,5,7,11,13,...then i can jump only on indices j where nums[j]%nums[i]==0;
3.i need to find minm no. of jumps from index0 to reach index n-1 using allowedd jumping conitions
4.

5. i can use bfs to find the minm no. of jumps from index 0 to reach index n-1
6. i can use a queue to store the indices to be processed and a visited array to mark the indices that have been visited to avoid cycles
7. for each index i, if nums[i] is prime then i can jump to all indices j where nums[j]%nums[i]==0
8. for each index i, if nums[i] is not prime then i can jump to     i+1 and i-1 if they are within bounds and not visited
9. i will keep track of the number of jumps taken to reach each index and return the number of jumps when i reach index n-1     

*/ 
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int minJumps(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        int max_val = 0;
        for (int x : nums) max_val = max(max_val, x);

        // 1. Sieve to find primes and smallest prime factors (SPF)
        vector<int> spf(max_val + 1);
        for (int i = 2; i <= max_val; ++i) spf[i] = i;
        for (int i = 2; i * i <= max_val; ++i) {
            if (spf[i] == i) {
                for (int j = i * i; j <= max_val; j += i)
                    if (spf[j] == j) spf[j] = i;
            }
        }

        // 2. Map primes to indices of their multiples
        // prime_to_indices[p] contains all j where nums[j] % p == 0
        unordered_map<int, vector<int>> prime_to_indices;
        for (int i = 0; i < n; ++i) {
            int temp = nums[i];
            // Factorize nums[i] to find all prime factors
            while (temp > 1) {
                int p = spf[temp];
                prime_to_indices[p].push_back(i);
                while (temp % p == 0) temp /= p;
            }
        }

        // 3. BFS
        queue<int> q;
        q.push(0);
        vector<int> dist(n, -1);
        dist[0] = 0;
        
        // Track which primes have already been "activated"
        unordered_set<int> visited_primes;

        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            if (curr == n - 1) return dist[curr];

            // Option 1: Adjacent Steps
            for (int next_idx : {curr - 1, curr + 1}) {
                if (next_idx >= 0 && next_idx < n && dist[next_idx] == -1) {
                    dist[next_idx] = dist[curr] + 1;
                    q.push(next_idx);
                }
            }

            // Option 2: Prime Teleportation
            // Check if nums[curr] is prime
            if (spf[nums[curr]] == nums[curr] && nums[curr] > 1) {
                int p = nums[curr];
                if (visited_primes.find(p) == visited_primes.end()) {
                    for (int target_idx : prime_to_indices[p]) {
                        if (dist[target_idx] == -1) {
                            dist[target_idx] = dist[curr] + 1;
                            q.push(target_idx);
                        }
                    }
                    visited_primes.insert(p); // Never process this prime factor again
                }
            }
        }

        return -1;
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1, 2, 4, 6};
    cout << s.minJumps(nums1) << endl; // Output: 2

    vector<int> nums2 = {2, 3, 4, 7, 9};
    cout << s.minJumps(nums2) << endl; // Output: 2

    vector<int> nums3 = {4, 6, 5, 8};
    cout << s.minJumps(nums3) << endl; // Output: 3

    return 0;
}                   