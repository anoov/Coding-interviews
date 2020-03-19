//
// Created by 孙卓文 on 2020/3/19.
//

#ifndef LEETCODE_34_PATHSUM_H
#define LEETCODE_34_PATHSUM_H

#include "TreeNode.h"
void pathSum(TreeNode *root, int sum, vector<int>& a_path, vector<vector<int>>& path, int currentSum) ;
vector<vector<int>> pathSum(TreeNode* root, int sum) {
    vector<vector<int>> path;
    vector<int> a_path;
    if (root == nullptr) return path;
    int currentSum = 0;
    pathSum(root, sum, a_path, path, currentSum);
    return path;
}
void pathSum(TreeNode *root, int sum, vector<int>& a_path, vector<vector<int>>& path, int currentSum) {
    currentSum += root->val;
    a_path.push_back(root->val);
    bool isLeaf = (root->left == nullptr) && (root->right == nullptr);
    if (currentSum == sum && isLeaf) {
        path.push_back(a_path);
    }
    if (root->left) pathSum(root->left, sum, a_path, path, currentSum);
    if (root->right) pathSum(root->right, sum, a_path, path, currentSum);
    a_path.pop_back();
}
#endif //LEETCODE_34_PATHSUM_H
