/*
    Solução do problema número 6 do leetcode, sessão de algoritmos, ZigZag Conversion
    https://leetcode.com/problems/zigzag-conversion/
*/

class Solution {
public:
    
    string convert(string s, int numRows) {
        int tamanho = s.size(), pos = 0, up_down = 0, label = 0, passo = 1;
        vector<pair <int, char> > pares;
        if (numRows == 1) {
            return s;
        }
        
        char out[tamanho+1];
        int labels[tamanho];
        
        int passo_up, passo_down;
        
        for (int i = 0; i < numRows; i++) {
            //Para cada linha, temos o passo de cima e o de baixo.
            passo_up = (2*i);
            passo_down = 2*(numRows-i-1);
            
            passo_up = passo_up < 0 ? 0 : passo_up;
            passo_down = passo_down < 0 ? 0 : passo_down;
            
            int passo = 1;
            int j = i;

            while (j < s.size()) {
                out[pos] = s[j];
                if (passo == 0) {
        
                    passo = 1;
                    j = j + passo_up;
                    if (passo_up != 0)
                        pos++;
                     
                } else if (passo == 1) {
                    
                    passo = 0;
                    j = j + passo_down;
                    if (passo_down != 0)
                        pos++;
                    
                }
                
            }
        }
        out[pos] = '\0';
        s = out;
        return s;
    }
};