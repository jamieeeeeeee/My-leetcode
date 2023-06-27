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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p = 0;
        ListNode *n = head;
        ListNode *temp; 

        while (n) {
            temp = n ->next;
            n -> next = p;
            p = n;
            n = temp;
        }

        return p;
    }
};