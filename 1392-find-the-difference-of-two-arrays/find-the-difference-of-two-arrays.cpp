class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        // unordered_map<int,int>mp;
        // unordered_map<int,int>np;        
        vector<int>ans,mas;
        vector<vector<int>>a;
        // for(auto v:nums1)
        // {
        //     mp[v]++;
        // }
        // for(auto v:nums2)
        // {
        //     np[v]++;
        // }
        // for(auto v:nums2)
        // {
        //     mp[v]--;
        // }
        // for(auto v:nums1)
        // {
        //     np[v]--;
        // }
        // for(auto v:mp)
        // {
        //     ans.push_back(v.first);
        // }
        // for(auto v:np)
        // {
        //     mas.push_back(v.first);
        // }
        // a.push_back(ans);
        // a.push_back(mas);
        // return a;
    set<int> set1(nums1.begin(), nums1.end());
    set<int> set2(nums2.begin(), nums2.end());
    for (int num : set1) {
        if (set2.find(num) == set2.end()) {
            ans.push_back(num);
        }
    }
    for (int num : set2) {
        if (set1.find(num) == set1.end()) {
            mas.push_back(num);
        }
    }
    a.push_back(ans);
    a.push_back(mas);
    return a;
    }
};