class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> m;
        for(auto c:s){
            m[c]++;
        }
        int a=0;
        for(auto c:t){
            if(m.find(c) != m.end()){
                m[c]--;
                if(m[c] == 0){
                    m.erase(c);
                }
                a++;
            }
            else{
                break;
            }
        }
        return t[a];
    }
};