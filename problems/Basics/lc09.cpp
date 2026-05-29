/*
Given an integer x, return true if x is a palindrome, and false otherwise.



Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


Constraints:

-2^31 <= x <= 2^31 - 1

*/
// #include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        string s = to_string(x);
        int len = s.size();
        int i = 0;
        int j = len - 1;
        while (i <= j)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        Solution s;
        s.isPalindrome(x) ?cout<<"true"<<endl:cout<<"false"<<endl;
    }
}