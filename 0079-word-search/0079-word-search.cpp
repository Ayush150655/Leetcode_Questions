class Solution {
public:
    bool check(int i, int j, vector<vector<char>>& board, string word, int curr){
        
        if(curr == word.length()){
            return true;
        }
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[curr]){
            return false;
        }
        board[i][j] = '0';
        
        bool up = check(i-1,j,board,word,curr+1);
        bool down = check(i+1,j,board,word,curr+1);
        bool right = check(i,j+1,board,word,curr+1);
        bool left = check(i,j-1,board,word,curr+1);
        
        bool status = up||down||right||left;
        
        board[i][j] = word[curr];
        
        return status;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        if(word.length() == 0){
            return false;
        }
        int m = board.size();
        int n = board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(word[0] == board[i][j] && check(i,j,board,word,0)){
                    return true;
                }
            }
        }
        return false;
    }
};