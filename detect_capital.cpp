/*
    Solução do problema número 520 do leetcode, sessão de algoritmos, Detect Capital
    https://leetcode.com/problems/detect-capital/
*/

class Solution {
public:
    bool detectCapitalUse(string word) {
        bool asw = true;
        if (word[0] >= 65 && word[0] <= 90){ //primeira maiuscula
            if (word[1] >= 65 && word[1] <= 90) {
                for (int i = 2; i < word.size(); i++) {
                    if (word[i] < 65 || word[i] > 90)
                      return false;
                }
            } else {
                for (int i = 1; i < word.size(); i++) {
                    if (word[i] < 97 || word[i] > 122)
                        return false;
                }
            }
        } else if (word[0] >= 97 && word[0] <= 122) {//primeira minuscula
            for (int i = 1; i < word.size(); i++) {
                if (word[i] < 97 || word[i] > 122)
                    return false;
            }
        }
        return asw;
    }
};