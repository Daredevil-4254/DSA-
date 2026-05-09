
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool uniqOccr(vector<int>& arr) {
    int freq[2001] = {0};  // Covers range from -1000 to +1000

    // Count frequency
    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i] + 1000]++;
    }

    // Store non-zero frequencies
    vector<int> counts;
    for (int i = 0; i < 2001; i++) {
        if (freq[i] > 0)
            counts.push_back(freq[i]);
    }

    // Check for duplicate frequencies
    for (int i = 0; i < counts.size(); i++) {
        for (int j = i + 1; j < counts.size(); j++) {
            if (counts[i] == counts[j])
                return false;
        }
    }

    return true;
}

int main (){
    vector<int>arr={-1,-1,-1,2,2,3,3,3,3,3};
    bool finalans=uniqOccr(arr);
    cout<<finalans;
}