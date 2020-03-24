//
// Created by 孙卓文 on 2020/3/24.
//

#ifndef LEETCODE_54_KTHLARGEST_H
#define LEETCODE_54_KTHLARGEST_H

#include "TreeNode.h"

void kthLargest(TreeNode* root, vector<int>& vec) {
    if (root) {
        if (root->left) kthLargest(root->left, vec);
        vec.push_back(root->val);
        if (root->right) kthLargest(root->right, vec);
    }
}
int kthLargest(TreeNode* root, int k) {
    vector<int> vec;
    kthLargest(root, vec);
    auto iter = vec.end()-k;
    return *iter;
}

#endif //LEETCODE_54_KTHLARGEST_H
