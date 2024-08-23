class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int a=1;
        for(auto v:nums)
        {
            mp[v]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(a) == mp.end())
            {
                ans.push_back(a);
                a++;
            }
            else
            a++;
        }
        return ans;
    }
};