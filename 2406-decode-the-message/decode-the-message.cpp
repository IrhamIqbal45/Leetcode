class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>ans;
        char a = 'a';
        for(auto v:key)
        {
            if(v != ' ' && ans.find(v) == ans.end())
            {
                ans[v] = a++;
            }
        }
        string b="";
        for(auto v:message)
        {
            if(v != ' ')
            {
                b.push_back(ans[v]);
            }
            else
            {
                b.push_back(v);
            }
        }
        return b;
    }
};