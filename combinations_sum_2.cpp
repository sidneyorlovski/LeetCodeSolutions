/*
    Solução do problema número 40 do leetcode, sessão de algoritmos, Combination Sum II
    https://leetcode.com/problems/combination-sum-ii/
*/

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> actual;
        sort(candidates.begin(), candidates.end());
        combination_sum(candidates, target, 0, 0, actual, &result, false);
        if (target == 0) {
            result.push_back(vector<int>());
        }
        return result;
    }
    
    void combination_sum(vector<int>& candidates, int target, int pos, int sum, vector<int> actual, vector<vector<int>> *result, bool picked) {
        if (sum == target && picked) {
            result->push_back(actual);
        }
        if (pos >= candidates.size() || sum >= target) {
            return;
        }
        actual.push_back(candidates[pos]);
        combination_sum(candidates, target, pos+1, sum+candidates[pos], actual, result, true);
        actual.pop_back();
        int i = pos;
        int j = pos+1;
        while(j < candidates.size() && candidates[i] == candidates[j]) {
            pos++;
            i = pos;
            j = pos + 1;
        }
        combination_sum(candidates, target, j, sum, actual, result, false);
        
    }
};