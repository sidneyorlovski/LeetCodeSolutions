/*
    Solução do problema número 496 do leetcode, sessão de algoritmos, Next Greater Element I
    https://leetcode.com/problems/next-greater-element-i/
*/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> out;
        unordered_map <int, int> map;
        
        for (int i = 0; i < nums.size(); i++) {
            map.insert(make_pair(nums[i], i));
        }
        
        for (int i = 0; i < findNums.size(); i++) {
            int gt = 0, f = 0, bg = 0;
            bg = map[findNums[i]];
            for (int j = bg+1; j < nums.size(); j++) {
                if (nums[j] > findNums[i]){
                    out.push_back(nums[j]);
                    gt = 1;
                    j = nums.size();
                }
            }
            if (gt == 0)
                out.push_back(-1);
        }
        return out;
    }
};