class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(auto x:nums){
            m[x]++;
        }
        for(auto x:nums){
            if(m[x] == 1){
                if (!((m.find(x+1) != m.end()) || (m.find(x-1) != m.end()))){
                    ans.push_back(x);
                }
            }
        }
        return ans;
    }
};