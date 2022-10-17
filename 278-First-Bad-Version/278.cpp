#include <iostream>
#include <stdio.h>

bool isBadVersion(int version);

class Solution {
public:
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