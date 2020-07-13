/*
    Solução do problema número 557 do leetcode, sessão de algoritmos, Reverse Words in a String III
    https://leetcode.com/problems/reverse-words-in-a-string-iii/
*/

class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        
        for (i = 0; i < s.size();i++) {
            int j = i;
            int count = 0;
            while (s[i] != ' ' && s[i] != '\0') {
                count++;
                i++;
            }
            
            int inicio = j, fim = j+count-1, it;
            it = count/2;
            
            while (it > 0) {
                char aux = s[inicio];
                s[inicio] = s[fim];
                s[fim] = aux;
                inicio++;
                fim--;
                it--;
            }
            
        }
        return s;
    }
};