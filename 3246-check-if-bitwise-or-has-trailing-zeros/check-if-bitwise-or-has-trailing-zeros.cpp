class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int n=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int a = nums[i] | nums[j];
                if((a & 1) == 0 )
                return true;
            }
        }
        return false;
    }
};