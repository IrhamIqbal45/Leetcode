class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>ans;
        int a=0;
        for(auto i:nums)
        {
        ans.insert(i);
        }
        nums.clear();
        for(auto v:ans)
        {
            nums.push_back(v);
            a++;
        }
        return a;
    }
};