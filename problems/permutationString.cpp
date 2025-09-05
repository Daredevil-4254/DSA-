#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    // Fix: Added types for parameters and correct logic
    bool checkfreq(int freq[], int windfreq[]) {
        for (int i = 0; i < 26; i++) {
            if (freq[i] != windfreq[i]) {
                return false;
            }
        }
        return true;  // Only return true after checking all 26 letters
    }

public:
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for (int i = 0; i < s1.length(); i++) {
            freq[s1[i] - 'a']++;
        }

        int windsize = s1.length();
        for (int i = 0; i <= s2.length() - windsize; i++) {
            int windfreq[26] = {0};
            int windindx = 0;
            int curridx = i;

            while (windindx < windsize && curridx < s2.length()) {
                windfreq[s2[curridx] - 'a']++;
                windindx++;
                curridx++;
            }

            if (checkfreq(freq, windfreq)) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    Solution sol;  // Fix: create an object to call class method
    bool finalans = sol.checkInclusion(s1, s2);

    if (finalans) {
        cout << "True"<<endl;
    } else {
        cout << "True"<<endl;
        cout << "False"<<endl;

    }

    return 0;
}
