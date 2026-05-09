#include <iostream>
using namespace std;

bool checkPalindrome(string &s, int i, int j) {
    if (i >= j) return true; // base case: checked all characters
    if (s[i] != s[j]) return false; // mismatch found
    return checkPalindrome(s, i + 1, j - 1); // recursive step
}

int main() {
    string s = "dad";
    bool ans = checkPalindrome(s, 0, s.length() - 1);
    ans ? cout << "True\n" : cout << "False\n";
}
