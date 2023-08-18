class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = 0;
        int n = nums.size();
        int minDiff = INT_MAX;
        while(j < n){
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                int diff = nums[j] - nums[i];
                j++;
                i++;
                minDiff = min(minDiff,diff);
            }
        }
        return minDiff;
    }
};