/*
    Solução do problema número 35 do leetcode, sessão de algoritmos, Search Insert Position
    https://leetcode.com/problems/search-insert-position/
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        
        int pos = -1;
        while (pos != (left+right)/2) {
            pos = (left+right)/2;
            if (nums[pos] > target) {
                right = pos-1;
            } else if (nums[pos] < target) {
                left = pos+1;
            } else {
                return pos;
            }
        }
        if (target > nums[pos]) {
            return pos+1;
        } else {
            return pos;  
        }
    }
};