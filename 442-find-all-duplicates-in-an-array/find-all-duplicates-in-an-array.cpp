class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto v:nums)
        {
            mp[v]++;
        }
        for(auto v:mp)
        {
            if(v.second >= 2)
            ans.push_back(v.first);
        }
        return ans;
    }
};