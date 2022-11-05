/**
 * @file 2437.cpp
 * @author Duy M. Nguyen (duy.nm.1998@gmail.com)
 * @brief https://leetcode.com/problems/number-of-valid-clock-times/description/
 * @date 09:02 05/11/22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <stdio.h>

class Solution {
public:
    int countTime(std::string time) {
        int hResult = 1;
        int mResult = 1;

        if (time.at(0) == '?' && time.at(1) == '?') {
            hResult = 24;
        } else if (time.at(0) == '?') {
            hResult = (time.at(1) == '0' || time.at(1) == '1' || time.at(1) == '2' || time.at(1) == '3') ? 3 : 2;
        } else if (time.at(1) == '?') {
            hResult = (time.at(0) == '0' || time.at(0) == '1') ? 10 : 4;
        } else {
            hResult = 1;
        }

        if (time.at(3) == '?' && time.at(4) == '?') {
            mResult = 60;
        } else if (time.at(3) == '?') {
            mResult = 6;
        } else if (time.at(4) == '?') {
            mResult = 10;
        } else {
            mResult = 1;
        }

        return hResult * mResult;
    }
};

int main(int argc, char const *argv[]) {
    Solution solution = Solution();
    std::cout << solution.countTime("?2:16") << std::endl;
    return 0;
}
