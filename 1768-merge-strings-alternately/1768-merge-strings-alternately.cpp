class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int max_len = max(word1.length(),word2.length());
        for(int i = 0;i<max_len ; i++)
        {
            if(i < word1.length())
                ans +=word1[i];
            if(i<word2.length())
                ans+=word2[i];
        }
        return ans;
    }
};