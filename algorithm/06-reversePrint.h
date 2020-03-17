//
// Created by 孙卓文 on 2020/3/17.
//

#ifndef LEETCODE_06_REVERSEPRINT_H
#define LEETCODE_06_REVERSEPRINT_H
vector<int> reversePrint(ListNode* head) {
    stack<int> st;
    while (head != nullptr) {
        st.push(head->val);
        head = head->next;
    }
    vector<int> vec;
    while (!st.empty()){
        vec.push_back(st.top());
        st.pop();
    }
    return vec;
}
#endif //LEETCODE_06_REVERSEPRINT_H
