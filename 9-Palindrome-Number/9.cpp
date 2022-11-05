/**
 * @file 9.cpp
 * @author Duy M. Nguyen (duy.nm.1998@gmail.com)
 * @brief https://leetcode.com/problems/palindrome-number/
 * @date 00:45 15/10/22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <stdio.h>

using namespace std;

/**
 * @brief Check if a number is palindrome
 *
 * @param x - The input number
 * @return true if x is palindrome
 * @return false otherwise
 */
bool isPalindrome(int x) {
    if (x >= 0 && x < 10) {
        return true;
    }
    if (x < 0 || x % 10 == 0) {
        return false;
    }
    int reverseNumber = 0;
    while (true) {
        reverseNumber = reverseNumber * 10 + x % 10;
        x = x / 10;
        if (x <= reverseNumber) {
            break;
        }
    }
    cout << x << endl;
    cout << reverseNumber << endl;
    return reverseNumber == x || reverseNumber / 10 == x;
}

int main() {
    bool isPalin = isPalindrome(0);
    cout << isPalin << endl;
    return 0;
}
