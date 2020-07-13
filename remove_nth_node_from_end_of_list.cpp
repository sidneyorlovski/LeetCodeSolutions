/*
    Solução do problema número 19 do leetcode, sessão de algoritmos, Remove Nth Node From End of List
    https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> listNode_vector;
        ListNode* node = head;
        while (node != NULL) {
            listNode_vector.push_back(node);
            node = node->next;
        }

        int remove_position = listNode_vector.size() - n;
        if (remove_position == 0) {
            return head->next;
        }
        
        node = listNode_vector[remove_position-1];
        node->next = node->next->next;
        return head;
    }
};