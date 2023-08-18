class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> maxH;
        int sum = 0;
        for(int i=0;i<piles.size();i++){
            maxH.push(piles[i]);
            sum+=piles[i];
        }
        for(int i=0;i<k;i++){
            int c = maxH.top();
            int r = maxH.top()/2;
            maxH.pop();
            sum = sum - r;
            maxH.push(c - r);
        }
        return sum;
    }
};