/**
 * @file 21.cpp
 * @author Duy M. Nguyen (duy.nm.1998@gmail.com)
 * @brief https://leetcode.com/problems/merge-two-sorted-lists/
 * @date 08:09 16/10/22
 *
 * @copyright Copyright (c) 2022
 *
 */
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

void insert(ListNode **root, int val) {
    ListNode *temp = new ListNode;
    ListNode *ptr;
    temp->val = val;
    temp->next = nullptr;

    if (*root == nullptr)
        *root = temp;
    else {
        ptr = *root;
        while (ptr->next != nullptr)
            ptr = ptr->next;
        ptr->next = temp;
    }
}

ListNode *createListFromSequence(std::vector<int> sequence) {
    ListNode *list = nullptr;
    for (int val : sequence) {
        insert(&list, val);
    }
    return list;
}

void printList(ListNode *list) {
    while (list != nullptr) {
        std::cout << list->val << " ";
        list = list->next;
    }
    std::cout << std::endl;
}

/**
 * @brief The main solution class which is submited.
 *
 */
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        // If one of two list is empty, return the other list immediately
        if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;

        // A buffer that walk through both lists
        ListNode *head = nullptr;

        // Start at the list which has the lower first value
        if (list1->val < list2->val) {
            head = list1;
            // Always pick the lower value to be the next point.
            while (list2 != nullptr) {
                if (head->next == nullptr || list2->val < head->next->val) {
                    ListNode *headNext = head->next;
                    head->next = list2;
                    list2 = headNext;
                }
                head = head->next;
            }
            return list1;
        } else {
            head = list2;
            // Same thing as above
            while (list1 != nullptr) {
                if (head->next == nullptr || list1->val < head->next->val) {
                    ListNode *headNext = head->next;
                    head->next = list1;
                    list1 = headNext;
                }
                head = head->next;
            }
            return list2;
        }
    }
};

int main(int argc, char const *argv[]) {
    std::vector<int> sequence1 = {1, 2, 4, 4, 5, 6, 6, 8, 9};
    std::vector<int> sequence2 = {1, 3, 4, 5, 5, 5, 5, 9};
    ListNode *list1 = createListFromSequence(sequence1);
    ListNode *list2 = createListFromSequence(sequence2);

    Solution solution = Solution();
    ListNode *result = solution.mergeTwoLists(list1, list2);

    printList(result);

    return 0;
}
