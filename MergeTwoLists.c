/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <vector>
using namespace std;

class Solution {
public:
  ListNode* mergeTwoLists(ListNode* headA, ListNode* headB) {
        if (headA == NULL) {
            return headB;
        } else if (headB == NULL) {
            return headA;
        } else if (headA->val <= headB->val) {
            headA->next = mergeTwoLists(headA->next, headB);
            return headA;
        } else {
            headB->next = mergeTwoLists(headA, headB->next);
            return headB;
        }
    }

};