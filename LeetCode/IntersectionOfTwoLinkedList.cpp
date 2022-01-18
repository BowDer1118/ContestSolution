#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int getLength(ListNode *head) {
        int count = 0;
        while (head) {
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = getLength(headA);
        int lenB = getLength(headB);
        if (lenA > lenB) {
            for (int i = 0; i < lenA - lenB; i++) {
                headA = headA->next;
            }
        } else if (lenA < lenB) {
            for (int i = 0; i < lenB - lenA; i++) {
                headB = headB->next;
            }
        }
        while (headA) {
            if (headA == headB) {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};

int main() {
    Solution s;
    return 0;
}