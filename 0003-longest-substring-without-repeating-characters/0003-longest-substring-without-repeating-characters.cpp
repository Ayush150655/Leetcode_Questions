class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int i=0;
        int j=0;
        int maxLen=0;
        while(j < s.length()){
            if(m.find(s[j]) == m.end()){
                m[s[j]]++;
                j++;
            }
            else{
                maxLen = max(maxLen,j-i);
                m.erase(s[i]);
                i++;
            }
        }
        maxLen = max(maxLen,j-i);
        return maxLen;
    }
};