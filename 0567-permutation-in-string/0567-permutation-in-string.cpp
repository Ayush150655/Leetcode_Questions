class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> m;
        int i=0;
        int j=0;
        for(auto x:s1){
            m[x]++;
        }
        int count = m.size();
        int k = s1.length();
        while(j < s2.size()){
            if(m.find(s2[j]) != m.end()){
                m[s2[j]]--;
                if(m[s2[j]] == 0){
                    count--;
                }
            }
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                if(count == 0){
                    return true;
                }
                if(m.find(s2[i]) != m.end()){
                    m[s2[i]]++;
                    if(m[s2[i]] == 1){
                        count++;
                    }
                }
                i++;
                j++;
            }
        }
        return false;
    }
};