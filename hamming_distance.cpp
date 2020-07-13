/*
    Solução do problema número 461 do leetcode, sessão de algoritmos, Hamming Distance
    https://leetcode.com/problems/hamming-distance/
*/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int aux = x ^ y;
        int h = 0;
        while (aux != 0) {
            if (aux & 1 == 1)
                h++;
            aux = aux>>1;
        }
        return h;
    }
};