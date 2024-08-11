class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2){
        vector<vector<int>>ans;
        map<int,int>mp;
        for(auto v:nums1)
        {
            mp[v[0]] = v[1];
        }
        for(auto v:nums2)
        {
            mp[v[0]] += v[1];
        }
        for(auto v:mp)
        {
            ans.push_back({v.first,v.second});
        }
        return ans;
    }
};