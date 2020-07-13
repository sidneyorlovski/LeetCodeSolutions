/*
    Solução do problema número 162 do leetcode, sessão de algoritmos, Find Peak Element
    https://leetcode.com/problems/find-peak-element/
*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for (int i = 1; i < nums.size()-1; i++) {
            if (nums[i-1] < nums[i] && nums[i+1] < nums[i]) {
                return i;
            }
        }
        if (nums[0] > nums[1]) {
            return 0;
        }
        return nums.size()-1;
    }
};