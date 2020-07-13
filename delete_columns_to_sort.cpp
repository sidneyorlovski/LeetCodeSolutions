/*
    Solução do problema número 944 do leetcode, sessão de algoritmos, Delete Columns to Make Sorted
    https://leetcode.com/problems/delete-columns-to-make-sorted/
*/

class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int count = 0;
        for (int j = 0; j < A[0].size(); j++) {//Para cada índice
            for (int i = 1; i < A.size(); i++) {//Cada string
                if (!(A[i-1][j] <= A[i][j])) {
                    count++;
                    i = A.size();
                }
            }
        }
        return count;
    }
};