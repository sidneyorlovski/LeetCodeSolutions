/*
    Solução do problema número 21 do leetcode, sessão de algoritmos, Merge Two Sorted Lists
    https://leetcode.com/problems/merge-two-sorted-lists/
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL && l2 == NULL)
            return NULL;
        
        ListNode *list = (ListNode*) calloc(1, sizeof(ListNode));
        list->next = NULL;
        ListNode *it = list;
        while (l1 != NULL && l2 != NULL) {
            it->next = (ListNode*) calloc(1, sizeof(ListNode));
            
            if (l1->val <= l2->val) {
                it->val = l1->val;
                l1 = l1->next;
            } else {
                it->next = (ListNode*) calloc(1, sizeof(ListNode));
                it->val = l2->val;
                l2 = l2->next;
            }
    
            it = it->next;
            
        }
        
        ListNode *it2;
        if (l1 != NULL) {
            it2 = l1;
        } else {
            it2 = l2;
        }
        if (it2 != NULL) {
            it->val = it2->val;
            it->next = it2->next;
        }
        
        return list;
    }
};