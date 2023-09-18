class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
         priority_queue<pair<int,int>> max_heap;
        int r = mat.size();
        int c = mat[0].size();
        for(int i=0;i<r;i++){
            int one = 0;
            for(int j=0;j<c;j++){
                if(mat[i][j] == 1){
                    one++;
                }
                else{
                    break;
                }
            }
            max_heap.push({one,i});
            if(max_heap.size()>k){
                max_heap.pop();
            }
        }
         while(max_heap.size()){ 
            ans.push_back(max_heap.top().second);
            max_heap.pop();
        }
		
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
}; 