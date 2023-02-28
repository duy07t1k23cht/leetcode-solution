#include <iostream>
#include <stdio.h>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        ListNode *prev;
        prev = head;

        while (head != nullptr) {
            head = head->next;
            head->next = prev;
            prev = head;
        }
    }
};