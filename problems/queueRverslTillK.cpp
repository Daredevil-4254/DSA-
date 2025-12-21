#include <iostream>
using namespace std;

void reverse(queue<int> &q, int k)
{
    if (k == 0 || q.empty()) return;

    stack<int> s;


    // Step 1: push first k elements into stack
    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: push stack elements back into queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Step 3: move remaining elements to the back
    int remaining = q.size() - k;
    for (int i = 0; i < remaining; i++) {
        q.push(q.front());
        q.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    int k = 3;

    reverse(q, k);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;}