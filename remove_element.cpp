/*
    Solução do problema número 27 do leetcode, sessão de algoritmos, Remove Element
    https://leetcode.com/problems/remove-element/
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int lastValidIndex = nums.size() - 1;
        if (nums.size() == 1) {
            if (nums[0] == val) {
                return 0; 
            } else {
                return 1;    
            }
        }
        //cout << lastValidIndex << endl;
        for (int i = 0; (i <= lastValidIndex) && (i >= 0);) {
            if (nums[i] == val) {
                nums[i] = nums[lastValidIndex];
                lastValidIndex--;
            } else {
                i++;
            }
            //cout << lastValidIndex << endl;
        }
        return lastValidIndex+1;
    }
};