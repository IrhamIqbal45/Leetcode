class Solution {
public:
    vector<int> diStringMatch(string s) {
        int slow = 0,fast=s.size();
        vector<int>ans;
        for(auto v:s)
        {
            if(v == 'I')
            {
                ans.push_back(slow);
                slow++;
            }
            else
            {
                ans.push_back(fast);
                fast--;
            }
        }
        ans.push_back(fast);
        return ans;
    }
};