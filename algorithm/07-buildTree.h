//
// Created by 孙卓文 on 2020/3/17.
//

#ifndef LEETCODE_07_BUILDTREE_H
#define LEETCODE_07_BUILDTREE_H
TreeNode* buildTree(vector<int>& preorder, int ps, int pe, vector<int>& inorder, int is, int ie) {
    auto rootValue = preorder[ps];
    auto newRoot = new TreeNode(rootValue);

    int index = is;
    for (; index < ie; index++) {
        if (inorder[index] == rootValue)
            break;
    }

    int leftLength = index - is;
    int rightLendth = ie - index;
    if (leftLength > 0) {
        newRoot->left = buildTree(preorder, ps+1, ps+leftLength, inorder, is, is+leftLength-1);
    }
    if (rightLendth > 0) {
        newRoot->right = buildTree(preorder, ps+leftLength+1, pe, inorder, is+leftLength+1, ie);
    }
    return newRoot;
}
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    if (preorder.empty() || inorder.empty()) {
        return nullptr;
    }
    return buildTree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
}

#endif //LEETCODE_07_BUILDTREE_H
