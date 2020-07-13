/*
    Solução do problema número 292 do leetcode, sessão de algoritmos, Nim Game
    https://leetcode.com/problems/nim-game/
*/

class Solution {
public:
    bool canWinNim(int n) {
        if (n%4 == 0) {
            return false;
        }
        return true;
    }
};