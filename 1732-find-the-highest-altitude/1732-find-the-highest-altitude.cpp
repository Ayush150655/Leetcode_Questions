class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int leftSum = 0;
        int maxAltitude = 0;
        for(int i=1;i<n;i++){
            leftSum += gain[i-1];
            maxAltitude = max(leftSum,maxAltitude);
        }
        leftSum += gain[n-1];
        maxAltitude = max(leftSum,maxAltitude);
        return maxAltitude;
    }
};