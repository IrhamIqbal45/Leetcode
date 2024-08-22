class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int a=1;
        unordered_map<int,int>mp;
        for(auto v:nums)
        {
            mp[v]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(a) == 0)
            {
                return a;
            }
            else
            {
                a++;
            }
        }
        return a;
    }
};