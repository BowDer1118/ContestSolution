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
    //BST的Recursive ---> 關鍵:最中間的元素當作root 左半邊當左子樹 右半邊當右子樹 Recursive
   public:
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        return bulidTree(nums, 0, nums.size() - 1);
    }
    TreeNode *bulidTree(vector<int> &nums, int l, int r) {
        // cout << l << " " << r << " ";
        if (l > r) {
            // cout << "\n";
            return nullptr;
        }
        int mid = (l + r) / 2;
        // cout << mid << "\n";
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = bulidTree(nums, l, mid - 1);
        root->right = bulidTree(nums, mid + 1, r);
        return root;
    }
};

int main() {
    vector<int> v = {-10, -3, 0, 5, 9};
    Solution s;
    s.sortedArrayToBST(v);
    return 0;
}