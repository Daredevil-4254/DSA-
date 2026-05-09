#include <iostream>
#include <vector>
using namespace std;

void findSubsets(vector<int> &arr, vector<int> &ans, int i)
{
    int n = arr.size();

    if (i == n)
    {
        cout << "{ ";
        for (int it : ans)
        {
            cout << it << " ";
        }
        cout << "}" << endl;
        return;
    }
    // include the current elemt
    ans.push_back(arr[i]);
    // recursion for next element
    findSubsets(arr, ans, i + 1);
    // becktracking step to remove the current elemnt before going to next call
    // ans.pop_back();

    // moving recursion to next elemnt
    findSubsets(arr, ans, i + 1);
}
int main (){
    vector<int> arr={1,2,3};
    vector<int> ans;
    findSubsets(arr,ans,0);
    return 0;
}