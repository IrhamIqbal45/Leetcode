class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long a=x;
        long b=0;
        while(a>0)
        {
            long da=a%10;
            b=b*10+da;
            a /= 10;
        } 
        if(b==x) return true;
        return false;
    }
};