/*
    Solução do problema número 905 do leetcode, sessão de algoritmos, Sort Array By Parity
    https://leetcode.com/problems/sort-array-by-parity/
*/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> odd;
        vector<int> even;
        for (int i = 0; i < A.size(); i++) {
            if (A[i]%2 == 1)
                odd.push_back(A[i]);
            else
                even.push_back(A[i]);
        }
        for (int i = 0; i < odd.size(); i++) {
            even.push_back(odd[i]);
        }
        return even;
    }
};