/*
    Solução do problema número 868 do leetcode, sessão de algoritmos,  Binary Gap
    https://leetcode.com/problems/binary-gap/
*/
class Solution {
public:
    int binaryGap(int N) {
        bool nois = false;
        int bit = N%2;
        int gap = 0;
        int count = 0;
        int ones = 0;
        while (N != 0) {
            if (N%2 == 1) {
                count = 1;
                ones++;
                nois = true;
            } else {
                if (nois) {
                    count++;
                }
            }
            if (count > gap) {
                gap = count;
            }
            N = N>>1;
        }
        if (ones < 2) {
            return 0;
        }
        return gap;
    }
};