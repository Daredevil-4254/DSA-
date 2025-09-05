#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;  // index where next character should go
        for (int j = 0; j < s.length(); j++) {
            s[i] = s[j];
            // if duplicate with the previous, remove by going back
            if (i > 0 && s[i] == s[i - 1]) {
                i -= 2;
            }
            i++;
        }
        return s.substr(0, i);  // return only the valid part
    }
};
////different approach -> temp string use {stack based approach}!

// string removeDuplicates(string s) {
//     string result = "";
//     for (char ch : s) {
//         if (!result.empty() && result.back() == ch) {
//             result.pop_back();  // remove last char if duplicate
//         } else {
//             result.push_back(ch);  // add current char
//         }
//     }
//     return result;
// }
int main() {
    Solution sol;
    string s = "abbaca";
    cout << "Final string: " << sol.removeDuplicates(s) << endl;
    return 0;
}


