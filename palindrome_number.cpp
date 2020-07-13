/*
    Solução do problema número 9 do leetcode, sessão de algoritmos, Palindrome Number
    https://leetcode.com/problems/palindrome-number/
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int qtd_digitos = 0, y;
        y = x;
        //conta os digitos
        while (y != 0) {
            y = y/10;
            qtd_digitos++;
        }
        int iteracoes = (qtd_digitos/2), k1, k2;
        
        //cout << iteracoes << ' ' << qtd_digitos << endl;
        
        k1 = 10;
        k2 = pow(10, qtd_digitos-1);
        
        while (iteracoes != 0) {
            //cout << k2 << ' ' << x%k1 << endl;
            if (x/k2 != x%k1) { //Digitos diferentes
                return false;
            }
            
            x = x-(k2*(x/k2)); //Tira o digito mais significativo
            x = x/10; //Tira o digito menos significativo
            //cout << x << endl;
            k2 = k2/100;
            iteracoes--;
        }
        return true;
        
    }
};