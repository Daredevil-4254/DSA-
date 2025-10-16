#include<iostream>
using namespace std;
class Solution {
private:
     void letterCombinationsHelper(vector<string>&ans, string output, int index, string mapping[10], string digits){

        // base case
        if(index>=digits.size()){
            ans.push_back(output);
            return;
        }

        // precal.
        int number=digits[index] - '0';
        string temp = mapping[number];

        for(int i =0; i<temp.length(); i++){
            output.push_back(temp[i]);
            // inclusion call
            letterCombinationsHelper(ans, output, index+1, mapping,digits);
            output.pop_back();

        }

     }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans={""};
        if(digits.length()==0)
         return ans;
        string output="";
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        letterCombinationsHelper(ans,output,index,mapping,digits);
        return ans;
        
    }
};

int main(){
    string digit="23";
    Solution sol;
    vector<string>finalAns = sol.letterCombinations(digit);
    // Optionally print the results
    for(const string& s : finalAns) {
        cout << s << " ";
    }
    cout << endl;
}