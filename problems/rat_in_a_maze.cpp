/* Game Logic :
       start postion -> (0,0)
        end position -> (n-1, n-1). where n -> size of matrix
        posibble movement direcvtions ->
        R -> (x,y+1)
        L -> (x,y-1)
        U -> (x-1,y)
        D -> (x+1,y)
        conditons for a safe move :
        1.)should not leave the matrix
        2.)visited array should be 0
        3.)m[j][k]==1(open path to move)
*/
#include <iostream>
#include <ostream>
#include <string>
using namespace std;
class Solution {
private:
  bool isSafe(int x, int y, vector<string> &ans, vector<vector<int>> &visited,
              vector<vector<int>> &maze) {
    if ((x >= 0 && x < maze.size() && (y >= 0 && y < maze.size()) &&
         (visited[x][y] == 0) && (maze[x][y] == 1))) {
      return true;
    } else {
      return false;
    }
  }
  void ratInMazeHelper(vector<string> &ans, int x, int y,
                       vector<vector<int>> &visited, vector<vector<int>> &maze,
                       string &path) {

    // base case
    if (x == maze.size() - 1 && y == maze.size() - 1) {
      ans.push_back(path);
      return;
    }
    // i have reached the x, y location  so
    visited[x][y] = 1;

    // to asuume and solve small problem for each direction

    //  for Right
    int currX = x;
    int currY = y + 1;
    if (isSafe(currX, currY, ans, visited, maze)) {
      path.push_back('R');
      ratInMazeHelper(ans, currX, currY, visited, maze, path);
      path.pop_back(); // backtracking
    }
    // for left

    currX = x;
    currY = y - 1;
    if (isSafe(currX, currY, ans, visited, maze)) {
      path.push_back('L');
      ratInMazeHelper(ans, currX, currY, visited, maze, path);
      path.pop_back(); // backtracking
    }
    //  for UP
    currX = x - 1;
    currY = y;
    if (isSafe(currX, currY, ans, visited, maze)) {
      path.push_back('U');
      ratInMazeHelper(ans, currX, currY, visited, maze, path);
      path.pop_back(); // backtracking
    }

    //  for Down
    currX = x + 1;
    currY = y;
    if (isSafe(currX, currY, ans, visited, maze)) {
      path.push_back('D');
      ratInMazeHelper(ans, currX, currY, visited, maze, path);
      path.pop_back(); // backtracking
    }

    // i have to backtrack the x, y location for recursion ,so visited is set
    // back to 0
    visited[x][y] = 0;
  }

public:
  vector<string> ratInMaze(vector<vector<int>> &maze) {
    // code here
    vector<string> ans;
    int srcx = 0;
    int srcy = 0;
    if (maze[0][0] == 0)
      return ans;
    vector<vector<int>> visited = maze;
    for (int i = 0; i < maze.size(); i++) {
      for (int j = 0; j < maze.size(); j++) {
        visited[i][j] = 0;
      }
    }

    string path = "";
    ratInMazeHelper(ans, srcx, srcy, visited, maze, path);
    sort(ans.begin(), ans.end());
    return ans;
  }
};

int main() {
  vector<vector<int>> maze = {
      {1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
  Solution sol;
  vector<string> finalAns = sol.ratInMaze(maze);
  for (int i = 0; i < finalAns.size(); i++) {
    cout << finalAns[i] << " " << endl;
  }
}