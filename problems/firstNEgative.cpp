#include <iostream>

using namespace std;

vector<int> firstNegativeInteger(vector<int> &arr, int k, int n) {
    vector<int> ans;
    queue<int> q;

    int i = 0, j = 0;
    while (j < n) {
        if (arr[j] < 0) {
            q.push(j);
        }

        if (j - i + 1 < k) {
            j++;
        } else {
            if (!q.empty()) {
                ans.push_back(arr[q.front()]);
            } else {
                ans.push_back(0);
            }

            if (!q.empty() && q.front() == i) {
                q.pop();
            }
            i++;
            j++;
        }
    }
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = firstNegativeInteger(arr, k, n);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
