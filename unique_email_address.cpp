/*
    Solução do problema número 929 do leetcode, sessão de algoritmos, Unique Email Addresses
    https://leetcode.com/problems/unique-email-addresses/
*/
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uSet;
        for (int i = 0; i < emails.size(); i++) {
            size_t at_index = emails[i].find("@");
            
            //Erase anything betwwen the first + and the first @
            size_t plus_index = emails[i].find("+");
            if (plus_index && plus_index < at_index) {
                emails[i].erase(plus_index, at_index-plus_index);
            }   
            at_index = emails[i].find("@");
            bool found = false;
            size_t dot_index = emails[i].find(".");
            if (dot_index && dot_index < at_index) {
                found = true;
            }
            
            //Erase the .s as long as they are behind the first @
            while (found) {
                emails[i].erase(dot_index, 1);
                found = false;
                dot_index = emails[i].find(".");
                if (dot_index && dot_index < at_index) {
                    found = true;
                }
            }
            uSet.emplace(emails[i]);
        }
        return uSet.size();
    }
};