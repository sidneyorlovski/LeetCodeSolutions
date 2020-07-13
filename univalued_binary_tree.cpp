/*
    Solução do problema número 965 do leetcode, sessão de algoritmos, Univalued Binary Tree
    https://leetcode.com/problems/univalued-binary-tree/
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
    bool isUnivalTree(TreeNode* root) {
        TreeNode* node;
        stack<TreeNode*> myStack;
        if (root != NULL) {
            myStack.push(root);
        }
        while(!myStack.empty()) {
            node = myStack.top();
            myStack.pop();
            if (node->val != root->val) {
                return false;
            }
            if (node->left != NULL) {
                myStack.push(node->left);
            }
            if (node->right != NULL) {
                myStack.push(node->right);
            } 
        }
        return true;
    }
};