class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int a=0,b=0;
        for(auto v:nums)
        {
            mp[v]++;
        }
        for(auto it:mp)
        {
            if(it.second>a)
            {
                a=it.second;
                b=it.first;
            }
        }
        return b;

    }
};