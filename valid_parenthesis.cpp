/*
    Solução do problema número 20 do leetcode, sessão de algoritmos, Valid Parentheses
    https://leetcode.com/problems/valid-parentheses/
*/

#include <stack>
class Solution {
public:
    bool isValid(string s) {
        
        if (s.length() <= 1)
            return false;
        
        stack<char> closes;
        cout << s.length();
        for (int i = 0; i < s.length(); i++) {
            
            switch (s[i]) {
                case '(':
                    closes.push(s[i]);
                    break;
                case ')':
                    if (!closes.empty()) {
                        if (closes.top() != '(') {
                            return false;
                        } else {
                            closes.pop();
                        }
                    } else {
                        return false;
                    }
                    break;
                case '[':
                    closes.push(s[i]);
                    break;
                case ']':
                    if (!closes.empty()) {
                        if (closes.top() != '[') {
                            return false;
                        } else {
                            closes.pop();
                        }
                    } else {
                        return false;
                    }
                    break;
                case '{':
                    closes.push(s[i]);
                    break;
                case '}':
                     if (!closes.empty()) {
                        if (closes.top() != '{') {
                            return false;
                        } else {
                            closes.pop();
                        }
                    } else {
                        return false;
                    }
                    break;
            }    
        }
        if (closes.empty())
            return true;
        else
            return false;
    }
};