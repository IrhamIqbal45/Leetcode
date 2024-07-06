class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size();
        while(l<r)
        {
            if(nums[l]>=target)
            {
                break;
            }
            l++;
        }
        return l;
    }
};