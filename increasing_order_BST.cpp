/*
    Solução do problema número 897 do leetcode, sessão de algoritmos, Increasing Order Search Tree
    https://leetcode.com/problems/increasing-order-search-tree/
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
    void addElements(TreeNode* root, vector<TreeNode*> *nodes){
        if (root != NULL) {
            if (root->left != NULL) {
                addElements(root->left, nodes);
                //(*nodes).push_back(root->left);    
            }
            (*nodes).push_back(root);
            if (root->right != NULL) {
                addElements(root->right, nodes);
                //(*nodes).push_back(root->right);
            }
        }
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        queue<TreeNode*> myTree;
        /*Brute force*/
        vector<TreeNode*> nodes;
        addElements(root, &nodes);
        for (int i = 0; i < nodes.size(); i++) {
            nodes[i]->left = NULL;
            if (i != nodes.size() - 1) {
                nodes[i]->right = nodes[i+1];
            } else {
                nodes[i]->right = NULL;
            }
        }
        return nodes[0];
    }
    
};