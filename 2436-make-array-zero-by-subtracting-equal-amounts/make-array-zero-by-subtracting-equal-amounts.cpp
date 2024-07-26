class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int>ans;
        for(auto v:nums)
        {
            if(v != 0)
            {
                ans.insert(v);
            }
        }
        return ans.size();
    }
};