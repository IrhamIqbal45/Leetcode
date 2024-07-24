class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>ans;
        for(auto v:nums)
        {
            ans[v]++;
        }
        sort(nums.begin(),nums.end(), [&ans](int a,int b){
            return ans[a]==ans[b]?a>b:ans[a]<ans[b];
        });
        return nums;
    }
};