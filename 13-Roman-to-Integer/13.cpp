#include <map>
#include <stdio.h>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        std::map<char, int> d;
        d['I'] = 1;
        d['V'] = 5;
        d['X'] = 10;
        d['L'] = 50;
        d['C'] = 100;
        d['D'] = 500;
        d['M'] = 1000;

        int result = 0;
        for (std::string::size_type i = 0; i < s.size(); ++i) {
            int sign = (i < s.size() - 1 && d[s[i]] < d[s[i + 1]]) ? -1 : 1;
            result += sign * d[s[i]];
        }

        return result;
    }
};