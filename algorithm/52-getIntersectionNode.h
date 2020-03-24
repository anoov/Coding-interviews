//
// Created by 孙卓文 on 2020/3/24.
//

#ifndef LEETCODE_52_GETINTERSECTIONNODE_H
#define LEETCODE_52_GETINTERSECTIONNODE_H

#include "listNode.h"
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (!headA || !headB) return nullptr;
    auto nodeA = headA;
    int countA = 0;
    while (nodeA) {
        countA++;
        nodeA = nodeA->next;
    }
    auto nodeB = headB;
    int countB = 0;
    while (nodeB) {
        countB++;
        nodeB = nodeB->next;
    }
    if (countA >= countB) {
        for (int i = 0; i < (countA-countB); ++i) {
            headA = headA->next;
        }
        while (headA != headB) {
            if (!headA || !headB) return nullptr;
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
    else {
        for (int i = 0; i < (countB - countA); ++i) {
            headB = headB->next;
        }
        while (headB != headA) {
            if (!headA || !headB) return nullptr;
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
    return nullptr;
}
#endif //LEETCODE_52_GETINTERSECTIONNODE_H
