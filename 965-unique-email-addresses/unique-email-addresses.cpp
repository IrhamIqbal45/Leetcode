class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>mp;
        for(int i=0;i<emails.size();i++)
        {
            string ans= "";
            for(int j=0;j<emails[i].size();j++)
            {
                // cout<<emails[i][j]<<endl;
                if(emails[i][j] != '.' && emails[i][j] != '+' && emails[i][j] != '@')
                ans += emails[i][j];
                else if(emails[i][j] == '+')
                {
                    while(emails[i][j] != '@' ) j++;
                    for(int k=j;k<emails[i].size();k++)
                    {
                        ans += emails[i][k];
                        j++;
                    }
                }
                else if(emails[i][j] == '@')
                {
                    for(int k=j;k<emails[i].size();k++)
                    {
                        ans += emails[i][k];
                        j++;
                    }
                }
                // cout<<ans<<endl;
            }
            cout<<ans<<endl;
            mp.insert(ans);
        }
        return mp.size();
    }
};