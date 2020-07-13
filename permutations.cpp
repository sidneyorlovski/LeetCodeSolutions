/*
    Solução do problema número 46 do leetcode, sessão de algoritmos, Permutations
    https://leetcode.com/problems/permutations/
*/

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> perm;
        permuting(result, nums, perm);
        return result;
    }
    
    void permuting(vector<vector<int>> &result, vector<int> nums, vector<int> perm) {
        if (0 == nums.size()) {
            result.push_back(perm);
        } else {
            for (int i = 0; i < nums.size(); i++) {
                    int aux = nums[i];
                    perm.push_back(nums[i]);
                    nums.erase(nums.begin() + i);
                    permuting(result, nums, perm);
                    nums.insert(nums.begin() + i, aux);
                    perm.pop_back();
            }
        }
    }
};