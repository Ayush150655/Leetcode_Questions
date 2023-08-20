class Solution {
public:
    int lengthOfLongestSubstring(string s) {
   vector<int> charIndex(256, -1);  // Initialize with -1 to indicate character not seen
    int i = 0;
    int j = 0;
    int maxLen = 0;

    while (j < s.length()) {
        if (charIndex[s[j]] != -1) {
            i = max(i, charIndex[s[j]] + 1);
        }
        charIndex[s[j]] = j;
        maxLen = max(maxLen, j - i + 1);
        j++;
    }

    return maxLen;
    }
};