class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int , string>mymap;
        for(int i=0;i<names.size();i++)
        {
            mymap[heights[i]] = names[i] ;
        }
        vector<string> ans;
        for(auto m:mymap)
        {
            ans.push_back(m.second);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};