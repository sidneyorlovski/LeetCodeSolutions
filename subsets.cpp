/*
    Solução do problema número 78 do leetcode, sessão de algoritmos, Subsets
    https://leetcode.com/problems/subsets/
*/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsets;
        vector<int> perm;
        for (int i = 0; i <= nums.size(); i++) {
            subset(subsets, nums, perm, i, 0);
        }
        return subsets;
    }
    
    void subset(vector<vector<int>> &subsets, vector<int> nums, vector<int> perm, int desired_size, int pos) {
        //cout << perm.size() << " " << desired_size << endl;
        if (perm.size() == desired_size) {
            subsets.push_back(perm);
        } else {
            for (int i = pos; i < nums.size(); i++) {
                perm.push_back(nums[i]);
                subset(subsets, nums, perm, desired_size, i+1);
                perm.pop_back();
            }
        }
        
    }
};