
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        // Direction vectors: North, East, South, West
        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};
        
        // Use a set for O(log N) lookup. 
        // For O(1), use unordered_set with a custom hash for pair<int, int>.
        set<pair<int, int>> obstacleSet;
        for (const auto& obs : obstacles) {
            obstacleSet.insert({obs[0], obs[1]});
        }
        
        int x = 0, y = 0, dir = 0;
        int maxDistSq = 0;
        
        for (int cmd : commands) {
            if (cmd == -1) {
                // Turn right
                dir = (dir + 1) % 4;
            } else if (cmd == -2) {
                // Turn left
                dir = (dir + 3) % 4;
            } else {
                // Move forward k units
                for (int i = 0; i < cmd; ++i) {
                    int nextX = x + dx[dir];
                    int nextY = y + dy[dir];
                    
                    if (obstacleSet.find({nextX, nextY}) == obstacleSet.end()) {
                        x = nextX;
                        y = nextY;
                        maxDistSq = max(maxDistSq, x * x + y * y);
                    } else {
                        // Hit an obstacle, stop moving for this command
                        break;
                    }
                }
            }
        }
        
        return maxDistSq;
    }
};