/*
    Solução do problema número 852do leetcode, sessão de algoritmos, Peak Index in a Mountain Array
    https://leetcode.com/problems/peak-index-in-a-mountain-array/
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int peak = 0, peak_index = 0;
        for (int i =0 ; i < A.size() ; i++) {
            if (A[i] > peak) {
                peak = A[i];
                peak_index = i;
            }
        }
        return peak_index;
    }
};