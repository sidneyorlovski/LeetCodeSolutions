/*
    Solução do problema número 33 do leetcode, sessão de algoritmos, Search in Rotated Sorted Array
    https://leetcode.com/problems/search-in-rotated-sorted-array/
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int pos = -1;
        if (nums.size() == 0) {
            return -1;
        } else if (nums.size() == 1) {
            if (nums[0] == target) {
                return 0;
            } else {
                return -1;
            }
        }
        while (left < right) {
            pos = (left+right)/2;
            if (nums[pos] == target) {
                return pos;
            } else {
                
                if (nums[pos] < nums[right]) {//Direita está ordenada
                    
                    if (target >= nums[pos] && target <= nums[right]) {//O target só pode estar à direita, que está ordenada
                        left = pos + 1;
                    } else {//O target está à esquerda
                        right = pos - 1;
                    }
                    
                } else {//Esquerda está ordenada
                    
                    if (target >= nums[left] && target <= nums[pos]) {//O target só pode estar à direita, que não está ordenada
                        right = pos - 1;                        
                    } else {//O target está à esquerda
                        left = pos + 1;
                    }
                    
                }
            }
        }
        if (nums[left] == target) {
            return left;
        } else {
            return -1;
        }
    }
};