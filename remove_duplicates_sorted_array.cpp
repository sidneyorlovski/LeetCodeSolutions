/*
    Solução do problema número 26 do leetcode, sessão de algoritmos, Remove Duplicates from Sorted Array
    https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*/

class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        int l = nums.size();
        for (int i = 0; i < l;) {
            if (i+1 < l && nums[i] == nums[i+1]) {
                for (int j = i; j < l; j++) {
                    nums[j] = nums[j+1];
                }
                l--;
            } else {
                i++;
            }
        }
        return l;
    }
};