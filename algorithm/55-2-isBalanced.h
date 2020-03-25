//
// Created by 孙卓文 on 2020/3/25.
//

#ifndef LEETCODE_55_2_ISBALANCED_H
#define LEETCODE_55_2_ISBALANCED_H
int maxDepth(TreeNode* root) {
    if (!root) return 0;
    int nLeft = maxDepth(root->left);
    int nRight = maxDepth(root->right);
    return (nLeft > nRight)? (nLeft+1) : (nRight+1);
}
bool isBalanced(TreeNode* root) {
    if (root == nullptr) return true;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    int diff = left - right;
    if (diff > 1 || diff < -1)
        return false;
    return isBalanced(root->left) && isBalanced(root->right);
}

#endif //LEETCODE_55_2_ISBALANCED_H
