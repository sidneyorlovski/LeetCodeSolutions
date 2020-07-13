/*
    Solução do problema número 832 do leetcode, sessão de algoritmos, Flipping an Image
    https://leetcode.com/problems/flipping-an-image/
*/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
      for (int i = 0; i < A.size(); i++) {
          int lim = A[i].size()-1;
          for (int j = 0; j < (A[i].size())/2; j++) {
              int aux = A[i][j];
              A[i][j] = A[i][lim];
              A[i][lim] = aux;
              A[i][j] == 0 ? A[i][j] = 1 : A[i][j] = 0;
              A[i][lim] == 0 ? A[i][lim] = 1 : A[i][lim] = 0;
              lim--;
          }
          if (A[i].size()%2 != 0) {
              A[i][A[i].size()/2] == 0 ? A[i][A[i].size()/2] = 1 : A[i][A[i].size()/2] = 0;
          }
      }
      return A;
    }
};