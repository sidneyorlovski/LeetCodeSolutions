/*
    Solução do problema número 771 do leetcode, sessão de algoritmos, Jewels and Stones
    https://leetcode.com/problems/jewels-and-stones/
*/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int jewels = 0;
        for (int i = 0; i < J.size(); i++) {
            for (int j = 0; j < S.size(); j++) {
                if (S[j] == J[i]) {
                    jewels++;
                }
            }
        }
        return jewels;
    }
};