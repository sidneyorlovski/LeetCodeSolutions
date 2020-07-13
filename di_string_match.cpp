/*
    Solução do problema número 942 do leetcode, sessão de algoritmos, DI String Match
    https://leetcode.com/problems/di-string-match/
*/

class Solution {
public:
    vector<int> diStringMatch(string S) {
        int upper = S.size(), lower = 0;
        vector<int> out;
        bool last = false;
        for (int i = 0 ; i < S.size(); i++) {
            if (S[i] == 'I') {
                out.push_back(lower);
                lower++;
                last = false;
            } else { //É D
                out.push_back(upper);
                upper--;
                last = true;
            }
        }
        if (last) {
            out.push_back(lower);
        } else {
            out.push_back(upper);
        }
        return out;
    }
};