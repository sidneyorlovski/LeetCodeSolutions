/*
    Solução do problema número 700 do leetcode, sessão de algoritmos, Search in a Binary Search Tree
    https://leetcode.com/problems/search-in-a-binary-search-tree/
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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL) {
            return NULL;
        }
        if (root->val == val) {
            return root;
        } else if (root->val < val) {
            return searchBST(root->right, val);
        } else if (root->val > val) {
            return searchBST(root->left, val);
        }
    }
};