class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        vector<char>ans;
    //    int l=0;
    //    int r=0; 
    //    while(l<word1.size() && r<word2.size())
    //    {
    //     ans.push_back(word1[l++]);
    // ans.push_back(word2[r++]);
    //    }
    //    while(l<word1.size())
    //    {
    //     ans.push_back(word1[l++]);
    //    }
    //    while(r<word2.size())
    //    {
    //     ans.push_back(word2[r++]);
    //    }
    //    return string(ans.begin(),ans.end());   
    //  }
    if(word1.size()>word2.size())
    {
        for(int i=0;i<word1.size();i++)
        {
            if(i<word1.size()&&i<word2.size())
            {
                ans.push_back(word1[i]);
                ans.push_back(word2[i]);
            }
            else if(i<word1.size())
            {
                ans.push_back(word1[i]);
            }
        }
    }
    else
    {
        for(int i=0;i<word2.size();i++)
        {
            if (i<word1.size()&& i<word2.size())
            {
                ans.push_back(word1[i]); 
                ans.push_back(word2[i]);
            }
            else if (i<word2.size())
            {
                ans.push_back(word2[i]);
            }
        }
    }
    return string(ans.begin(),ans.end());
    }
};