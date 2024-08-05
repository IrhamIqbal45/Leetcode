class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int a=nums.size()/3;
        for(auto v:nums)
        {
            mp[v]++;
        }
        vector<int>ans;
        for(auto it:mp)
        {
            if(it.second>a)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};