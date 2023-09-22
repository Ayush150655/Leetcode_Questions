class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ctr = 0;
        for(auto str:words){
            if(s.starts_with(str)){
                ctr++;
            }
        }
        return ctr;
    }
};