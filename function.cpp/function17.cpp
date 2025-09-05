#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> findPairs(int arr[], int size, int sum) {
    vector<pair<int, int>> result;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == sum) {
                int a = min(arr[i], arr[j]);
                int b = max(arr[i], arr[j]);
                result.push_back({a, b});
            }
        }
    }

    // Sort the pairs as required
    sort(result.begin(), result.end());

    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int sum = 5;

    vector<pair<int, int>> pairs = findPairs(arr, size, sum);

    for (auto p : pairs) {
        cout << p.first << " , " << p.second << endl;
    }

    return 0;
}