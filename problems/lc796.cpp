/*Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.


Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false


Constraints:
soln:

1 <= s.length, goal.length <= 100
s and goal consist of lowercase English letters.
soln:
1. check if both lengts are equal ;
2.use the built in function 'string_name.substr' cab be used to retur the substring of the string in order to apply the brute fore approach ;
3. syntax of substr is string_name.substr(starting_index, length_of_substring);
4. for(i=0 to n ){
if(s.substr(i)+s[0]==goal)return true; 
else{
return false;
}
}

*/

#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool rotateString(string s, string goal)
    {   
        int n=s.length() ;
        // 1. Check if lengths are different. If so, they can't be rotations.
        if (n!= goal.length()) {
            return false;
        }

               // Try every possible rotation offset 'i'
        for (int i = 0; i < n; i++) {
            bool match = true;
            for (int j = 0; j < n; j++) {
                // Use modulo arithmetic to simulate the rotation
                if (s[(i + j) % n] != goal[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                return true;
            }
        }
        return false;
    }
};