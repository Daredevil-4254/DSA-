// You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both
// these arrays are sorted in non-decreasing order. You have to find the
// intersection of these two arrays.
// Intersection of two arrays is an array that consists of all the common
// elements occurring in both arrays. Note :
// 1. The length of each array is greater than zero.
// 2. Both the arrays are sorted in non-decreasing order.
// 3. The output should be in the order of elements that occur in the original
// arrays.
// 4. If there is no intersection present then return an empty array.
#include <iostream>
#include <vector>
using namespace std;

vector<int> arrsection(vector<int> a, vector<int> b) {
    vector<int> commonelement;
    int i = 0, j = 0;

    // Find intersection using two pointers
    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            commonelement.push_back(a[i]);
            ++i;
            ++j;
        } else if (a[i] < b[j]) {
            ++i;
        } else {
            ++j;
        }
    }

    // Remove consecutive duplicates from the result
    vector<int> result;
    for (int k = 0; k < commonelement.size(); ++k) {
        if (k == 0 || commonelement[k] != commonelement[k - 1]) {
            result.push_back(commonelement[k]);
        }
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 2, 2, 3, 4};
    vector<int> b = {2, 2, 3, 3};

    vector<int> finalans = arrsection(a, b);

    for (int val : finalans) {
        cout << val << " ";
    }

    return 0;
}

    