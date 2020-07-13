/*
    Solução do problema número 412 do leetcode, sessão de algoritmos,  Fizz Buzz
    https://leetcode.com/problems/fizz-buzz/
*/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> out;
        string aux2;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                out.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                out.push_back("Fizz");
            } else if (i % 5 == 0) {
                out.push_back("Buzz");
            } else {
                char str[15];
                snprintf(str, 15, "%d", i);
                aux2 = str;
                out.push_back(aux2);
            }
        }
        return out;
    }
};