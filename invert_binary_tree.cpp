/*
    Solução do problema número 226 do leetcode, sessão de algoritmos,  Invert Binary Tree
    https://leetcode.com/problems/invert-binary-tree/
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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> nos;
        if (root != NULL)
            nos.push(root);
        while (!nos.empty()) {
            TreeNode* aux = nos.front();
            TreeNode* sw;
            if (aux->left != NULL){
                nos.push(aux->left);
            }
            if (aux->right != NULL) {
                nos.push(aux->right);
            }
            sw = aux->left;
            aux->left = aux->right;
            aux->right = sw;
            nos.pop();
        }
        return root;
        
    }
};