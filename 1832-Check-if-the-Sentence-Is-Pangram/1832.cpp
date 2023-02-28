/**
 * @file 1832.cpp
 * @author Duy M. Nguyen (duy.nm.1998@gmail.com)
 * @brief https://leetcode.com/problems/check-if-the-sentence-is-pangram/
 * @date 15:03 17/10/22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <stdio.h>
#include <string>

/**
 * @brief Main Solution class
 *
 */
class Solution {
public:
    /**
     * @brief Do not have too much to say
     *
     * @param sentence
     * @return true
     * @return false
     */
    bool checkIfPangram(std::string sentence) {
        for (char c = 'a'; c <= 'z'; c++) {
            if (sentence.find(c) == std::string::npos)
                return false;
        }

        return true;
    }
};

int main(int argc, char const *argv[]) {
    Solution solution = Solution();
    std::string sentence = "thequickbrownfoxjumpsoverthelazydog";
    std::cout << solution.checkIfPangram(sentence) << std::endl;
    return 0;
}
