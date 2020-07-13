/*
    Solução do problema número 7 do leetcode, sessão de algoritmos, Reverse Integer
    https://leetcode.com/problems/reverse-integer/
*/

class Solution {
public:
    int reverse(int x) {
        if ((x < INT_MIN) || (x > INT_MAX)) {
            return 0;
        }
        int k = 10, digito, anterior = 0;
        int digitos[10], i = 0, retorno;
        double resposta = 0;
        while (x != 0) { //Quando o resto for igual ao próprio número, não há mais dígitos a serem escolhidos
            digito = (x%k);
            //cout << digito << endl;
            digitos[i] = digito;
            x = x/10;
            i++;
        }
        i--;
        double kk = 1;
        while (i >= 0) {
            resposta = resposta + digitos[i]*kk;
            kk = kk*10;
            i--;
            //cout << resposta << endl;
        }
        if (resposta > INT_MAX || resposta < INT_MIN) {
            return 0;
        } else {
            return resposta;
        }
    }
};