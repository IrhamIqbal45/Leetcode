class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        if(pushed.size() != popped.size()) return false;
        int l=0;
        stack<int>ans;
        for(int i=0;i<pushed.size();i++)
        {
            ans.push(pushed[i]);
            while(!ans.empty() && ans.top() == popped[l])
            {
                ans.pop();
                l++;
            }
        }
        return ans.empty();
    }
};