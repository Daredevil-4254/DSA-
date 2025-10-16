#include <iostream>
#include <string>
#include <vector>
using namespace std;
void subsequenceHelper(vector<string> &ans, string str, string output,
                       int index) {
  // base case
  if (index >= str.size()) {

    if (output.length() > 0) {
      ans.push_back(output);
    }
    return;
  }
  //   inclusion call
  output.push_back(str[index]);
  subsequenceHelper(ans, str, output, index + 1);

  // exclusion call
  output.pop_back();
  subsequenceHelper(ans, str, output, index + 1);
}
vector<string> subsequences(string str) {
  vector<string> ans;
  string output = "";
  int index = 0;
  subsequenceHelper(ans, str, output, index);
  return ans;
}
int main() {
  string str = "abc";
  vector<string> ans;
  ans = subsequences(str);
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " " << endl;
  }
}