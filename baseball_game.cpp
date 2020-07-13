/*
    Solução do problema número 682 do leetcode, sessão de algoritmos, Baseball Game
    https://leetcode.com/problems/baseball-game/
*/

class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum = 0;
        stack<int> rounds;
        rounds.push(0);
        rounds.push(0);
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == "D") {
                sum += (rounds.top()*2);
                rounds.push((rounds.top()*2));
            } else if (ops[i] == "+") {
                int aux = rounds.top();
                rounds.pop();
                int aux2 = rounds.top();
                sum = sum + aux + aux2;
                rounds.push(aux);
                rounds.push(aux2+aux);
            } else if (ops[i] == "C") {
                sum -= rounds.top();
                rounds.pop();
            } else {
                int aux = stoi(ops[i]);
                sum += aux;
                rounds.push(aux);
            }
        }
        return sum;
    }
};