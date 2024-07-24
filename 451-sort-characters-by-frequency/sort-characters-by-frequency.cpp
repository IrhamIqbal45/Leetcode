class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>ans;
        for(auto v:s)
        {
            ans[v]++;
        }
        sort(s.begin(),s.end(), [&ans](char a,char b){
            return ans[a]==ans[b]?a<b:ans[a]>ans[b];
        });
        return s;
    }
};