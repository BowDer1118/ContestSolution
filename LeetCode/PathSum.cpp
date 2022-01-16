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
    bool dfs(int targetSum, int currentSum, TreeNode *root) {
        if (!root) {
            return false;
        }
        currentSum += root->val;
        //Is left and sum is equal
        if (!root->left && !root->right && currentSum == targetSum) {
            return true;
        }
        return dfs(targetSum, currentSum, root->left) || dfs(targetSum, currentSum, root->right);
    }
    bool hasPathSum(TreeNode *root, int targetSum) {
        return dfs(targetSum, 0, root);
    }
};
int main() {
    Solution s;
    return 0;
}