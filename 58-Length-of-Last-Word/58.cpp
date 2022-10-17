/**
 * @file 58.cpp
 * @author Duy M. Nguyen (duy.nm.1998@gmail.com)
 * @brief https://leetcode.com/problems/length-of-last-word/
 * @date 18:13 17/10/22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <stdio.h>
#include <string>

/**
 * @brief Main Solutiion class
 *
 */
class Solution {
public:
    int lengthOfLastWord(std::string s) {
        while (s.at(s.size() - 1) == ' ') {
            s.pop_back();
        }
        int index = s.find_last_of(" ");
        return index == std::string::npos ? s.size() : s.size() - (index + 1);
    }
};

int main(int argc, char const *argv[]) {
    Solution solution = Solution();
    std::cout << solution.lengthOfLastWord("   ");
    return 0;
}
