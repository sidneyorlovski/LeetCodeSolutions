/*
    Solução do problema número 872 do leetcode, sessão de algoritmos,  Leaf-Similar Trees
    https://leetcode.com/problems/leaf-similar-trees/
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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1, leaves2; 
        visit(root1, &leaves1);
        visit(root2, &leaves2);
        if (leaves1.size() != leaves2.size()) {
            return false;
        }
        for (int i = 0; i < leaves1.size(); i++) {
            if (leaves1[i] != leaves2[i]) {
                return false;
            }
        }
        return true;
    }
    
    void visit(TreeNode* root, vector<int> *leaves) {
        if (root != NULL) {
            if (root->left == NULL && root->right == NULL) {
                (*leaves).push_back(root->val);
            } else {
                if (root->left != NULL) {
                    visit(root->left, leaves);
                }
                if (root->right != NULL) {
                    visit(root->right, leaves);
                }
            }
        }
        return;
    }

};