class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (t.size() != s.size()) {
        return false;
    }

    std::unordered_map<char, char> fir;
    std::unordered_map<char, char> sec;

    for (int i = 0; i < s.size(); ++i) {
        char a = s[i];
        char b = t[i];

        if (fir.find(a) != fir.end()) {
            if (fir[a] != b) {
                return false;
            }
        } else {
            fir[a] = b;
        }

        if (sec.find(b) != sec.end()) {
            if (sec[b] != a) {
                return false;
            }
        } else {
            sec[b] = a;
        }
    }

    return true;
    }
};