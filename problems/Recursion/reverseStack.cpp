#include<iostream>
#include<stack>
using namespace std;

class Solution {
    public:
        void reverseStack(stack<int>&st){
            //base case
            if(st.empty()){
                return;
            }
            //recursion work
            int top=st.top();
            st.pop();
            reverseStack(st);// function call 
            // Work Done at Each Recursive Step
            stack<int>temp; //o(n) auxiliary space 
            while(!st.empty()){
                temp.push(st.top());
                st.pop();
            }
            temp.push(top);
            while(!temp.empty()){
                st.push(temp.top());
                temp.pop();
            }

        }
};