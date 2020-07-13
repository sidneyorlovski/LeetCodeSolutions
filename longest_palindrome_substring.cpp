/*
    Solução do problema número 5 do leetcode, sessão de algoritmos, Longest Palindromic Substring
    https://leetcode.com/problems/longest-palindromic-substring/
*/

class Solution {
public:
    
    bool checkPalindrome(char s[], size_t length) {
        int j = length - 1;
        for (int i = 0; i < length/2; i++) {
            if (s[i] != s[j]) {
                return false;
            }
            j--;
        }
        return true;
    }
    
    string longestPalindrome(string s) {
        char buffer[1001];
        int max = 0, x = 0, y = 0;
        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j <= s.size(); j++) {
                size_t length = s.copy(buffer, j-i, i);
                buffer[length] = '\0';
                if (length > max) {
                    bool pal = checkPalindrome(buffer, length);
                    if (pal && (length > max)) {
                        max = length;
                        x = i;
                        y = j;
                    }
                }
            }
        }
        
        size_t length = s.copy(buffer, y-x, x);
        buffer[length] = '\0';
        s = buffer;
        
        return s;
    }
};