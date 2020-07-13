/*
    Solução do problema número 268 do leetcode, sessão de algoritmos, Missing Number
    https://leetcode.com/problems/missing-number/
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum_nums = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum_nums +=nums[i];
            sum+=i;
        }
        sum+=(nums.size());
        return sum-sum_nums;
    }
};