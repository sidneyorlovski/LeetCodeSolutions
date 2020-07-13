/*
    Solução do problema número 206 do leetcode, sessão de algoritmos,  Reverse Linked List
    https://leetcode.com/problems/reverse-linked-list/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* a;
        ListNode* b;
        ListNode* c;
        if (head == NULL || head->next == NULL) {
            return head;
        }
        a = head;
        b = head->next;
        c = b->next;
        a->next = NULL;
        while (c != NULL) {
            c = b->next;
            b->next = a;
            a = b;
            b = c;
            c = c->next;
        }
        b->next = a;
        return b;
    }
};