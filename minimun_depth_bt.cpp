/*
    Solução do problema número 111 do leetcode, sessão de algoritmos, Minimum Depth of Binary Tree
    https://leetcode.com/problems/minimum-depth-of-binary-tree/
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
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        TreeNode* node = root;
        if (node->left != NULL && node->right != NULL) {
            return 1 + min(minDepth(node->right), minDepth(node->left));
        } else if (node->left != NULL) {
            return 1 + minDepth(node->left);
        } else if (node->right != NULL) {
            return 1 + minDepth(node->right);
        } else {
            return 1;
        }
    }
};