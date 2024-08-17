class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x1 = 0,x2 = 0,mash = 0;
        for(auto num:nums)
        {
            x2 ^= num & x1;
            x1 ^= num;
            mash = ~(x2 & x1);
            x2 &= mash;
            x1 &= mash;
        }
        return x1;
    }
};