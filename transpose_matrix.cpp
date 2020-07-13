/*
    Solução do problema número 867 do leetcode, sessão de algoritmos, Transpose Matrix
    https://leetcode.com/problems/transpose-matrix/
*/
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> transposta;
        for (int j = 0; j < A[0].size(); j++) {
            vector<int> aux;
            for (int i = 0; i < A.size(); i++) {
                aux.push_back(A[i][j]);
            }
            transposta.push_back(aux);
        }
        
        return transposta;
    }
};