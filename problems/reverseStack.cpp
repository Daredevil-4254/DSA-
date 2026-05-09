#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution
{
public:
    void reverseStack(stack<int> &st)
    {
        // code here
        int n = st.size();
        vector<int> temp;
        while (!st.empty())
        {
            temp.push_back(st.top());
            st.pop();
        }
        for (int i = 0; i < n;i++){
            st.push(temp[i]);
        }
    }
};

void printStack(stack<int> st) { // Passed by value so the original stack is not emptied
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    stack<int> st;
    for (int val : {1, 2, 3, 4, 5}) {
        st.push(val);
    }
    
    cout << "Original Stack (top to bottom): ";
    printStack(st);

    Solution sol;
    sol.reverseStack(st);
    
    cout << "Reversed Stack (top to bottom): ";
    printStack(st);
}