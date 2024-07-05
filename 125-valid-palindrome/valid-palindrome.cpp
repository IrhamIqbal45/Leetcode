class Solution {
public:
    bool isPalindrome(string s) {
        bool pal=true;
        string res;
        for(char v:s)
        {
            if(isalnum(v))
            {
                res += tolower(v);
            }
        }
        int i=0;
        int j=res.size()-1;
        while(i<=j)
        {
            if(res[i++]!=res[j--])
            {
                pal=false;
            }
        }
        return pal;
    }
};