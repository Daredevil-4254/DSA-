#include <iostream>
using namespace std;
vector<string> printPattern(int n) {
  // Write your code here
  vector<string> ans;
  // ven rows

  for (int i = 0; i < n; i += 2) {
    string row = "";
    int start = i * n + 1;
    for (int j = 0; j < n; j++) {
      row += to_string(start + j);
      if (j != n - 1)
        row += " ";
    }
     ans.push_back(row);
  }
 

  for (int i = n - 1; i >= 0; i--) {
    if (i % 2 == 0) {
      string row = "";
      ;
      int start = i * n + 1;
      for (int j = 0 j < n; j++) {
        row += to_string(start + j);
        if (j != n - 1)
          row += " ";
      }

      ans.push_back(row);
    }
  }

  return ans;
}