class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int a=0;
        int r=x;
        while(r>0)
        {
            a+=r%10;
            r /= 10;
        }
        if(x%a==0)
        return a;
        return -1;
    }
};