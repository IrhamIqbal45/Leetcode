class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2){
        //Method : 1
        vector<vector<int>>ans;
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i][0]<nums2[j][0])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i][0]>nums2[j][0])
            {
                ans.push_back(nums2[j]);
                j++;
            }
            else
            {
                ans.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]});
                i++;
                j++;
            }
        }
            while(i<nums1.size())
            {
                ans.push_back(nums1[i]);
                i++;
            }
            while(j<nums2.size())
            {
                ans.push_back(nums2[j]);
                j++;
            }     
        return ans;
        // Method : 2
        // map<int,int>mp;
        // for(auto v:nums1)
        // {
        //     mp[v[0]] = v[1];
        // }
        // for(auto v:nums2)
        // {
        //     mp[v[0]] += v[1];
        // }
        // for(auto v:mp)
        // {
        //     ans.push_back({v.first,v.second});
        // }
    }
};