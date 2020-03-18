//
// Created by 孙卓文 on 2020/3/18.
//

#ifndef LEETCODE_26_ISSUBSTRUCTURE_H
#define LEETCODE_26_ISSUBSTRUCTURE_H

#include "TreeNode.h"
bool DoesTree1haveTree2(TreeNode *A, TreeNode *B) {
    if (B == nullptr) return true;
    if (A == nullptr) return false;
    if (A->val != B->val) return false;
    return DoesTree1haveTree2(A->left, B->left) && DoesTree1haveTree2(A->right, B->right);
}

bool isSubStructure(TreeNode* A, TreeNode* B) {
    bool result = false;
    if (A != nullptr && B != nullptr) {
        if (A->val == B->val)
            result = DoesTree1haveTree2(A, B);
        if (!result)
            result = isSubStructure(A->left, B);
        if (!result)
            result = isSubStructure(A->right, B);
    }
    return result;
}


#endif //LEETCODE_26_ISSUBSTRUCTURE_H
