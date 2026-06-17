/*You are given a string s consisting of lowercase English letters and the special characters: '*', '#', and '%'.

You are also given an integer k.

Build a new string result by processing s according to the following rules from left to right:

If the letter is a lowercase English letter append it to result.
A '*' removes the last character from result, if it exists.
A '#' duplicates the current result and appends it to itself.
A '%' reverses the current result.
Return the kth character of the final string result. If k is out of the bounds of result, return '.'.



Example 1:

Input: s = "a#b%*", k = 1

Output: "a"

Explanation:

i	s[i]	Operation	Current result
0	'a'	Append 'a'	"a"
1	'#'	Duplicate result	"aa"
2	'b'	Append 'b'	"aab"
3	'%'	Reverse result	"baa"
4	'*'	Remove the last character	"ba"
The final result is "ba". The character at index k = 1 is 'a'.

Example 2:

Input: s = "cd%#*#", k = 3

Output: "d"

Explanation:

i	s[i]	Operation	Current result
0	'c'	Append 'c'	"c"
1	'd'	Append 'd'	"cd"
2	'%'	Reverse result	"dc"
3	'#'	Duplicate result	"dcdc"
4	'*'	Remove the last character	"dcd"
5	'#'	Duplicate result	"dcddcd"
The final result is "dcddcd". The character at index k = 3 is 'd'.

Example 3:

Input: s = "z*#", k = 0

Output: "."

Explanation:

i	s[i]	Operation	Current result
0	'z'	Append 'z'	"z"
1	'*'	Remove the last character	""
2	'#'	Duplicate the string	""
The final result is "". Since index k = 0 is out of bounds, the output is '.'.



Constraints:

1 <= s.length <= 10^5
s consists of only lowercase English letters and special characters '*', '#', and '%'.
0 <= k <= 10^15
The length of result after processing s will not exceed 10^15.
*/
#include <iostream>
using namespace std;

class Solution
{
public:
    char processStr(string s, long long k)
    {
        int n = s.size();
        long long l = 0;
        // consturctin the length of sting rather then actula string ->
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                if (l > 0)
                    l--;
            }
            else if (s[i] == '#')
            {
                l = l * 2;
            }
            else if (s[i] == '%')
            {
                // reverse case no chgne in l
                continue;
            }
            else
            {
                // s[i]>='a' && s[i]<='z'
                l++;
            }
        }

        if (k >= l)
        {
            return '.';
        }
        // trying to ca[ture the k th value by rewverse tracking the strign
        for (int i = n - 1; i >= 0; --i)
        {
            if (s[i] == '*')
            {
                l++;
                // k will remain same
            }
            else if (s[i] == '#')
            {
                // dupklication step l reduce to half as it was increasedd to l*2
                l = l / 2;
                k = (k >=l) ? k - l : k;
            }
            else if (s[i] == '%')
            {
                // reverser => no change in l
                k = l - k - 1;
            }
            else
            {
                // s[i]>='a' && s[i]<='z'
                l--;
            }
            if (k == l)
            {
                return s[i];
            }
        }
        return '.';
    }
};
int main()
{
    string s =  "a#b%*";
    int k = 1;
    Solution sol;
    char v = sol.processStr(s, k);
    cout << "Answer is: " << v << endl;
}