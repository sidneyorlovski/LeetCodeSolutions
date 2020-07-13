/*
    Solução do problema número 371 do leetcode, sessão de algoritmos, Sum of Two Integers
    https://leetcode.com/problems/sum-of-two-integers/
*/

class Solution {
public:
    int getSum(int a, int b) {
        int s_and = a & b;
        int s_xor = a ^ b;
        int aux;
        
        s_and = s_and << 1;

        while ((s_and & s_xor) != 0) {
            int old_and = s_and, old_xor = s_xor;
            s_and = old_and & old_xor;
            s_and = s_and << 1;
            s_xor = old_and ^ old_xor;
            
        }
        return s_and ^ s_xor;
        
    }
};