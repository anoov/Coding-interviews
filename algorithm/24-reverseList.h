//
// Created by 孙卓文 on 2020/3/17.
//

#ifndef LEETCODE_24_REVERSELIST_H
#define LEETCODE_24_REVERSELIST_H
#include "listNode.h"
ListNode* reverseList(ListNode* head) {
    if (head == nullptr)
        return nullptr;
    ListNode* left = nullptr;
    ListNode* mid = nullptr;
    auto right = head;
    while (right) {
        left = mid;
        mid = right;
        right = right->next;
        mid->next = left;
    }
    return mid;
}
#endif //LEETCODE_24_REVERSELIST_H
