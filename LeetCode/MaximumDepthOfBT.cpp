#include <bits/stdc++.h>
using namespace std;

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
    int dfs(int d, TreeNode *r) {
        d++;
        if (!r) {
            return d - 1;
        } else {
            return max(dfs(d, r->left), dfs(d, r->right));
        }
    }
    int maxDepth(TreeNode *root) {
        return dfs(0, root);
    }
};
int main() {
    Solution s;
    return 0;
}