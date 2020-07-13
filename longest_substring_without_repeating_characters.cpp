/*
    Solução do problema número 3 do leetcode, sessão de algoritmos,  Longest Substring Without Repeating Characters
    https://leetcode.com/problems/longest-substring-without-repeating-characters/
*/

class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> found_characters;
        queue<char> characters;
        int count = 0, longest = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (found_characters.find(s[i]) == found_characters.end()) {//Caractere novo
                found_characters.insert(make_pair(s[i], i));
                characters.push(s[i]);
                count++;
            } else {
                if (count > longest) {
                    longest = count;
                }
                while (characters.front() != s[i]) {
                    found_characters.erase(characters.front());
                    characters.pop();
                    count--;
                }
                characters.pop();
                characters.push(s[i]);
                found_characters[s[i]] = i;
            }
        }
        if (count > longest) {
            longest = count;
        }
        return longest;
    }

};