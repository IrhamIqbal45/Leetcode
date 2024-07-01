class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int eve=0,od=0;
        bool pair=true;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                eve++;
                od=0;
                if(eve==2)
                {
                    pair=false;
                }
            }
            else
            {
                od++;
                eve=0;
                if(od==2)
                {
                    pair=false;
                }
            }
        }
        return pair;
    }
};