class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        vector<double> ans;
        while(i<j)
        {
            ans.push_back((nums[i]+nums[j])/2.0);
            i++;
            j--;
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};