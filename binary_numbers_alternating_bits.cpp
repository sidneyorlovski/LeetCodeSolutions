/*
    Solução do problema número 693 do leetcode, sessão de algoritmos, Binary Number with Alternating Bits
    https://leetcode.com/problems/binary-number-with-alternating-bits/
*/
class Solution {
public:
    bool hasAlternatingBits(int n) {
        int pos = 0; //0 é par, 2 é impar
        if (n%2 == 1) {
            pos = 1;
        }
        while (n != 0) {
            n = n>>1;
            if (n%2 == pos) {
                return false;
            }
            if (pos == 0) {
                pos = 1;
            } else {
                pos = 0;
            }
        }
        return true;
    }
};