/**
 * @file 20.cpp
 * @author Duy M. Nguyen (duy.nm.1998@gmail.com)
 * @brief https://leetcode.com/problems/valid-parentheses/
 * @date 00:44 15/10/22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

bool isValid(string s) {
    string stack = "";
    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            stack = stack + ch;
        } else {
            if ((ch == ')' && stack.back() == '(') || (ch == ']' && stack.back() == '[') || (ch == '}' && stack.back() == '{')) {
                stack.pop_back();
            } else {
                return false;
            }
        }
    }
    return stack.size() == 0;
}

int main(int argc, char const *argv[]) {
    string s = "{()[]}[]{(}";
    cout << isValid(s) << endl;
    return 0;
}
