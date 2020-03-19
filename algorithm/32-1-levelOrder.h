//
// Created by 孙卓文 on 2020/3/19.
//

#ifndef LEETCODE_32_1_LEVELORDER_H
#define LEETCODE_32_1_LEVELORDER_H

#include "TreeNode.h"
vector<int> levelOrder(TreeNode* root) {
    vector<int> vec;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode *tmp = q.front();
        vec.push_back(tmp->val);
        q.pop();
        if (tmp->left)
            q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
    return vec;
}
#endif //LEETCODE_32_1_LEVELORDER_H
