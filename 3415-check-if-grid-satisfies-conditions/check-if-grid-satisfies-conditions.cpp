class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        for (int i = 0; i + 1 < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] != grid[i+1][j]) {
                    return false;
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j + 1 < m; ++j) {
                if (grid[i][j] == grid[i][j+1]) {
                    return false;
                }
            }
        }
        return true;
    }
    
};