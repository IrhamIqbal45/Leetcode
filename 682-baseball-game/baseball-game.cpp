class Solution {
public:
    int calPoints(vector<string>& op) {
        int sum=0;
        stack<int>ans;
        for(auto v:op)
        {
             if(v == "C")
             ans.pop();
             else if(v == "D")
             ans.push(2 * ans.top());
             else if(v == "+")
             {
                int a=ans.top();
                ans.pop();
                int b=ans.top();
                ans.push(a);
                ans.push(a+b);
             }
             else
             ans.push(stoi(v));
        }
        while(!ans.empty())
        {
            sum += ans.top();
            ans.pop();
        }
        return sum;
    }
};