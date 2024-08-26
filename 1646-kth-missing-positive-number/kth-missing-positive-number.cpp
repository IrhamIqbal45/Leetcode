class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0,ans=1;
        while(count!=k)
        {
            if(find(arr.begin(),arr.end(),ans)==arr.end())
            {
                count++;
                ans++;
            }
            else
            ans++;
        }
        return ans-1;
    }
};