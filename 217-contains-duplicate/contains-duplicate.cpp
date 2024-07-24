class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>mp;
        for(auto n:nums)
        {
            if(mp.count(n) != 0)
            return true;
            mp.insert(n);
        }
        return false;
    }
};