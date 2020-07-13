/*
    Solução do problema número 350 do leetcode, sessão de algoritmos, Intersection of Two Arrays II
    https://leetcode.com/problems/intersection-of-two-arrays-ii/
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> bigger;
        vector<int> smaller;
        unordered_map<int, int> numbers;
        if (nums1.size() > nums2.size()) {
            bigger = nums1;
            smaller = nums2;
        } else {
            bigger = nums2;
            smaller = nums1;
        }
        for (int i = 0 ; i < bigger.size(); i++) {
            if (numbers.find(bigger[i]) != numbers.end()) {
                numbers[bigger[i]]++;
            } else {
                numbers[bigger[i]] = 1;
            }
        }
        
        vector<int> result;
        for (int i = 0; i < smaller.size(); i++) {
            if (numbers.find(smaller[i]) != numbers.end() && numbers[smaller[i]] != 0) {
                result.push_back(smaller[i]);
                if (numbers[smaller[i]] > 0) {
                    numbers[smaller[i]]--;    
                } else {
                    numbers[smaller[i]]++;   
                }
            }
        }
        return result;
    }
};
