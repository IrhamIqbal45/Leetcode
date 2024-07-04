class Solution {
public:
    string finalString(string s) {
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='i')
            {
                reverse(ans.rbegin(),ans.rend());
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};