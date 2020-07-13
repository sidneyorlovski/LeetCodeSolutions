/*
    Solução do problema número 728 do leetcode, sessão de algoritmos, Self Dividing Numbers
    https://leetcode.com/problems/self-dividing-numbers/
*/
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vetor;
        int lim_superior = right;
        int lim_inferior = left;

        if (lim_superior < lim_inferior) {
            int novo_lim_superior = 0;
            novo_lim_superior = lim_inferior;
            lim_inferior = lim_superior;
            lim_superior = novo_lim_superior;
        }

        int num = 0;
        int nao_divisivel = 0;
        for ( int i = lim_inferior ; i <= lim_superior ; i++ ) {
            num = i;
            nao_divisivel = 0;
            int num_principal = num;
            for ( ; num != 0 ; num = num /10) {
                int digito_resto = 0;
                digito_resto = num % 10;
        
                if ( digito_resto == 0) {
                    nao_divisivel = 1;
                    num = 0;
                } else if (num_principal % digito_resto != 0) {
                    num = 0;
                    nao_divisivel = 1;
                }
            }
    
            if (!nao_divisivel) {
                vetor.push_back(num_principal);
            }

        }

        return vetor;
    }
};