class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length() < t.length()){
            return "";
        }
        unordered_map<char,int> m;
        for(auto x:t){
            m[x]++;
        }
        int i=0;
        int j=0;
        int count = m.size();
        int minLen = INT_MAX;
        int start = 0;
        while(j < s.length()){
            if(m.find(s[j]) != m.end()){
                m[s[j]]--;
                if(m[s[j]] == 0){
                    count--;
                }
            }
             if (count == 0) {
                while (count == 0) {
                    if (minLen > j - i + 1) {
                        minLen = j - i + 1;
                        start = i;
                    }
                    if(m.find(s[i]) != m.end()){
                        m[s[i]]++;
                        if (m[s[i]] > 0)
                            count++;
                    }
                    i++;
                }
            }
            j++;
        }
        if(minLen != INT_MAX){
            return s.substr(start,minLen);
        }
        else{
            return "";
        }
    }
};