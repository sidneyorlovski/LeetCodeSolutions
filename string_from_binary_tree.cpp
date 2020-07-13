/*
    Solução do problema número 606 do leetcode, sessão de algoritmos, Construct String from Binary Tree
    https://leetcode.com/problems/construct-string-from-binary-tree/
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
    string tree2str(TreeNode* t) {
        if (t != NULL) {
            string aux = "";
            aux.append(to_string(t->val));
            if (t->right != NULL) {
                
                aux.append("(");
                if (t->left != NULL) {
                    aux.append(tree2str(t->left));
                }
                aux.append(")");
                
                aux.append("(");
                aux.append(tree2str(t->right));
                aux.append(")");
            } else {
                if (t->left != NULL) {
                    aux.append("(");
                    aux.append(tree2str(t->left));
                    aux.append(")");
                }    
            }
            return aux;
        }
        return "";
    }
};