#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() <= 2) return nums.size();

    int index = 2;
    for (int i = 2; i < nums.size(); i++) {
        if (nums[i] != nums[index - 2]) {
            nums[index++] = nums[i];
        }
    }
    return index;
}

// Driver function
int main() {
    vector<int> nums = {0,0,1,1,1,1,2,3,3};

    int newLength = removeDuplicates(nums);

    cout << "New length: " << newLength << endl;
    cout << "Array after removing extra duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
