/*
    Solução do problema número 136 do leetcode, sessão de algoritmos,  Single Number
    https://leetcode.com/problems/single-number/
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int aux = 0;
        for (int i = 0; i < nums.size(); i++)
            aux = aux ^ nums[i];
        
        return aux;
    }
};