//
// Created by 孙卓文 on 2020/3/17.
//

#ifndef LEETCODE_22_GETKTHFROMEND_H
#define LEETCODE_22_GETKTHFROMEND_H
#include "listNode.h"
ListNode* getKthFromEnd(ListNode* head, int k) {
    if (head == nullptr || k == 0) return head;
    if (k < 0) return nullptr;
    auto first = head;
    auto second = head;
    for (int i = 0; i < k-1; i++) {
        if (first->next != nullptr)
            first = first->next;
        else
            return nullptr;
    }
    while (first->next != nullptr) {
        first = first->next;
        second = second->next;
    }
    return second;

}
#endif //LEETCODE_22_GETKTHFROMEND_H
