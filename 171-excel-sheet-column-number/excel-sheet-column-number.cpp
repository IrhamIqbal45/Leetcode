class Solution {
public:
    int titleToNumber(string columnTitle) {
        int a=0;
        for(auto v:columnTitle)
        {
            a = a * 26 + (v - 'A' + 1);
        }
        return a;
    }
};