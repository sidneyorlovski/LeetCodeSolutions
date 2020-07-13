/*
    Solução do problema número 463 do leetcode, sessão de algoritmos,  Island Perimeter
    https://leetcode.com/problems/island-perimeter/
*/

class Solution {
public:
    
    bool respect_dim_boundaries(int pos, int delta, int max_dimension) {
        if ((pos + delta >= 0) && (pos+delta <= max_dimension)) {
            return true;
        }
        return false;
    }
    int position_perimeter(vector<vector<int>>& grid, int x, int y) {
        int partial_perimeter = 0;
        if (grid[x][y] == 1) {
            
            int desl[4] = {0, 0, -1, 1};
            for (int dx = 0, dy = 3; dx <= 3 && dy >= 0; dx++, dy--) {
                    if (respect_dim_boundaries(x, desl[dx], grid.size()-1) && respect_dim_boundaries(y, desl[dy], grid[x].size()-1)) {
                        if (grid[x+desl[dx]][y+desl[dy]] == 0) {
                            partial_perimeter++;
                        }
                    } else {
                        partial_perimeter++;
                    }
            }
        }
        return partial_perimeter;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                //For each matrix position, check the boundaries
                perimeter += position_perimeter(grid, i, j);
            }
        }
        return perimeter;
    }
};