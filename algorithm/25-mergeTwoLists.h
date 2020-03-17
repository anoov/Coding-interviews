//
// Created by 孙卓文 on 2020/3/17.
//

#ifndef LEETCODE_25_MERGETWOLISTS_H
#define LEETCODE_25_MERGETWOLISTS_H
#include "listNode.h"

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == nullptr) return l2;
    if (l2 == nullptr) return l1;
    ListNode* merge = nullptr;
    if (l1->val <= l2->val) {
        merge = l1;
        l1 = l1->next;
    }
    else {
        merge = l2;
        l2 = l2->next;
    }
    auto ret = merge;
    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val <= l2->val) {
            merge->next = l1;
            merge = merge->next;
            l1 = l1->next;
        }
        else {
            merge->next = l2;
            merge = merge->next;
            l2 = l2->next;
        }
    }
    if (l1 != nullptr) merge->next = l1;
    if (l2 != nullptr) merge->next = l2;
    return ret;

}
#endif //LEETCODE_25_MERGETWOLISTS_H
