class Solution {
public:
    int myAtoi(string s) {
        if(s.size()==0) return 0;
        long result=0,i=0,sign=1;
        while(s[i]==' '){i++;}
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
        {
            i++;
        }
        while(i<s.size())
        {
            if(s[i]>='0' && s[i]<='9')
            {
                result = result*10 + (s[i++]-'0');
            }
            else break;
            if(sign*result > INT_MAX)
            {
                return INT_MAX;
            }
            else if(sign*result < INT_MIN)
            {
                return INT_MIN;
            }
        }
        result = sign * result;
        return result;
    }
};