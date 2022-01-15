#include <bits/stdc++.h>
using namespace std;

//Definition for a binary tree node.
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
    int dfs(int d, TreeNode *root) {
        d++;
        if (!root) {
            return d - 1;
        }
        return max(dfs(d, root->left), dfs(d, root->right));
    }
    bool isBalanced(TreeNode *root) {
        if (!root) {
            return true;
        }
        int dl = dfs(0, root->left);
        int dr = dfs(0, root->right);
        if (abs(dl - dr) > 1) {
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
int main() {
    Solution s;
    return 0;
}