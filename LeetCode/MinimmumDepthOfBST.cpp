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
    int dfs(bool &f, int d, TreeNode *root) {
        if (!root) {
            return d;
        }
        d++;
        if (!root->left && !root->right) {
            f = true;
            return d;
        }
        int dl = -1, dr = -1;
        if (root->left) {
            dl = dfs(f, d, root->left);
        }
        if (root->right) {
            dr = dfs(f, d, root->right);
        }
        if (dl == -1) {
            return dr;
        } else if (dr == -1) {
            return dl;
        } else {
            return min(dl, dr);
        }
    }
    int minDepth(TreeNode *root) {
        bool find = false;
        return dfs(find, 0, root);
    }
};
int main() {
    Solution s;
    return 0;
}