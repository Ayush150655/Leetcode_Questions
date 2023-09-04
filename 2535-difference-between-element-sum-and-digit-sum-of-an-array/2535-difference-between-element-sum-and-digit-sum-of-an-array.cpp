class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n!=0){
            int r = n%10;
            sum += r;
            n = n/10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int sN = 0;
        int sD = 0;
        for(auto x:nums){
            sN += x;
            sD += digitSum(x);
        }
        return abs(sN-sD);
    }
};