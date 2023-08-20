class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> w;
        string wrd = "";
        for(int i=0;i<s.length();i++){
            if(s[i] != ' '){
                wrd = wrd+s[i];
            }
            else{
                w.push_back(wrd);
                wrd = "";
            }
        }
        w.push_back(wrd);
        if(pattern.length() != w.size()){
            return false;
        }
        unordered_map<char, string> mp;
        unordered_map<string, char> m;

        for(int i=0; i<w.size(); i++){
            if(mp.find(pattern[i]) != mp.end() && mp[pattern[i]] != w[i]) 
                return false;

            else if(m.find(w[i]) != m.end() && m[w[i]] != pattern[i]) 
                return false;

            mp[pattern[i]] = w[i];
            m[w[i]] = pattern[i];
        }

        return true;
    }
};