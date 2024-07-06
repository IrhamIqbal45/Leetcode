class Solution {
public:
    bool isPalindrome(string s) {
        int first =0;
        int end = s.size()-1 ;
        while(first<end){
            while(!isalnum(s[first]) && first<end){
                first++;
            }
            while(!isalnum(s[end]) && first<end){
                end--;
            }
            if(tolower(s[first]) != tolower(s[end]))
            {
                return false;
            }
            first++;
            end--;
        }
        return true;    
    }
};

