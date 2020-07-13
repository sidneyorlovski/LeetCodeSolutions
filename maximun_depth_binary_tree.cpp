/*
    Solução do problema número 104 do leetcode, sessão de algoritmos,  Maximum Depth of Binary Tree
    https://leetcode.com/problems/maximum-depth-of-binary-tree/
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
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        TreeNode* node = root;
        if (node->left != NULL && node->right != NULL) {
            return 1 + max(maxDepth(node->right), maxDepth(node->left));
        } else if (node->left != NULL) {
            return 1 + maxDepth(node->left);
        } else if (node->right != NULL) {
            return 1 + maxDepth(node->right);
        } else {
            return 1;
        }
    }
};