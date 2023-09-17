class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int n = word.length();
        int maxLen = 0;
        for(int i=1;i<n;i++){
            if(word[i-1] == 'a'){
                int unique = 1;
                int currLen = 1;
                while(i < n && word[i-1] <= word[i]){
                    if(word[i-1] < word[i]){
                        unique++;
                    }
                    i++;
                    currLen++;
                }
                if(unique == 5){
                    maxLen = max(maxLen,currLen);
                }
            }
        }
        return maxLen;
    }
};