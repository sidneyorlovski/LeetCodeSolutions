/*
    Solução do problema número 203 do leetcode, sessão de algoritmos, Remove Linked List Elements
    https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val) {
            head = head->next;
        }
        if (head == NULL) {
            return head;
        }
        
        ListNode *it = head->next, *prev = head;
        while (it != NULL) {
            if (it->val == val) {
                prev->next = it->next;
                it = it->next;
            } else {
                prev = it;
                it = it->next;
            }
        }
        return head;
    }
};