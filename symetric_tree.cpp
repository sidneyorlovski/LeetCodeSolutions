/*
    Solução do problema número 101 do leetcode, sessão de algoritmos, Symmetric Tree
    https://leetcode.com/problems/symmetric-tree/
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
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true;
        } else {
            return isLeftSymmetricWithRight(root->left, root->right);
        }
    }
    
    bool isLeftSymmetricWithRight(TreeNode* left, TreeNode* right) {
        if (left != NULL && right != NULL) {
            if (left->val == right->val) {
                return isLeftSymmetricWithRight(left->right, right->left) && isLeftSymmetricWithRight(left->left, right->right);
            }
        } else if (left == NULL && right == NULL) {
            return true;
        }
        return false;
    }
};