/*
You are given an m x n integer matrix grid​​​, where m and n are both even integers, and an integer k.

The matrix is composed of several layers, which is shown in the below image, where each color is its own layer:



A cyclic rotation of the matrix is done by cyclically rotating each layer in the matrix. To cyclically rotate a layer once, each element in the layer will take the place of the adjacent element in the counter-clockwise direction. An example rotation is shown below:


Return the matrix after applying k cyclic rotations to it.



Example 1:


Input: grid = [[40,10],[30,20]], k = 1
Output: [[10,20],[40,30]]
Explanation: The figures above represent the grid at every state.
Example 2:


Input: grid = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]], k = 2
Output: [[3,4,8,12],[2,11,10,16],[1,7,6,15],[5,9,13,14]]
Explanation: The figures above represent the grid at every state.


Constraints:

m == grid.length
n == grid[i].length
2 <= m, n <= 50
Both m and n are even integers.
1 <= grid[i][j] <= 5000
1 <= k <= 109

Soln:
1.Do as said

2.find the number of layers:->
    grid:mxn(even given) m=8 ,n=6(let)
    Since each layer consumes eaxaclty 2 rowd and 2 colms => no. of layers = m/2 or n/2 => 8/2==4 || 6/2==3
    in reaality 2d matrix has min(m/2 , n/2)  no. of layers

3. knowing how to travere in the layer is equally important:->
    each layer consists of 4 sides :

        top()





*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<vector<int>> rotateGrid(vector<vector<int>> &grid, int k)
    {
        int m = grid.size();
        int n = grid[0].size();
        int layers = min(m / 2, n / 2);

        for (int layer = 0; layer < layers; layer++)
        {
            vector<int> temp;
            int top = layer;
            int bottom = m - layer - 1;
            int left = layer;
            int right = n - layer - 1;
            // top row traversal
            for (int i = left; i < right; i++)
            {
                temp.push_back(grid[top][i]);
            }

            // right colm traversing
            for (int i = top; i < bottom; i++)
            {
                temp.push_back(grid[i][right]);
            }

            // bottom row traversal  right to left
            for (int i = right; i > left; i--)
            {
                temp.push_back(grid[bottom][i]);
            }
            // left traversal bottom to top

            for (int i = bottom; i > top; i--)
            {
                temp.push_back(grid[i][left]);
            }

            int norm_k = k % (temp.size());
            int indx = 0;

            rotate(temp.begin(), temp.begin() + norm_k, temp.end());
            for (int i = left; i < right; i++)
            {
                grid[top][i] = temp[indx++];
            }

            for (int i = top; i < bottom; i++)
            {
                grid[i][right] = temp[indx++];
            }

            for (int i = right; i > left; i--)
            {
                grid[bottom][i] = temp[indx++];
            }

            for (int i = bottom; i > top; i--)
            {
                grid[i][left] = temp[indx++];
            }
        }
        return grid;
    }

};

int main(){
    Solution s;
    vector<vector<int>>grid={{40,10},{30,20}};
    int k=1;
    vector<vector<int>>ans;
    ans=s.rotateGrid(grid,k);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
        
    }

}