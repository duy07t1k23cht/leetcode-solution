#include <cmath>
#include <iostream>
#include <stdio.h>
#include <string>

class Solution {
public:
    bool hasAllCodes(std::string s, int k) {
        int allBiCodes = std::pow(2, k);
        if (s.length() < allBiCodes + k - 1)
            return false;

        int countDistincSubstring = 0;

        for (int i = 0; i <= s.length() - k; i++) {
            std::string subString = s.substr(i, k);
            int dec = std::stoi(subString, 0, 2);
        }
        return countDistincSubstring == allBiCodes;
    }
};

int main(int argc, char const *argv[]) {
    Solution solution = Solution();
    std::cout << solution.hasAllCodes("0", 20);
    return 0;
}
