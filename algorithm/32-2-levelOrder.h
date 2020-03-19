//
// Created by 孙卓文 on 2020/3/19.
//

#ifndef LEETCODE_32_2_LEVELORDER_H
#define LEETCODE_32_2_LEVELORDER_H

#include "TreeNode.h"
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> vec;
    if (root == nullptr) return vec;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        int len = q.size();
        vector<int> vec_tmp;
        for (int i = 0; i < len; ++i) {
            auto tmp = q.front();
            q.pop();
            vec_tmp.push_back(tmp->val);
            if (tmp->left) q.push(tmp->left);
            if (tmp->right) q.push(tmp->right);
        }
        vec.push_back(vec_tmp);
    }
    return vec;
}
#endif //LEETCODE_32_2_LEVELORDER_H
