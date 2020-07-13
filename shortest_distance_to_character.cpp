/*
    Solução do problema número 821 do leetcode, sessão de algoritmos,  Shortest Distance to a Character
    https://leetcode.com/problems/shortest-distance-to-a-character/
*/
class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> pos;
        for (int i = 0; i < S.size(); i++) {
            if (S[i]==C) {
                pos.push_back(i);
            }
        }
        vector<int> result;
        for(int i = 0; i < S.size(); i++) {
            result.push_back(100000);
            for (int j = 0; j < pos.size(); j++) {
                int test = i - pos[j];
                if (test < 0) {
                    test = test * (-1);
                }
                if (test < result[i]) {
                    result[i] = test;
                }
            }
        }
        return result;
    }
};