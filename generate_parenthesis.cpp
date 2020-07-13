/*
    Solução do problema número 22 do leetcode, sessão de algoritmos, Generate Parentheses
    https://leetcode.com/problems/generate-parentheses/
*/

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<char> aux;
        vector<string> placeholder;
        combination(&placeholder, aux, n, n);
        return placeholder;
    }
    
    void combination(vector<string> *result, vector<char> p_vector, int n, int m) {
        vector<char> aux;
        if (n == 0 && m == 0) {
            string s(p_vector.begin(), p_vector.end());
            result->push_back(s);
            return;
        } else {
            if (n != 0) {
                p_vector.push_back('(');
                combination(result, p_vector, n-1, m);
                p_vector.pop_back();
            }
            if (m > n) {
                p_vector.push_back(')');
                combination(result, p_vector, n, m-1);
                p_vector.pop_back();
            }
        }
    }
};