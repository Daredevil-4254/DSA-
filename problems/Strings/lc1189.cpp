/*Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.

You can use each character in text at most once. Return the maximum number of instances that can be formed.

 

Example 1:



Input: text = "nlaebolko"
Output: 1
Example 2:



Input: text = "loonbalxballpoon"
Output: 2
Example 3:

Input: text = "leetcode"
Output: 0
 

Constraints:

1 <= text.length <= 104
text consists of lower case English letters only.

*/
#include<iostream>
using namespace std;

class Solution{
    public:
        int maxNumberOfBalloons(string text) {
            unordered_map<char,int>freq;
            for(auto &c:text){
                if(c=='b'|| c=='a'|| c=='l'|| c=='o'|| c=='n'){
                    freq[c]++;
                }
            }
            int b= freq['b'];
            int a= freq['a'];
            int l= freq['l']/2;
            int o= freq['o']/2;
            int n= freq['n'];

            return min({b,a,l,o,n});

        }


};

int main(){
    string text="lnoonballxballpoon";
    Solution sol;
    
    int ans=sol.maxNumberOfBalloons(text);
    cout<<"No. of ballons are :"<<ans<<endl;;

}