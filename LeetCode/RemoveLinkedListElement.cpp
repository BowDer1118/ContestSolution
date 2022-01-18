#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head && head->val == val) {
            head = head->next;
        }
        if (!head) {
            return nullptr;
        }
        ListNode* prev = head;
        ListNode* curr = head->next;

        while (curr) {
            while (curr->val == val) {
                curr = curr->next;
                if (!curr) {
                    break;
                }
            }
            prev->next = curr;
            prev = curr;
            if (prev) {
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