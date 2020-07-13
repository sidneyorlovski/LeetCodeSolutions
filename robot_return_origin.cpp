/*
    Solução do problema número 657 do leetcode, sessão de algoritmos, Robot Return to Origin
    https://leetcode.com/problems/robot-return-to-origin/
*/
class Solution {
public:
    bool judgeCircle(string moves) {
        int vert = 0;
        int hor = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'U') {
                vert++;
            } else if (moves[i] == 'D') {
                vert--;
            } else if (moves[i] == 'L') {
                hor++;
            } else if (moves[i] == 'R') {
                hor--;
            }
        }
        if (hor == 0 && vert == 0) {
            return true;
        }
        return false;
    }
};