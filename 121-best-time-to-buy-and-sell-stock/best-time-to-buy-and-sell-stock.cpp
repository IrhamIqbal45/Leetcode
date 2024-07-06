class Solution {
public:
    int maxProfit(vector<int>& p) {
    //     int l=0,r=1,max=0;
    //     while(r<p.size())
    //     {
    //         if(p[l]<p[r])
    //     {
    //         int n = p[r]-p[l];
    //         if(max<n){max=n;}
    //         else{r++;}
    //     }
    //     else{
    //         l=r;
    //         r++;
    //     }}
    //     return max;
    // }
    int maxPro = 0;
    int minPrice = INT_MAX;
    for(int i = 0; i < p.size(); i++)
    {
        minPrice = min(minPrice, p[i]);
        maxPro = max(maxPro, p[i] - minPrice);
    }
    return maxPro;
    }
};