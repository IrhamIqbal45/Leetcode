class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        int n= accounts.size();
        for(int i=0;i<n;i++)
        {
            int sum=0;
            int m = accounts[i].size();
            for(int j=0;j<m;j++)
            {
                sum += accounts[i][j]; 
            }
            if(ans==0)
            {
                ans=sum;
            }
            else
            {
                ans = max(ans,sum);
            }
        }
        return ans;
    }
};