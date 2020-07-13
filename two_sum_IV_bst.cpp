/*
    Solução do problema número 653 do leetcode, sessão de algoritmos, Two Sum IV - Input is a BST
    https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
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
    
    bool findTarget(TreeNode* root, int k) {
        queue<TreeNode*> fila;
        vector<int> elems;
        unordered_map<int, int> map;
        
        fila.push(root);
        bool aux;
        while(!fila.empty()) {
            if (fila.front()->left != NULL)
                fila.push(fila.front()->left);
            if (fila.front()->right != NULL)
                fila.push(fila.front()->right);
            
            map.insert(make_pair(fila.front()->val, 1));
            elems.push_back(fila.front()->val);

            fila.pop();
        }
        
        for (int i = 0; i < elems.size(); i++) {
            if (map.find(k-elems[i]) != map.end() && k-elems[i] != elems[i])
                return true;
        }
        
        return false;
    }
};