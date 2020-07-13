/*
    Solução do problema número 451 do leetcode, sessão de algoritmos, Sort Characters By Frequency
    https://leetcode.com/problems/sort-characters-by-frequency/
*/

class Solution {
public:
    
    static bool sortBySec(const pair<char, int> &element1, const pair<char, int> &element2) {
            return element1.second > element2.second;
    }
    
    string frequencySort(string s) {
        unordered_map<char, int> qt;
        for (int i = 0; i < s.size(); i++) {
            if (qt.find(s[i]) == qt.end()) {
                qt[s[i]] = 1;
            } else {
                qt[s[i]]++;
            }
        }
        vector<pair<char, int>> qt_vector;
        for (unordered_map<char, int>::iterator it = qt.begin(); it != qt.end(); ++it) {
            qt_vector.push_back(make_pair(it->first, it->second));
        }
        
        sort(qt_vector.begin(), qt_vector.end(), sortBySec);
        string str;
        for(int i = 0; i < qt_vector.size(); i++) {
            str.append(qt_vector[i].second, qt_vector[i].first);
        }
        return str;
    }
};