#include <iostream>
using namespace std;

class Solution {
public:
  void Addition(vector<vector<int>> &matrixA, vector<vector<int>> &matrixB) {
    for (int i = 0; i < matrixA.size(); i++) {
      for (int j = 0; j < matrixA[i].size(); j++) {
        matrixA[i][j] += matrixB[i][j];
      }
    }
  }
};
int main() {
  Solution sol;

  vector<vector<int>> a = {{1, 2}, {3, 4}};
  vector<vector<int>> b = {{4, 3}, {2, 1}};

  sol.Addition(a, b);

  for (const auto &row : a) {
    for (int val : row) {
      cout << val << " ";
    }
    cout << endl;
  }
}