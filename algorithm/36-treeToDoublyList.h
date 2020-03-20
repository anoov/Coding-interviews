//
// Created by 孙卓文 on 2020/3/20.
//

#ifndef LEETCODE_36_TREETODOUBLYLIST_H
#define LEETCODE_36_TREETODOUBLYLIST_H
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
void inOrder(Node *root, vector<Node*>& vec) {
    if (root == nullptr) return;
    if (root->left != nullptr) inOrder(root->left, vec);
    vec.push_back(root);
    if (root->right != nullptr) inOrder(root->right, vec);

}
Node* treeToDoublyList(Node* root) {
    if (!root) return root;
    vector<Node*> vec;
    inOrder(root, vec);
    int len = vec.size();
    if (len == 1) {
        root->left = root;
        root->right = root;
        return root;
    }
    vec[0]->left = vec[len-1];
    vec[0]->right = vec[1];
    vec[len-1]->left = vec[len-2];
    vec[len-1]->right = vec[0];
    for (int i = 1; i < len-1; ++i) {
        vec[i]->left = vec[i-1];
        vec[i]->right = vec[i+1];
    }
    return vec[0];
}
#endif //LEETCODE_36_TREETODOUBLYLIST_H
