class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      n= nums.size()/2;
      int a=0;
      vector<int>ans;
      for(int i=0;i<nums.size();i++)
      {
        if(i%2==0)
        {
            ans.push_back(nums[a]);
            a++;
        }
        else{
            ans.push_back(nums[n]);
            n++;
        }
      }
      return ans;
    }
};