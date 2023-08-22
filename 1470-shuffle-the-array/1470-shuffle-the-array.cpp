class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2*n,0);
        int i=0;
        int j=n;
        int k=0;
        while(i<n && j<2*n){
            result[k++] = nums[i];
            result[k++] = nums[j];
            i++;
            j++;
        }
        return result;
    }
};