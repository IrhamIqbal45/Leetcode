class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        for(auto v:nums)
        {
            mp[v]++;
        }
        for(auto v:mp)
        {
            if(v.second == 2)
            {
                ans^=v.first;
            }
        }
        return ans;
    }
};