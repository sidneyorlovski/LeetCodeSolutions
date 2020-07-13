/*
    Solução do problema número 50 do leetcode, sessão de algoritmos, Pow(x, n)
    https://leetcode.com/problems/powx-n/
*/
class Solution {
public:
    double myPow(double x, int n) {
        if (n != 0) {
            if (n == 1) {
                return x;
            } else if (n == -1) {
                return 1/x;
            } else {
                double halfPow = myPow(x, n/2);
                if (n%2 == 0) {
                    return halfPow*halfPow;    
                } else {
                    if (n < 0) {
                        return halfPow*halfPow*(1/x);
                    } else {
                        return halfPow*halfPow*x;   
                    }
                }
                return halfPow*halfPow*x;
            }
        } else {
            return 1;
        }
    }
};