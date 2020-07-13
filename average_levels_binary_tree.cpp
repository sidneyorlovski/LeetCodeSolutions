/*
    Solução do problema número 637 do leetcode, sessão de algoritmos,  Average of Levels in Binary Tree
    https://leetcode.com/problems/average-of-levels-in-binary-tree/
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<pair<double, int>> pares;
        queue<pair<TreeNode*, int>> nodes;
        
        pares.push_back(make_pair(root->val, 0));
        nodes.push(make_pair(root, 0));
        while (!nodes.empty()) {
            pair<TreeNode*, int> aux = nodes.front();
            if (aux.first->left != NULL) {
                nodes.push(make_pair(aux.first->left, aux.second + 1));
                pares.push_back(make_pair(aux.first->left->val, aux.second + 1));
            }
            if (aux.first->right != NULL) {
                nodes.push(make_pair(aux.first->right, aux.second + 1));
                pares.push_back(make_pair(aux.first->right->val, aux.second + 1));
            }
            nodes.pop();
        }
        vector<double> out;
        int tag = 0, p=0;
        double aux = 0;
        for (int i = 0; i < pares.size();i++) {
            if (pares[i].second != tag) {
                aux = 0;
                for (int j = p; j < i; j++) {
                    aux += pares[j].first;
                }
                aux = aux/(i-p);
                out.push_back(aux);
                p = i;
                tag++;
            }
        }
        aux = 0;
        tag = pares.size()-p;
        for (; p < pares.size(); p++) {
            aux += pares[p].first;
        }
        aux = aux/tag;
        out.push_back(aux);
        return out;
    }
};