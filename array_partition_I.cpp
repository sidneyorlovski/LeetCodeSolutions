/*
    Solução do problema número 561 do leetcode, sessão de algoritmos, Array Partition I
    https://leetcode.com/problems/array-partition-i/
*/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin(), nums.end());
        for (int i = nums.size() - 1; i >= 0 ; i -= 2) {
            sum += nums[i-1];
        }
        return sum;
    }
};