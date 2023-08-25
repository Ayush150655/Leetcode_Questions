class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalSum = accumulate(nums.begin(),nums.end(),0);
        if(totalSum < x){
            return -1;
        }
        int target = totalSum - x;
        int maxLen = INT_MIN;
        int i=0;
        int j=0;
        int sum = 0;
        bool found = false;
        while(j < nums.size()){
            sum += nums[j];
            while(sum > target){
                sum -= nums[i];
                i++;
            }
            if(sum == target){
                maxLen = max(maxLen,j-i+1);
                found = true;
            }
            j++;
        }
        if(found){
            return nums.size()-maxLen;
        }
        return -1;
    }
};