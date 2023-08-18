class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> edges(n,0);
        vector<vector<bool>> connected(n,vector<bool>(n,false));
        for(auto road:roads){
            int u = road[0];
            int v = road[1];
            edges[u]++;
            edges[v]++;
            connected[u][v] = true;
            connected[v][u] = true;
        }
        int maxRank = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int aRank = edges[i];
                int bRank = edges[j];
                int rank = aRank + bRank;
                if(connected[i][j]){
                    rank-=1;
                }
                maxRank = max(maxRank,rank);
            }
        }
        return maxRank;
    }
};