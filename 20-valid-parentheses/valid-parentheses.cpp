class Solution {
public:
    bool isValid(string s) {
        stack<int>ans;
        unordered_map<char,char>mp;
        mp['}']='{';
        mp[')']='(';
        mp[']']='[';
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                ans.push(s[i]);
            }
            else if(s[i]==')'||s[i]=='}'||s[i]==']')
            {
                if(ans.empty())
                {return false;}
                else if(ans.top()==mp[s[i]])
                {
                    ans.pop();
                }
                else
                {return false;}
            }
        }
        if(ans.empty()) {return true;}
        else {return false;}
    }
};