class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int threshold = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<k)
            threshold++;
        }
        return threshold;
    }
};