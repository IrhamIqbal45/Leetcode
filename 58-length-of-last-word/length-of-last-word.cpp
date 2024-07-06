class Solution {
public:
    int lengthOfLastWord(string s) {
        int max=0;
        int st=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == ' ')
            {
                max=0;
            }
            else
            {
                
                max++;
                st=max;
            }
        }
        return st;
    }
};