class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>ans(nums.begin(),nums.end());
        for(int i=0;i<=nums.size();i++)
        {
            if(ans.find(i)==ans.end())
            return i;
        }
        return 0;
    }
};