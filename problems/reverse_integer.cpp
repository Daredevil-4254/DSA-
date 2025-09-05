#include <iostream>
#include <limits.h>  // Required for INT_MAX and INT_MIN

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        
        while (x != 0) {
            int last_digit = x % 10;

            // Correct Overflow Check
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && last_digit > 7)) return 0;
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && last_digit < -8)) return 0;
            
            ans = (ans * 10) + last_digit;
            x /= 10;
        }
        
        return ans;
    }
};

// Test cases
int main() {
    Solution sol;
    
    cout << sol.reverse(123) << endl;    // Output: 321
    cout << sol.reverse(-123) << endl;   // Output: -321
    cout << sol.reverse(120) << endl;    // Output: 21
    cout << sol.reverse(0) << endl;      // Output: 0
    cout << sol.reverse(1534236469) << endl;  // Output: 0 (overflow)

    return 0;
}
