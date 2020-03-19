//
// Created by 孙卓文 on 2020/3/19.
//

#ifndef LEETCODE_33_VERIFYPOSTORDER_H
#define LEETCODE_33_VERIFYPOSTORDER_H
bool verifyPostorder(vector<int>& postorder, int start, int end);
bool verifyPostorder(vector<int>& postorder) {
    if (postorder.empty()) return false;
    int len = postorder.size();
    return verifyPostorder(postorder, 0, len);
}
bool verifyPostorder(vector<int>& postorder, int start, int end) {
    if (start == end) return false;
    int root = postorder[end-1];
    int i = 0;
    for (; i < end-1; ++i) {
        if (postorder[i] > root)
            break;
    }
    int j = i;
    for (; j < end-1; ++j) {
        if (postorder[j] < root)
            return false;
    }
    bool left = true;
    if (i > 0) left = verifyPostorder(postorder, 0, i);
    bool right = true;
    if (i < end - 1) right = verifyPostorder(postorder, i, end-1);
    return left && right;
}
#endif //LEETCODE_33_VERIFYPOSTORDER_H
