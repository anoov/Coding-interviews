//
// Created by 孙卓文 on 2020/3/18.
//

#ifndef LEETCODE_28_ISSYMMETRIC_H
#define LEETCODE_28_ISSYMMETRIC_H

#include "TreeNode.h"
bool isSymmetric(TreeNode *root1, TreeNode *root2) {
    if (root1 == nullptr && root2 == nullptr) return true;
    if (root1 == nullptr || root2 == nullptr) return false;
    if (root1->val != root2->val) return false;
    return isSymmetric(root1->left, root2->right) && isSymmetric(root1->right, root2->left);
}
bool isSymmetric(TreeNode* root) {
    return isSymmetric(root, root);
}

#endif //LEETCODE_28_ISSYMMETRIC_H
