/*
    Solução do problema número 70 do leetcode, sessão de algoritmos, Climbing Stairs
    https://leetcode.com/problems/climbing-stairs/
*/

class Solution {
public:
    int climbStairs(int n) {
        int i = 3;
        vector<int> results;
        results.push_back(0);
        results.push_back(1);
        results.push_back(2);
        while (i <= n) {
            results.push_back(results[i-1]+results[i-2]);
            cout << results[i] << endl;
            i++;
        }
        return results[n];
    }
};