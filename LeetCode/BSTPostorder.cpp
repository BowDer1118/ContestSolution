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
    void dfs(vector<int> &v, TreeNode *root) {
        if (!root) {
            return;
        }
        dfs(v, root->left);
        dfs(v, root->right);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> v;
        dfs(v, root);
        return v;
    }
};
int main() {
    Solution s;
    return 0;
}