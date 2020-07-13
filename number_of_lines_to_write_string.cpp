/*
    Solução do problema número 806 do leetcode, sessão de algoritmos,  Number of Lines To Write String
    https://leetcode.com/problems/number-of-lines-to-write-string/
*/

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        vector<int> aux;
        int total = 0, lines =0;
        for (int i = 0; i < S.size(); i++) {
            if (total + widths[S[i]-97] > 100) {
                total = widths[S[i]-97];
                lines++;
            } else {
                total = total + widths[S[i]-97];
            }
        }
        if (total != 0)
            lines++;
        aux.push_back(lines);
        aux.push_back(total);
        return aux;
    }
};