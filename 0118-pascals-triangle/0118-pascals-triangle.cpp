class Solution {
public:
    vector<int> row(int r){
        long long ans = 1;
        vector<int> res(r,1);
        for(int i=1;i<r;i++){
            ans = ans*(r-i);
            ans = ans/i;
            res[i] = ans;
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr(numRows);
        for(int j=0;j<numRows;j++){
            arr[j] = row(j+1);
        }
        return arr;
    }
};