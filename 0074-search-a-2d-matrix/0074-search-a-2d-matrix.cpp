class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            if(target <= matrix[i][n-1]){
                if(binary_search(matrix[i].begin(),matrix[i].end(),target)){
                    return true;
                }
                else{
                    break;
                }
            }
        }
        return false;
    }
};