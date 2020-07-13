/*
    Solução do problema número 530 do leetcode, sessão de algoritmos, Minimum Absolute Difference in BST
    https://leetcode.com/problems/minimum-absolute-difference-in-bst/
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
    int getMinimumDifference(TreeNode* root) {
        vector<int> values;
        queue<TreeNode*> mq;
        mq.push(root);
        while (!mq.empty()) {
            TreeNode *aux  = mq.front();
            mq.pop();
            if (aux->left != NULL) {
                mq.push(aux->left);
            }
            if (aux->right != NULL) {
                mq.push(aux->right);
            }
            values.push_back(aux->val);
        }
        sort(values.begin(), values.end());
        int min = abs(values[0] - values[1]);
        for (int i = 1; i < values.size()-1; i++) {
            if (abs(values[i] - values[i+1]) < min) {
                min = abs(values[i] - values[i+1]);
            }
        }
        return min;
    }
};