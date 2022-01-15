#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    //Recursive
    bool isSameTree(TreeNode *p, TreeNode *q) {
        //�p�Gpq�`�I���s�b �N��ۦP
        if (!p && !q) {
            return true;
        }
        //���@�褣�P �N���P
        if (p && !q || !p && q) {
            return false;
        }
        //�`�I�Ȥ��
        if (p->val != q->val) {
            return false;
        }
        //����������k�l��
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
int main() {
    Solution s;
    return 0;
}