/*
    Solução do problema número 342 do leetcode, sessão de algoritmos, Power of Four
    https://leetcode.com/problems/power-of-four/
*/

class Solution {
public:
    bool isPowerOfFour(int num) {
        if (num < 0)
            return false;
        unsigned long int absNum = num;
        
        unsigned long int powerOf4BinaryPosition = 1;
        unsigned long int lastPowerOf4BinaryPosition = 0;
        
        while (lastPowerOf4BinaryPosition < powerOf4BinaryPosition) {
            if (num && powerOf4BinaryPosition == num) {
                return true;
            }
            lastPowerOf4BinaryPosition = powerOf4BinaryPosition;
            powerOf4BinaryPosition = powerOf4BinaryPosition << 2;
        }
        return false;
    }
};