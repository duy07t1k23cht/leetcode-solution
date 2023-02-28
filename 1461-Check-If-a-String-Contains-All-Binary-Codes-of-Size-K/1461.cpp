#include <algorithm>
#include <cmath>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

class Solution {
public:
    bool hasAllCodes(std::string s, int k) {
        int allBiCodes = 1 << k;
        if (s.length() < allBiCodes + k - 1)
            return false;

        std::vector<std::string> binGot = {};

        std::string subString = s.substr(0, k);
        for (int i = 0; i <= s.length() - k; i++) {
            if (s.length() - i < allBiCodes + k - 1)
                return false;
            if (i > 0) {
                subString.erase(0, 1).push_back(s[i + k - 1]);
            }
            if (std::find(binGot.begin(), binGot.end(), subString) == binGot.end()) {
                allBiCodes--;
                binGot.push_back(subString);
                if (allBiCodes == 0) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main(int argc, char const *argv[]) {
    Solution solution = Solution();
    std::cout << solution.hasAllCodes("0", 20);
    return 0;
}
