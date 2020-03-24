//
// Created by 孙卓文 on 2020/3/24.
//

#ifndef LEETCODE_55_MAXDEPTH_H
#define LEETCODE_55_MAXDEPTH_H

#include "TreeNode.h"
int maxDepth(TreeNode* root) {
    if (!root) return 0;
    int nLeft = maxDepth(root->left);
    int nRight = maxDepth(root->right);
    return (nLeft > nRight)? (nLeft+1) : (nRight+1);
}
#endif //LEETCODE_55_MAXDEPTH_H
