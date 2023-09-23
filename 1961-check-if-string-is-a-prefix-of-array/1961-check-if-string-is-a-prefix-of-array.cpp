class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string res = "";
        for (auto w : words) {
            res += w;
            if (res == s) 
                return true;
        }
        return false;
    }
};