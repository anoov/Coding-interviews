//
// Created by 孙卓文 on 2020/3/18.
//

#ifndef LEETCODE_27_MIRRORTREE_H
#define LEETCODE_27_MIRRORTREE_H

#include "TreeNode.h"
void mirrorTreeCore(TreeNode *root) {
    if (root == nullptr) return;
    if (root->left == nullptr && root->right == nullptr) return;
    swap(root->left, root->right);
    if (root->left) mirrorTreeCore(root->left);
    if (root->right) mirrorTreeCore(root->right);
}

TreeNode* mirrorTree(TreeNode* root) {
    auto ret = root;
    mirrorTreeCore(root);
    return ret;
}

#endif //LEETCODE_27_MIRRORTREE_H
