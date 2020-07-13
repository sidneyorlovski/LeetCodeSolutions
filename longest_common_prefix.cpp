/*
    Solução do problema número 14 do leetcode, sessão de algoritmos, Longest Common Prefix
    https://leetcode.com/problems/longest-common-prefix/
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<char> lcp;
        if (strs.size() == 0)
            return "";
        int min = strs[0].length();
        for (int i = 0; i < strs.size(); i++) {
            if (min > strs[i].length())
                min = strs[i].length();
        }
        
        int dif = 0;
        for (int i = 0; i < min; i++) {
            char aux = strs[0][i];
            for (int j = 0; j < strs.size(); j++) {
                if (strs[j][i] != aux) {
                    dif = 1;
                    break;
                }
            }
            if (dif == 0) {
                lcp.push_back(aux);
            } else {
                break;
            }
        }
        
        if (lcp.size() == 0) { return "";}
        
        string lcp_string(lcp.begin(), lcp.end());
        cout << lcp_string << endl;
        return lcp_string;
    }
};