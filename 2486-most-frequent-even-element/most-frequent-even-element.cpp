class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxFreq = 0;
        int minNum = -1;
        for(auto v:nums)
        {
            if(v%2==0)
            {
                mp[v]++;
            }
        }
        for(auto v:mp)
        {
            if(v.second>maxFreq)
            {
                maxFreq = v.second;
                minNum = v.first;
            }
            else if(v.second == maxFreq)
            {
                if(v.first<minNum)
                {
                    minNum = v.first;
                }
            }
        }
        return minNum;
    }
};