/*
    Solução do problema número 2 do leetcode, sessão de algoritmos,  https://leetcode.com/problems/add-two-numbers/
    https://leetcode.com/problems/add-two-numbers/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *solution = new ListNode(0);
        ListNode *it = solution, *lx, *p1 = l1, *p2 = l2;
        int carry = 0, sum = 0;
        
        while (p1 != NULL && p2 != NULL) {
            sum = p1->val + p2->val;
            it->val = (sum+carry)%10;            
            carry = (sum+carry)/10;
            
            if (p1->next == NULL || p2->next == NULL) {
                it->next = NULL;
            } else {
                it->next = new ListNode(0);
                it = it->next;
            }
            
            p1 = p1->next;
            p2 = p2->next;
        }
        
        //itera na maior lista, caso uma lista seja maior que a outra
        lx = (p1 == NULL ? p2 : p1);
        while (lx != NULL) {
            
            it->next = new ListNode(0);
            it = it->next;
            
            it->val = ((lx->val)+carry)%10;
            carry = ((lx->val)+carry)/10;
            
            lx = lx->next;

        }

        if (carry != 0) {
            it->next = (ListNode*)malloc(1*sizeof(ListNode));
            it = it->next;
            
            it->val = carry;
            it->next = NULL;
        }
        
        return solution;
    }
};
