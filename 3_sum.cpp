/*
    Solução do problema número 15 do leetcode, sessão de algoritmos, 3Sum
    https://leetcode.com/problems/3sum/
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        unordered_map<int, int> available;
        for (int i = 0; i < nums.size(); i++) {
            if (available.find(nums[i]) == available.end()) {
                available[nums[i]] = 1;
            } else {
                available[nums[i]] = available[nums[i]] + 1;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            unordered_map<int, int> used;
            if (available[nums[i]]) {
                available[nums[i]]--;
                for (int j = i + 1; j < nums.size(); j++) {
                    if (available[nums[j]] > 0) {
                        available[nums[j]]--;
                        int aux = (nums[i] + nums[j]) * (-1);
                        bool entered = false;
                        if (available.find(aux) != available.end()) {
                            if (available[aux] > 0) {
                                used[nums[j]] = available[nums[j]]+1;
                                available[nums[j]] = 0;
                                vector<int> res;
                                res.push_back(nums[i]);
                                res.push_back(nums[j]);
                                res.push_back(aux);
                                result.push_back(res);
                                entered = true;
                            }
                        }
                        if (!entered) {
                            available[nums[j]]++;
                        }
                    }
                }
                for(unordered_map<int,int>::iterator it = used.begin(); it != used.end(); ++it) {
                    available[it->first] = it->second;
                }
                available[nums[i]] = 0;
            }
        }
        return result;
    }
};