/*
    Solução do problema número 559 do leetcode, sessão de algoritmos, Maximum Depth of N-ary Tree
    https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children
    Node() {}
    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int maxDepth(Node* root) {
        queue<Node*> myQueue;
        int max = 0;
        if (root != NULL) {
            myQueue.push(root);    
            root->val = 1;
            max = 1;
        }
        while(!myQueue.empty()) {
            Node* aux = myQueue.front();
            myQueue.pop();
            int dist = aux->val+1;
            if (aux->children.size() > 0 && dist > max) {
                max = dist;
            } 
            for (int i = 0; i < aux->children.size(); i++) {
                aux->children[i]->val = dist;
                myQueue.push(aux->children[i]);
            }
        }
        return max;
    }
};