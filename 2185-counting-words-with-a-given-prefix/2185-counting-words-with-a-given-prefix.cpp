class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ctr = 0;
        for(auto s:words){
            if(s.starts_with(pref)){
                ctr++;
            }
        }
        return ctr;
    }
};