/**
 * @file 35.cpp
 * @author Duy M. Nguyen (duy.nm.1998@gmail.com)
 * @brief https://leetcode.com/problems/search-insert-position/submissions/
 * @date 15:31 17/10/22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <stdio.h>
#include <vector>

/**
 * @brief Main Solution class
 *
 */
class Solution {
public:
    /**
     * @brief Using binary search to find the first position which element is larger than target.
     *
     * @param nums - The input sequence of numbers
     * @param target - The target number
     * @return int
     */
    int searchInsert(std::vector<int> &nums, int target) {
        int first = 0;
        int last = nums.size() - 1;

        while (first <= last) {
            int mid = (first + last) / 2;
            if (nums.at(mid) < target) {
                first = mid + 1;
            } else if (nums.at(mid) > target) {
                last = mid - 1;
            } else { // nums[mid] == target
                return mid;
            }
        }

        return first;
    }
};

int main(int argc, char const *argv[]) {
    Solution solution = Solution();
    std::vector<int> nums = {1, 3, 5, 6};

    std::cout << solution.searchInsert(nums, 7);
    return 0;
}
