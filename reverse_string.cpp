/*
    Solução do problema número 344 do leetcode, sessão de algoritmos, Reverse String
    https://leetcode.com/problems/reverse-string/
*/

class Solution {
public:
    string reverseString(string s) {
        
        int size = s.size()-1;
        
        for (int i = 0; i < s.size()/2;i++) {
                char aux = s[i];
                s[i] = s[size];
                s[size] = aux;
                size--;
        }
        return s;
    }
};