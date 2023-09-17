class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int> m;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i]) != m.end()){
                ans = max((i - m[s[i]]),ans);
            }
            else{
                m[s[i]] = i;
            }
        }
        return ans-1;
    }
};