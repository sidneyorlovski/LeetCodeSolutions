/*
    Solução do problema número 8 do leetcode, sessão de algoritmos, String to Integer (atoi).
    https://leetcode.com/problems/string-to-integer-atoi/
*/
class Solution {
public:
    int myAtoi(string str) {
        string min_int = "2147483648";
        string max_int = "2147483647";
        int a = -2147483647;
        int i, k = 1, cv = 0, tr = 0, aux = 0, l = 0;
        
        if ((str.compare("+") == 0)||(str.compare("-") == 0)||(str.compare("") == 0)) {
            return 0;
        }
        
        while (str[l] == ' ')
            str.erase(l,1);
        
        for (int j = 0; j < str.size(); j++) {
            if ((str[j] - '0') < 0 || (str[j] - '0') > 9) { //Caractere não-digito
                if (j != 0) { //Tem caractere estranho que não está no inicio da string (que poderia ser +-)
                    int aux = str.size();
                    for (l = j; l < aux; l++) {
                        str.erase(j, 1);
                    }
                    str.erase(j, 1);
                    cout << str << endl;
                } else {
                    if ((str[j] != '+')&&(str[j] != '-')) {
                        return 0;
                    }
                }
            }
        }
        
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == ' ' && l == 0) {
                l++;
            }
            if (str[j] == ' ' && l != 0) {
                return 0;
            }
        }
        
        l = 0;
        if (str[0] == '+' || str[0] == '-') {
            l = 1;
        }
        while (str[l] == '0') {
            str.erase(l,1);
        }
        
        i = str.size();
        if (str.size() > 11) {
            if (str[0] == '-') {
                return INT_MIN;
            } else {
                return INT_MAX;
            }
        } else { //tem 11 ou menos digitos. Só pode ter 11 se o primeiro for o símbolo '-' ou '+'
            if ((str.size() == 10) && ((str[0] != '+')&&(str[0] != '-'))) {
                for (int j = 0; j < i; j++) {
                   if ((str[j] - '0') < (max_int[j] - '0')) {
                       j = str.size();
                   } else if ((str[j] - '0') > (max_int[j] - '0')) {
                       return INT_MAX;
                   }
                }
            } else if ((str.size() == 11)&&(str[0] == '-')) {
                cout << str << endl << min_int << endl;
                for (int j = 1; j < i; j++) {
                   if ((str[j] - '0') < (min_int[j - 1] - '0')) {
                       j = str.size();
                   } else if ((str[j] - '0') > (min_int[j - 1] - '0')) {
                       return INT_MIN;
                   }
                }
            }  else if ((str.size() == 11)&&(str[0] == '+')) {
                for (int j = 1; j < i; j++) {
                   if ((str[j] - '0') < (max_int[j] - '0')) {
                       j = str.size();
                   } else if ((str[j] - '0') > (max_int[j] - '0')) {
                       return INT_MAX;
                   }
                }
            } else if (str.size() == 11) {
                if (str[0] == '-')
                    return INT_MIN;
                else
                    return INT_MAX;
            }
                
            if (str[0] == '-') {
                tr = 1;
                aux = 1;
            } else if (str[0] == '+') {
                tr = 1;
            }
            
            while (i > tr) {
                cv = cv + ((str[i-1]-'0')*k);
                k = k*10;
                i--;
            }
            
            if (aux == 1)
                cv = cv*(-1);
            }
        return cv;
    }
};