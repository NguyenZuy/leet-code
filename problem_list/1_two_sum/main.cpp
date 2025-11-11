#include <iostream>
#include <vector>
#include "solution.cpp" // chứa class Solution

using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> res = Solution::twoSum(nums, target);

    if (!res.empty()) {
        cout << "Indices: " << res[0] << ", " << res[1] << endl;
        cout << "Numbers: " << nums[res[0]] << ", " << nums[res[1]] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
