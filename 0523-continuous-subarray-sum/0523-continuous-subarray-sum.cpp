class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int sum = 0;
        for(int i=0 ; i<nums.size() ; i++){
            sum += nums[i];
            if(sum%k == 0 && i!=0){
                return true;
            }
            if(m.find(sum%k) != m.end()){
                if(i - m[sum%k] >= 2){
                    return true;
                }
            }
            else{
                m[sum%k] = i;
            }
        }
        return false;
    }
};