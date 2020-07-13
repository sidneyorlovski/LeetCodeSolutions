/*
    Solução do problema número 167 do leetcode, sessão de algoritmos, Two Sum II - Input array is sorted
    https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sol;
        int l = 0, r = numbers.size() - 1;
        while (l < r) {
            if (numbers[l] + numbers[r] == target) {
                sol.push_back(l+1);
                sol.push_back(r+1);
                l = r;
            } else {
                if (numbers[l] + numbers[r] < target) {
                    l++;
                } else {
                    r--;
                }
            }
        }
        return sol;
    }
};