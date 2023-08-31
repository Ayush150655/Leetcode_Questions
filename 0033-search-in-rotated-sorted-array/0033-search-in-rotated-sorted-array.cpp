class Solution {
public:
    int binSearch(int st, int en, vector<int>& nums, int target){
        while(st <= en){
            int mid = (st+en)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                st = mid+1;
            }
            else{
                en = mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while(start <= end){
            int mid = (start+end)/2;
            if(nums[nums.size()-1] < nums[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        int answer = binSearch(0,start-1,nums,target);
        if(answer != -1){
            return answer;
        }
        return binSearch(start,nums.size()-1,nums,target);
    }
};