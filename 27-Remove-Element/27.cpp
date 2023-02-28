/**
 * @file 27.cpp
 * @author Duy M. Nguyen (duy.nm.1998@gmail.com)
 * @brief https://leetcode.com/problems/remove-element/
 * @date 00:44 15/10/22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int removeElement(vector<int> &nums, int val) {
    int count_val = 0;

    for (int num : nums)
        if (num == val)
            count_val += 1;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == val) {
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] != val) {
                    nums[i] = nums[j];
                    nums[j] = val;
                    break;
                }
            }
        }
    }

    return nums.size() - count_val;
}

int main(int argc, char const *argv[]) {
    vector<int> nums = {1, 2, 3, 4, 5, 2, 4, 3, 2, 5, 6, 2, 1, 2, 5, 2};
    for (int num : nums)
        cout << num << " ";
    cout << endl;
    cout << removeElement(nums, 20) << endl;
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}
