class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool od=false;
        int a=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==1)
            {
                a++;
                 if(a==3)
            od=true;
            }
            else
            a=0; 
        }
        return od;
    }
};