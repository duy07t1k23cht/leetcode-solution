/**
 * @file 278.cpp
 * @author Duy M. Nguyen (duy.nm.1998@gmail.com)
 * @brief https://leetcode.com/problems/first-bad-version/
 * @date 08:20 05/11/22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <stdio.h>

bool isBadVersion(int version);

class Solution {
public:
    /**
     * @brief Using binary search
     *
     * @param n
     * @return int - The bad version
     */
    int firstBadVersion(int n) {
        unsigned int first = 1;
        unsigned int last = n;

        while (first <= last) {
            unsigned int mid = (first + last) / 2;
            if (isBadVersion(mid)) {
                last = mid - 1;
            } else {
                first = mid + 1;
            }
        }

        return (int)last + 1;
    }
};