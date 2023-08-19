class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        typedef pair<int,int> p;
        priority_queue<p,vector<p>,greater<p>> minH;
        for(auto x:m){
            minH.push(make_pair(x.second,x.first));
            if(minH.size() > k){
                minH.pop();
            }
        }
        vector<int> ans;
        while(minH.size()!=0){
            ans.push_back(minH.top().second);
            minH.pop();
        }
        return ans;
    }
};