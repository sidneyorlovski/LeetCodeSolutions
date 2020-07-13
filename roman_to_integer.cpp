/*
    Solução do problema número 13 do leetcode, sessão de algoritmos, Roman to Integer
    https://leetcode.com/problems/roman-to-integer/
*/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> tabela_conversao;
        int resultado = 0, ultimo = 0;
        
        tabela_conversao.insert(make_pair('I',1));
        tabela_conversao.insert(make_pair('V',5));
        tabela_conversao.insert(make_pair('X',10));
        tabela_conversao.insert(make_pair('L',50));
        tabela_conversao.insert(make_pair('C',100));
        tabela_conversao.insert(make_pair('D',500));
        tabela_conversao.insert(make_pair('M',1000));
        
        resultado = tabela_conversao[s[s.size()]];
        ultimo = resultado;
        
        for (int i = s.size() - 1; i >= 0; i--) {
            if (tabela_conversao[s[i]] < ultimo)
                resultado = resultado - tabela_conversao[s[i]];
            else
                resultado = resultado + tabela_conversao[s[i]];
            ultimo = tabela_conversao[s[i]];
        }
        
        return resultado;
        
    }
};