/*
    Solução do problema número 575 do leetcode, sessão de algoritmos,  Distribute Candies
    https://leetcode.com/problems/distribute-candies/
*/

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_map<int, int> kinds;
        for (int i = 0; i < candies.size(); i++) {
            if (kinds.find(candies[i]) == kinds.end())
                kinds.insert(make_pair(candies[i], 1));
        }
        cout << kinds.size() << " " << candies.size() << endl;
        return min(candies.size()/2, kinds.size());
        
    }
};