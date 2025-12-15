#include<iostream>
using namespace std;


class Solution{

  public:
    queue<int>reverseQueue(queue<int> q){
      stack<int>temp;
      while(!q.empty())
      {
      temp.push(q.front());
      q.pop();}
      while (!temp.empty()) {
        q.push(temp.top());
        temp.pop();
      
      }
        return q;
    }
  
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        queue<int> q;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            q.push(x);
        }
        Solution sol;
        q = sol.reverseQueue(q);

        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << "\n";
    }

    return 0;
}