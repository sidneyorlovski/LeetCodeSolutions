/*
    Solução do problema número 98 do leetcode, sessão de algoritmos, Validate Binary Search Tree
    https://leetcode.com/problems/validate-binary-search-tree/
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
    bool isValidBST(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        vector<int> cansado;
        sorted_values(root, cansado);
        int max = -1;
        for (int i = 0; i < cansado.size() - 1; i++) {
            if (cansado[i] >= cansado[i+1]) {
                return false;
            }
        }
        return true;
    }
    
    void sorted_values(TreeNode* root, vector<int> &sorted) {
        if (root != NULL) {
            sorted_values(root->left, sorted);
            sorted.push_back(root->val);
            sorted_values(root->right, sorted);
        }
    }
    
};