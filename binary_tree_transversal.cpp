/*
    Solução do problema número 102 do leetcode, sessão de algoritmos, Binary Tree Level Order Traversal
    https://leetcode.com/problems/binary-tree-level-order-traversal/
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<int, TreeNode*>> level_node;
        vector<vector<int>> result;
        if (root == NULL) {
            return result;
        }
        level_node.push(make_pair(0, root));
        int last_element_level = 0;
        vector<int> level_values;
        while(!level_node.empty()) {
            pair<int, TreeNode*> front = level_node.front();
            if (front.first != last_element_level) {
                vector<int> aux = level_values;
                result.push_back(aux);
                level_values.clear();
                last_element_level++;
            }
            level_values.push_back(front.second->val);
            if (front.second->left != NULL) {
                level_node.push(make_pair(front.first+1, front.second->left));
            }
            if (front.second->right != NULL) {
                level_node.push(make_pair(front.first+1, front.second->right));
            }
            level_node.pop();
        }
        if (!level_values.empty()) {
            result.push_back(level_values);
        }
        return result;
    }
};