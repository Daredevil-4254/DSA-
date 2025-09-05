 //leetcode 443. String Compression
 #include<iostream>
using namespace std ;


class Solution {
public:
    int compress(vector<char>& chars) {
        vector<int >freq={0};
        for(int i =0; i<chars.size(); i++){
            if(chars[i]>='A'||chars[i]<='Z')
            {
                freq[chars[i]-'A']++;
            }

        }
    }
};