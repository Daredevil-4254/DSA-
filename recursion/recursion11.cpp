#include <iostream>
using namespace std;

// Recursive helper function with indices
bool isPalindrome(string word, int i) {
    int size = word.size();
    
    if (i >= size / 2) return true;  // Base case: checked all pairs
    if (word[i] != word[size - i - 1]) return false;

    return isPalindrome(word, i + 1);  // Recursive call with next index
}

int main() {
    string word;
    cout << "Enter the word: ";
    cin >> word;

    if (isPalindrome(word, 0)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }
}
