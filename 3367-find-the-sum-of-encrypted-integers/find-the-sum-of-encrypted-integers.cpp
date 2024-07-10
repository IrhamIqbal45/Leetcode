class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
    int sum = 0;
    for(auto n: nums){
        int count = 0, m = 0, t = 0;
        while(n){
            m = max(m, n%10);
            n = n/10;
            count++;
        }
        while(count){
            t = t*10 + m;
            count--;
        }
        sum += t;
    }
    return sum;
}
};