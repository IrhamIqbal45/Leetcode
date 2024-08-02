class Solution {
public:
    string removeTrailingZeros(string num) {
        int loc = num.find_last_not_of('0');
        if(loc != -1)
        {
            num.erase(loc+1);
        }
        else
        {
            num.clear();
        }
        return num;
    }
};