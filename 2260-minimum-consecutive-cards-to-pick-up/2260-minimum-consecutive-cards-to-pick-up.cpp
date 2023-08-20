class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> m;
        int j=0;
        int minLen = INT_MAX;
        while(j < cards.size()){
            if(m.find(cards[j]) != m.end()){
                int len = j-m[cards[j]]+1;
                minLen = min(minLen,len);
            }
            m[cards[j]] = j;
            j++;
        }
        if(minLen == INT_MAX){
            return -1;
        }
        return minLen;
    }
};