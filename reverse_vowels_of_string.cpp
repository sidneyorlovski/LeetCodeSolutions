/*
    Solução do problema número 345 do leetcode, sessão de algoritmos, Reverse Vowels of a String
    https://leetcode.com/problems/reverse-vowels-of-a-string/
*/

class Solution {
public:
    string reverseVowels(string s) {
        vector<int> vowels;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                vowels.push_back(i);
            }
        }
        int j = vowels.size()-1;
        for (int i = 0; i < vowels.size()/2; i++) {
            char aux = s[vowels[j]];
            s[vowels[j]] = s[vowels[i]];
            s[vowels[i]] = aux;
            j--;
        }
        return s;
    }
};