/*
    Solução do problema número 709 do leetcode, sessão de algoritmos, To Lower Case
    https://leetcode.com/problems/to-lower-case/
*/
class Solution {
public:
    string toLowerCase(string str) {
        int i = 0;
        while (str[i] != '\0') {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 32;
            }
            i++;
        }
        return str;
    }
};