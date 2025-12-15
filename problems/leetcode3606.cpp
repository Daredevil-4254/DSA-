#include <iostream>
using namespace std;

class Solution {
public:
  bool isValid(const string &ith) {
    if (ith.empty()) return false;

    for (char i : ith) {
        if (!(
              (i >= 'A' && i <= 'Z') ||
              (i >= 'a' && i <= 'z') ||
              (i >= '0' && i <= '9') ||
              (i == '_')
             )) {
            return false;
        }
    }
    return true;
}

vector<pair<int, string>> temp;
  unordered_map<string, int>priority={
    {"electronics", 0},
    {"grocery", 1},
    {"pharmacy", 2},
    {"restaurant", 3}
  };
  vector<string> validateCoupons(vector<string> &code,
                                 vector<string> &businessLine,
                                 vector<bool> &isActive) {

    int n = code.size();
    for (int i = 0; i < n; i++) {
      string ith = code[i];
      if (isValid(ith) &&
          (businessLine[i] == "electronics" || businessLine[i] == "grocery" ||
           businessLine[i] == "pharmacy" || businessLine[i] == "restaurant") &&
          isActive[i] == true) {
        temp.push_back({priority[businessLine[i]], code[i]});

      }
    }
   sort(temp.begin(), temp.end(), [](auto &a, auto &b) {
    if (a.first != b.first)
        return a.first < b.first;   // businessLine first
    return a.second < b.second;     // code second
});
vector<string> ans;
for (auto &p : temp)
    ans.push_back(p.second);
return ans;

  }
};

int main(){
  vector<string>code={"SAVE20","","PHARMA5","SAVE@20"};
  vector<string>businessLine={"restaurant","grocery","pharmacy","restaurant"};
  vector<bool>isActive = {true,true,true,true};
  Solution sol;   
  vector<string>finalAns=sol.validateCoupons(code,businessLine,isActive);
  for(string i :finalAns){
    cout<<i<<" ";
  }
  cout<<"\n";
}