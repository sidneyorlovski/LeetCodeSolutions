/*
    Solução do problema número 804 do leetcode, sessão de algoritmos, Unique Morse Code Words
    https://leetcode.com/problems/unique-morse-code-words/
*/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> code = {".-", //a
                               "-...",
                               "-.-.",
                               "-..",
                               ".",
                               "..-.",
                               "--.",
                               "....",
                               "..",
                               ".---",
                               "-.-",
                               ".-..",
                               "--",
                               "-.",
                               "---",
                               ".--.",
                               "--.-",
                               ".-.",
                               "...",
                               "-",
                               "..-",
                               "...-",
                               ".--",
                               "-..-",
                               "-.--",
                               "--.."};
        map<string, int> present; 
        std::pair<std::map<string,int>::iterator,bool> ret;
        string morse;
        int qtd = 0;
        for (int i = 0; i < words.size(); i++) {
            int count = 0;
            morse = "";
            while (words[i][count] != '\0') {
                morse += code[(words[i][count] - 97)];
                count++;
            }
            ret = present.insert(pair<string, int>(morse,1));
            ret.second != false ? qtd++ : false;
        }
        return qtd;
    }
};