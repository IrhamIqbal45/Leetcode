class Solution {
public:
    bool isHappy(int n) {
        
        set<int>ans;
        if(n==1) return true;  
        while(n!=1)
        {
            int num=0;
            while(n != 0)
            {
                int lead = n % 10;
             num += lead * lead;
             n = n / 10;
        }
        n=num;
        if(num == 1) return true;
        if(ans.find(num)==ans.end())
        {
            ans.insert(num);
        }
        else
        {
            return false;
        }
        }
        
        return false;
    }
};