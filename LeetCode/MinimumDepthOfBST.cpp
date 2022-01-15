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
    int dfs(bool &find, int d, TreeNode *root) {
        if (!root || find) {
            return d;
        }
        if (!root->left && !root->right) {
            find = true;
            return d;
        }
        d++;
        int dl = 0, dr = 0;
        if (root->left) {
            dl = dfs(find, d, root->left);
        }
        if (root->right) {
            dr = dfs(find, d, root->right);
        }
        if (dl == 0) {
            return dr;
        }
        if (dr == 0) {
            return dl;
        }
        return min(dl, dr);
    }
    int minDepth(TreeNode *root) {
        if (!root) {
            return 0;
        }
        bool find = false;
        return dfs(find, 1, root);
    }
};
int main() {
    Solution s;
    return 0;
}