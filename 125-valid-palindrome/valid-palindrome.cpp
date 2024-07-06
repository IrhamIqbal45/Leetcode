class Solution {
public:
    bool isPalindrome(string s) {
    //     bool pal=true;
    //     string res;
    //     for(char v:s)
    //     {
    //         if(isalnum(v))
    //         {
    //             res += tolower(v);
    //         }
    //     }
    //     int i=0;
    //     int j=res.size()-1;
    //     while(i<=j)
    //     {
    //         if(res[i++]!=res[j--])
    //         {
    //             pal=false;
    //         }
    //     }
    //     return pal;
    // }
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

