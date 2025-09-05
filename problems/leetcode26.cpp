#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int index = 1; // first element is always unique
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[index - 1]) {
            nums[index] = nums[i];
            index++;
        }
    }
    return index; // new length
}


int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    int newLength = removeDuplicates(nums);

    cout << "Number of unique elements: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
