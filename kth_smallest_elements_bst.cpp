/*
    Solução do problema número 230 do leetcode, sessão de algoritmos, Kth Smallest Element in a BST
    https://leetcode.com/problems/kth-smallest-element-in-a-bst/
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
    int kthSmallest(TreeNode *root, int k) {
        int val;
        return findKth(root, &k, &val);
    }
    
    int findKth(TreeNode *root, int *k, int *val) {
        if (k < 0) {
            return *val;
        }
        if (root->left != NULL && *k != 0) {
            findKth(root->left, k, val);
        }
        (*k)--;
        if (*k == 0) {
            (*val) = root->val;
        }
        if (root->right != NULL  && *k != 0) {
            findKth(root->right, k, val);
        }
        return (*val);
    }
};