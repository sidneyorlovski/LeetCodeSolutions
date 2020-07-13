/*
    Solução do problema número 160 do leetcode, sessão de algoritmos, Intersection of Two Linked Lists
    https://leetcode.com/problems/intersection-of-two-linked-lists/
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int num_a = 0, num_b = 0;
        ListNode *itA = headA, *itB = headB;
        while (itA != NULL) {
            itA = itA->next;
            num_a++;
        }
        while (itB != NULL) {
            itB = itB->next;
            num_b++;
        }
        itA = headA;
        itB = headB;
        while(num_b > num_a) {
            itB = itB->next;
            num_b--;
        }
        while(num_a > num_b) {
            itA = itA->next;
            num_a--;
        }
        
        while (itA != NULL && itB != NULL) {
            if (itA == itB) {
                return itA;
            }
            itA = itA->next;
            itB = itB->next;
        }
        return NULL;
        
    }
};