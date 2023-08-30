class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        
        for(int i=n-2;i>=0;i--){
            if(nums[i] <= nums[i+1]){
                continue;
            }
            long long ele = ceil((nums[i] + nums[i+1] - 1) / (nums[i+1]));
            ans += ele - 1;
            nums[i] /= ele;
        }
        return ans;
    }
};