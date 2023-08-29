class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int m=matrix.size();
        // int n=matrix[0].size();
        // for(int i=0;i<m;i++){
        //     if(target <= matrix[i][n-1]){
        //         if(binary_search(matrix[i].begin(),matrix[i].end(),target)){
        //             return true;
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
        // return false;
        
        int i=0;
        int m = matrix.size();
        int j = matrix[0].size()-1;
        while(i<m && j>=0){
            if(matrix[i][j] == target){
                return true;
            }
            else if(target < matrix[i][j]){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};