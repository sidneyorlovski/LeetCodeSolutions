/*
    Solução do problema número 83 do leetcode, sessão de algoritmos, Remove Duplicates from Sorted List
    https://leetcode.com/problems/remove-duplicates-from-sorted-list/
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* noDuplicates = head;
        while (noDuplicates) {
            if (noDuplicates->next != NULL) {
                if (noDuplicates->val == noDuplicates->next->val) {
                    noDuplicates->next = noDuplicates->next->next;
                } else {
                    noDuplicates = noDuplicates->next;
                }
            } else {
                noDuplicates = noDuplicates->next;
            }
        }
        return head;
    }
};