class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        // int count=0;
        // int r=0;
        // while(r<startTime.size())
        // {
        //     for(int i=startTime[r];i<=endTime[r];i++)
        //     {
        //         if(i == queryTime)
        //         count++;
        //     }
        //     r++;
        // }
        // return count;
        int res=0;
        for(int i=0;i<startTime.size();++i)
        {
            if(startTime[i]<=queryTime && queryTime<=endTime[i])
            res++;
        }
        return res;
    }
};