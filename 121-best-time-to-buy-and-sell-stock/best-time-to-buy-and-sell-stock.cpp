class Solution {
public:
    int maxProfit(vector<int>& p) {
        int l=0,r=1,max=0;
        while(r<p.size())
        {
            if(p[l]<p[r])
        {
            int n = p[r]-p[l];
            if(max<n){max=n;}
            else{r++;}
        }
        else{
            l=r;
            r++;
        }}
        return max;
    }
};