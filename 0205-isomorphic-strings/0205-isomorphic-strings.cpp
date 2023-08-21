class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m;
        unordered_map<char,char> mp;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i]) != m.end() && m[s[i]] != t[i]){
                return false;
            }
            if(mp.find(t[i]) != m.end() && mp[t[i]] != s[i]){
                return false;
            }
            m[s[i]] = t[i];
            mp[t[i]] = s[i];
        }
        return true;
    }
};