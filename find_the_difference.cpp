/*
    Solução do problema número 389 do leetcode, sessão de algoritmos, Find the Difference
    https://leetcode.com/problems/find-the-difference/
*/

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> letras;
        for (int i = 0; i < s.size(); i++) {
            if (letras.find(s[i]) != letras.end()) {
                letras[s[i]] = letras[s[i]] + 1; 
            } else {
                letras.insert(make_pair(s[i], 1));
            }
        }
        for (int i = 0; i < t.size(); i++) {
            if (letras.find(t[i]) == letras.end())
                return t[i];
            if (letras[t[i]] > 0) {
                letras[t[i]] = letras[t[i]] - 1;
            } else {
                return t[i];
            }
        }
        return t[0];
    }
};