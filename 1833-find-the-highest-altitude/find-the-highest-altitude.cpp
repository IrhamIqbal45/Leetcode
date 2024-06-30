class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int min_value=0;
        for(int i=0;i<gain.size();i++)
        {
            sum+=gain[i];
            min_value = max(min_value,sum);
        }
        return min_value;
    }
};