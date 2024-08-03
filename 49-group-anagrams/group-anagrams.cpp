class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto v:strs)
        {
            string ans = v;
            sort(ans.begin(),ans.end());
            mp[ans].push_back(v);
        }
        vector<vector<string>>ces;
        for(auto it:mp)
        {
            ces.push_back(it.second);
        }
        return ces;
    }
};