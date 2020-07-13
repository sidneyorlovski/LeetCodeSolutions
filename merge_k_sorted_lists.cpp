/**
 * Solução para o problema 23 do site leetcode.com, sessão de algoritmos
 * https://leetcode.com/problems/merge-k-sorted-lists/
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int, int> ordered_map;
        ListNode* node;
        for (int i = 0; i <lists.size(); i++) {
            node = lists[i];
            while (node != NULL) {
                if (ordered_map.find(node->val) == ordered_map.end()) {//Ainda não está no map
                    ordered_map[node->val] = 1;
                } else {
                    ordered_map[node->val] = ordered_map[node->val] + 1;
                }
                node = node->next;
            }
        }
        
        ListNode *new_list = NULL;//new ListNode(0);
        ListNode *head = new_list;
        for (map<int,int>::iterator it = ordered_map.begin(); it != ordered_map.end(); ++it) {
            for (int i = 0; i < it->second; i++) {
                if (new_list == NULL) {
                    new_list = new ListNode(it->first);
                    head = new_list;
                } else {
                    new_list->next = new ListNode(it->first);
                    new_list = new_list->next;
                }
            }
        }
        return head;
    }
};