/*
    Solução do problema número 922 do leetcode, sessão de algoritmos, Sort Array By Parity II
    https://leetcode.com/problems/sort-array-by-parity-ii/
*/
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> response;
        vector<int> odd;
        vector<int> even;
        for (int i = 0; i < A.size(); i++) {
            if (A[i]%2 == 0) {
                even.push_back(A[i]);
            } else {
                odd.push_back(A[i]);
            }
        }
        for (int i = 0 ; i < odd.size(); i++) {
            response.push_back(even[i]);
            response.push_back(odd[i]);
        }
        if (even.size() > odd.size()) {
            response.push_back(even[even.size()-1]);
        }
        return response;
    }
};