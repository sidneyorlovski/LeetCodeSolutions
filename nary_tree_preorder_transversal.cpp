/*
    Solução do problema número 589 do leetcode, sessão de algoritmos, N-ary Tree Preorder Traversal
    https://leetcode.com/problems/n-ary-tree-preorder-traversal/
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        visit(root, &result);
        return result;
    }
    
    void visit(Node* root, vector<int> *result) {        
        if (root != NULL) {
            (*result).push_back(root->val);
            for (int i = 0; i < root->children.size(); i++) {
                visit(root->children[i], result);
            }
        }
        return;
    }
};