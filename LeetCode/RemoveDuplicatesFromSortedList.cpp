#include <bits/stdc++.h>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        //處理特殊狀況 串列為空或只有一個元素
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *prev, *curr;
        prev = head;
        curr = prev->next;
        while (curr) {
            if (curr->val == prev->val) {
                prev->next = curr->next;
                delete curr;
                if (prev->next == nullptr) {
                    break;
                } else {
                    curr = prev->next;
                }
            } else {
                prev = curr;
                curr = prev->next;
            }
        }
        return head;
    }
};
int main() {
    Solution s;
    return 0;
}