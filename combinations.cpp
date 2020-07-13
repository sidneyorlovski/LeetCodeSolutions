/*
    Solução do problema número 77 do leetcode, sessão de algoritmos, Combinations
    https://leetcode.com/problems/combinations/
*/
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> combinations;
        vector<int> comb;
        combine(combinations, n, k, 1, comb);
        return combinations;
    }
    
    void combine(vector<vector<int>> &combinations, int n, int k, int pos, vector<int> comb) {
        if (comb.size() == k) {
            combinations.push_back(comb);
        } else {
            for(int i = pos; i <= n; i++) {
                comb.push_back(i);
                combine(combinations, n, k, i + 1, comb);
                comb.pop_back();
            }
        }
    }
};