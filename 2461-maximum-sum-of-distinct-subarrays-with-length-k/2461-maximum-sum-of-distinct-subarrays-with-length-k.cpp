class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        long long maxSum=0;
        long long sum=0;
        unordered_map<int,int> m;
        while(j < nums.size()){
            sum+=nums[j];
            m[nums[j]]++;
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                if(m.size() == k){
                    maxSum = max(maxSum,sum);
                }
                m[nums[i]]--;
                if(m[nums[i]] == 0){
                    m.erase(nums[i]);
                }  
                sum-=nums[i];
                i++;
                j++;
            }
        }
        return maxSum;
    }
};