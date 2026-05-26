/*

You are given a string word. A letter is called special if it appears both in lowercase and uppercase in word.

Return the number of special letters in word.



Example 1:

Input: word = "aaAbcBC"

Output: 3

Explanation:

The special characters in word are 'a', 'b', and 'c'.

Example 2:

Input: word = "abc"

Output: 0

Explanation:

No character in word appears in uppercase.

Example 3:

Input: word = "abBCab"

Output: 1

Explanation:

The only special character in word is 'b'.



Constraints:

1 <= word.length <= 50
word consists of only lowercase and uppercase English letters.
*/

#include <iostream>
#include <string>


class Solution {
public:
    int numberOfSpecialChars(std::string word) {
        // Step 1: Initialize two vectors of size 26 with false (0)
        std::vector<bool> lower_vector(26, false);
        std::vector<bool> upper_vector(26, false);
        
        // Step 2 & 3: Scan the string and mark presence
        for (char c : word) {
            if (c >= 'a' && c <= 'z') {
                int index = c - 'a'; // Maps 'a'->0, 'b'->1, ..., 'z'->25
                lower_vector[index] = true;
            } else if (c >= 'A' && c <= 'Z') {
                int index = c - 'A'; // Maps 'A'->0, 'B'->1, ..., 'Z'->25
                upper_vector[index] = true;
            }
        }
        
        // Step 4: Count the matches where both are true
        int special_count = 0;
        for (int i = 0; i < 26; i++) {
            if (lower_vector[i] && upper_vector[i]) {
                special_count++;
            }
        }
        
        return special_count;
    }
};