class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> m;
        int i=0;
        int j=0;
        for(auto x:p){
            m[x]++;
        }
        int k = p.length();
        int count = m.size();
        vector<int> ans;
        while(j<s.length()){
            if(m.find(s[j]) != m.end()){
                m[s[j]]--;
                if(m[s[j]] == 0){
                    count--;
                }
            }
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                if(count == 0){
                    ans.push_back(i);
                }
                if(m.find(s[i]) != m.end()){
                    m[s[i]]++;
                    if(m[s[i]] == 1){
                        count++;
                    }
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};