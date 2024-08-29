class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>ans;
        char startCol = s[0];
        char endCol = s[3];
        char startRow = s[1];
        char endRow = s[4];

        for (char c = startCol; c <= endCol; ++c) 
        {
            for (char r = startRow; r <= endRow; ++r) 
            {
                ans.push_back(string(1, c) + r);
            }
        }
    return ans;
    }
};