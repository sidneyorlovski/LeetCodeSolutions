/*
    Solução do problema número 283 do leetcode, sessão de algoritmos, Move Zeroes
    https://leetcode.com/problems/move-zeroes/
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0, j = 0; i < nums.size() && j < nums.size();) {
            if (nums[i] != 0) {
                i++;
            }
            if (j <= i) {
                j++;
            }
            if (i < nums.size() && nums[i] == 0) {
                if (j < nums.size() && nums[j] != 0) {
                    int aux = nums[i];
                    nums[i] = nums[j];
                    nums[j] = aux;
                    i++;
                }
                j++;
            }
        }
    }
};