/*
    Solução do problema número 961 do leetcode, sessão de algoritmos, N-Repeated Element in Size 2N Array
    https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
*/

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        vector<int> values(10000, 0);
        for (int i = 0; i < A.size(); i++) {
            if(values[A[i]] != 0) {
                return A[i];
            } else {
                values[A[i]]++;
            }
        }
        return 0;
    }
};