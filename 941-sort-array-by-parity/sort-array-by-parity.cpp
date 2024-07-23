class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans,mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                ans.push_back(nums[i]);
            }
            else
            {
                mp.push_back(nums[i]);
            }
        }
        for(auto v:mp)
        {
            ans.push_back(v);
        }
        return ans;
    }
};