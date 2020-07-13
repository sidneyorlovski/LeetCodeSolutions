/*
    Solução do problema número 349 do leetcode, sessão de algoritmos,  Intersection of Two Arrays
    https://leetcode.com/problems/intersection-of-two-arrays/
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> one, two;
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            one.emplace(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (one.find(nums2[i]) != one.end()) {
                two.emplace(nums2[i]);
            }
        }
        for(unordered_set<int>::iterator itr = two.begin(); itr != two.end(); ++itr ) {
            result.push_back(*itr);
        }
        return result;
    }
};