/**
 * @file 14.cpp
 * @author Duy M. Nguyen (duy.nm.1998@gmail.com)
 * @brief https://leetcode.com/problems/longest-common-prefix/
 * @date 00:43 15/10/22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

/**
 * @brief Return the longest common prefix of a list of strings
 *
 * @param strs - The input list of strings
 * @return string
 */
string longestCommonPrefix(vector<string> &strs) {
    // Return the one and only string if the list only has 1 string.
    if (strs.size() == 1) {
        return strs[0];
    }

    string longestCommonPrefix = strs[0];

    // Repeat deleteing the last character until we find the first common prefix
    while (true) {
        bool isLongestCommonPrefix = true;
        for (int i = 0; i < strs.size(); i++) {
            if (strs[i].find(longestCommonPrefix) != 0) {
                longestCommonPrefix.pop_back();
                isLongestCommonPrefix = false;
                break;
            }
        }
        if (isLongestCommonPrefix || longestCommonPrefix.size() == 0) {
            break;
        }
    }

    return longestCommonPrefix;
}

int main() {
    vector<string> strs = {"dog", "racecar", "car"};
    // cout << &strs << endl;
    string result;
    result = longestCommonPrefix(strs);
    cout << result << endl;

    return 0;
}