/*
    Solução do problema número 876 do leetcode, sessão de algoritmos, Middle of the Linked List
    https://leetcode.com/problems/middle-of-the-linked-list/
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
    ListNode* middleNode(ListNode* head) {
        ListNode *aux, *aux2;
        aux = head;
        aux2 = head;
        while(aux2 != NULL) {
            aux2 = aux2->next;
            if (aux2 != NULL) {
                aux2 = aux2->next;
                aux = aux->next;
            }
        }
        return aux;
    }
};