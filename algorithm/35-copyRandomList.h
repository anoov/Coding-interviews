//
// Created by 孙卓文 on 2020/3/20.
//

#ifndef LEETCODE_35_COPYRANDOMLIST_H
#define LEETCODE_35_COPYRANDOMLIST_H
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
Node* copyRandomList(Node* head) {
    //第一步
    auto node = head;
    while (node) {
        auto new_node = new Node(node->val);
        new_node->next = nullptr;
        new_node->random = nullptr;
        new_node->next = node->next;
        node->next = new_node;
        node = new_node->next;
    }
    //第二步
    node = head;
    while (node) {
        auto clone = node->next;
        if (node->random) {
            clone->random = node->random->next;
        }
        node = clone->next;
    }
    //第三步
    node = head;
    Node* cloneHead = nullptr;
    Node* cloneNode = nullptr;
    if (node) {
        cloneHead = cloneNode = node->next;
        node->next = cloneNode->next;
        node = node->next;
    }
    while (node) {
        cloneNode ->next = node->next;
        cloneNode = cloneNode->next;
        node->next = cloneNode->next;
        node = node->next;
    }
    return cloneHead;
}
#endif //LEETCODE_35_COPYRANDOMLIST_H
