/*
    Solução do problema número 88 do leetcode, sessão de algoritmos, Merge Sorted Array
    https://leetcode.com/problems/merge-sorted-array/
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = 0, b = 0;
        vector<int> result;
        int i = 0;
        int j = 0;
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                result.push_back(nums1[i]);
                i++;
            } else {
                result.push_back(nums2[j]);
                j++;
            }
        }
        
        while (j < n) {
            result.push_back(nums2[j]);
            j++;
        }
        while (i < m) {
            result.push_back(nums1[i]);
            i++;
        }
        for (int i = 0; i < result.size(); i++) {
            nums1[i] = result[i];
        }
    }
};