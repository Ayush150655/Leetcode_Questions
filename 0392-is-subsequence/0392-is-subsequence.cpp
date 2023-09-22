class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int ls = s.length();
        int ts = t.length();
        int i=0,j=0;
        while(i<ls && j<ts)
        {
            if(s[i] == t[j])
            {
                i++;
            }
            j++;
        }
        if(i == ls)
            return true;
        else
            return false;
        
    }
};