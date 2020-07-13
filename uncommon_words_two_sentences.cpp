/*
    Solução do problema número 884 do leetcode, sessão de algoritmos, Uncommon Words from Two Sentences
    https://leetcode.com/problems/uncommon-words-from-two-sentences/
*/

class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        map<string, int> mapA;
        map<string, int> mapB;
        istringstream issA(A);
        istringstream issB(B);
        string aux;
        while (getline(issA, aux, ' ')) {
            if (mapA.find(aux) == mapA.end()) {
                mapA[aux] = 1;
            } else {
                mapA[aux] = 2;
            }
        }
        while (getline(issB, aux, ' ')) {
            if (mapA.find(aux) == mapA.end()) {
                mapA[aux] = 1;
            } else {
                mapA[aux] = 2;
            }
        }
        vector<string> words;
        for (map<string, int>::iterator it = mapA.begin(); it != mapA.end(); ++it) {
            if (mapB.find(it->first) == mapB.end() && it->second == 1) {
                words.push_back(it->first);
            }
        }
        return words;
    }
};