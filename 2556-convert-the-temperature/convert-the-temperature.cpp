class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        // vector<double>ans;
        // ans.push_back(cel + 273.15);
        // ans.push_back(cel * 1.80 + 32.00);
        // return ans;
        double kelvin=celsius+273.15;
        double fahren=celsius*1.80+32.00;
        return {kelvin,fahren};
    }
};