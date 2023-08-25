class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int count = 0;
        int maxLen = INT_MIN;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            count += (nums[i] == 1) ? 1 : -1;
            if(count == 0){
                maxLen = max(maxLen,i+1);
            }
            if(m.find(count) != m.end()){
                maxLen = max(maxLen,i-m[count]);
            }
            else{
                m[count] = i;
            }
        }
        return (maxLen == INT_MIN) ? 0 : maxLen;
    }
};