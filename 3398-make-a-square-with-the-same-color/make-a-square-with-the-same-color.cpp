class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                if(grid[i][j]==grid[i][j+1] && grid[i][j]==grid[i+1][j])
                {
                    return true;
                }
            if(grid[i][j+1]==grid[i][j] && grid[i][j+1]==grid[i+1][j+1])
            {
                return true;
            }
            if(grid[i][j+1]==grid[i+1][j+1] && grid[i+1][j+1]==grid[i+1][j])
            {
                return true;
            }
            if(grid[i][j]==grid[i+1][j] && grid[i+1][j]==grid[i+1][j+1])
            {
                return true;
            }
            }
        }
        return false;
    }
};