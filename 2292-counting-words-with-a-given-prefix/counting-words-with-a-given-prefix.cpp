class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(auto v:words)
        {
            if(v.substr(0,pref.size()) == pref)
            count++;
        }
        return count;
    }
};