/*
    Solução do problema número 617 do leetcode, sessão de algoritmos, Merge Two Binary Trees
    https://leetcode.com/problems/merge-two-binary-trees/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1 == NULL) return t2;
        if (t2 == NULL) return t1;
        TreeNode *head = new TreeNode(0);
        head = mergeSubTrees(t1, t2);
        return head;
    }
    
    TreeNode* mergeSubTrees(TreeNode* t1, TreeNode *t2) {
        TreeNode *head = new TreeNode(0);
        if (t1 != NULL && t2 != NULL) {
            head->val = t1->val + t2->val;
            head->left = mergeSubTrees(t1->left, t2->left);
            head->right = mergeSubTrees(t1->right, t2->right);
        } else if (t1 == NULL && t2 != NULL) {
            return t2;
        } else if (t2 == NULL && t1 != NULL) {
            return t1;
        } else {
            head = NULL;
        }
        return head;
    }
};