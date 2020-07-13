/*
    Solução do problema número 485 do leetcode, sessão de algoritmos, Max Consecutive Ones
    https://leetcode.com/problems/max-consecutive-ones/
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                count++;
            if (nums[i] == 0) {
                if (max < count)
                    max = count;
                count = 0;
            }
        }
        if (count > max) {
            max = count;
        }
        return max;
    }
};