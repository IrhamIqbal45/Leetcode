class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n =grid.size();
        int m = grid[0].size();
        vector<vector<int>>res(n-2, vector<int>(m-2));

        // auto findlargest = [&grid](int row,int col){
        //     int best = grid[row][col];
        //     for(int i=row;i<row+3;i++)
        //     {
        //         for(int j=col;j<col+3;j++)
        //         {
        //             best = max(best,grid[i][j]);
        //         }
        //     }

        //     return best;
        // };

        for(int i=0;i<n-2;i++)
        {
            for(int j=0;j<grid[i].size()-2;j++)
            {
                int a=0;
               for(int k=i;k<i+3;k++)
               {
                for(int r=j;r<j+3;r++)
                {
                    a=max(a,grid[k][r]);
                }
               }
               res[i][j]=a;
            }
        }
        return res;
        
    }
};