class Solution {
public:

    int min(int a,int b)
    {
        if(a<b)
        return a;
        else
        return b;
    }
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long sum = 0;
        long long count = 1;
        for(int i=0;i<nums.size() && k>0;i++)
        {
            if(nums[i]>count)
            {
                long long mul = min(k,nums[i]-count);
                sum+=(long long)mul * (count+count+mul-1)/2;
                k -= mul;
            }
            count = nums[i]+1;
        }
        if(k>0)
        {
            sum+=(long long)k * (count + count + k -1)/2;
        }
        return sum;
    }
};