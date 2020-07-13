/*
    Solução do problema número 509 do leetcode, sessão de algoritmos,  Fibonacci Number
    https://leetcode.com/problems/fibonacci-number/
*/

class Solution {
public:
    int fib(int N) {
        int result = 0;
        int a = 0, b = 1;
        if (N == 0) {
            return 0;
        } else if (N == 1) {
            return 1;
        }
        for (int i = 1; i < N; i++) {
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};