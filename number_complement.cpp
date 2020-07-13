/*
    Solução do problema número 476 do leetcode, sessão de algoritmos,  Number Complement
    https://leetcode.com/problems/number-complement/
*/

class Solution {
public:
    int findComplement(int num) {
        int aux = num, comp, leading = 0;
        
        while (aux != 0) {
            aux = aux>>1;
            leading++;
        }//contei os leadings
        leading = 31 - leading;
        
        aux = INT_MAX; //0111111...1
        aux = aux >> leading;//000000...111
        cout << aux << endl; // Para o 5 deve ser 7
        
        
        comp = num ^ aux;
        
        
        
        return comp;
    }
};