/*
    Solução do problema número 500 do leetcode, sessão de algoritmos, Keyboard Row
    https://leetcode.com/problems/keyboard-row/
*/
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> out;
        
        unordered_map <char, int> row_1;
        unordered_map <char, int> row_2;
        unordered_map <char, int> row_3;
        
        row_1.insert(make_pair('q', 1));
        row_1.insert(make_pair('w', 1));
        row_1.insert(make_pair('e', 1));
        row_1.insert(make_pair('r', 1));
        row_1.insert(make_pair('t', 1));
        row_1.insert(make_pair('y', 1));
        row_1.insert(make_pair('u', 1));
        row_1.insert(make_pair('i', 1));
        row_1.insert(make_pair('o', 1));
        row_1.insert(make_pair('p', 1));
        row_1.insert(make_pair('Q', 1));
        row_1.insert(make_pair('W', 1));
        row_1.insert(make_pair('E', 1));
        row_1.insert(make_pair('R', 1));
        row_1.insert(make_pair('T', 1));
        row_1.insert(make_pair('Y', 1));
        row_1.insert(make_pair('U', 1));
        row_1.insert(make_pair('I', 1));
        row_1.insert(make_pair('O', 1));
        row_1.insert(make_pair('P', 1));
        
        row_2.insert(make_pair('a', 1));
        row_2.insert(make_pair('s', 1));
        row_2.insert(make_pair('d', 1));
        row_2.insert(make_pair('f', 1));
        row_2.insert(make_pair('g', 1));
        row_2.insert(make_pair('h', 1));
        row_2.insert(make_pair('j', 1));
        row_2.insert(make_pair('k', 1));
        row_2.insert(make_pair('l', 1));
        row_2.insert(make_pair('A', 1));
        row_2.insert(make_pair('S', 1));
        row_2.insert(make_pair('D', 1));
        row_2.insert(make_pair('F', 1));
        row_2.insert(make_pair('G', 1));
        row_2.insert(make_pair('H', 1));
        row_2.insert(make_pair('J', 1));
        row_2.insert(make_pair('K', 1));
        row_2.insert(make_pair('L', 1));
        
        row_3.insert(make_pair('z', 1));
        row_3.insert(make_pair('x', 1));
        row_3.insert(make_pair('c', 1));
        row_3.insert(make_pair('v', 1));
        row_3.insert(make_pair('b', 1));
        row_3.insert(make_pair('n', 1));
        row_3.insert(make_pair('m', 1));
        row_3.insert(make_pair('Z', 1));
        row_3.insert(make_pair('X', 1));
        row_3.insert(make_pair('C', 1));
        row_3.insert(make_pair('V', 1));
        row_3.insert(make_pair('B', 1));
        row_3.insert(make_pair('N', 1));
        row_3.insert(make_pair('M', 1));
        
        for (int i = 0; i < words.size(); i++) {//para cada palavra
            int aux = 0;
            if (row_1.find(words[i][0]) != row_1.end()) { //Caso a primeira letra esteja na primeira linha
                for (int j = 1; j < words[i].size(); j++) {//para cada caractere dos restantes
                    if (row_1.find(words[i][j]) == row_1.end()) { //Se não estiver no cj 1
                        j = words[i].size();
                        aux = 1;
                    }
                }
            }
            
            if (row_2.find(words[i][0]) != row_2.end()) {
                for (int j = 1; j < words[i].size(); j++) {//para cada caractere
                    if (row_2.find(words[i][j]) == row_2.end()) {
                        j = words[i].size();
                        aux = 1;
                    }
                }
            }
            
            if (row_3.find(words[i][0]) != row_3.end()) {
                for (int j = 1; j < words[i].size(); j++) {//para cada caractere
                    if (row_3.find(words[i][j]) == row_3.end()) {
                        j = words[i].size();
                        aux = 1;
                    }
                }
            }
            
            if (aux == 0)
                out.push_back(words[i]);
            
            
        }
        
        return out;
    }
};