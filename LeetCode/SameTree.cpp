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
        //如果pq節點不存在 代表相同
        if (!p && !q) {
            return true;
        }
        //有一方不同 代表不同
        if (p && !q || !p && q) {
            return false;
        }
        //節點值比較
        if (p->val != q->val) {
            return false;
        }
        //比較全部左右子樹
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
int main() {
    Solution s;
    return 0;
}