class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(str1[i] == str2[j]){
                j++;
            }
            else{
                int a = str1[i] - '0';
                int b = str2[j] - '0';
                if(a+1 == b){
                    j++;
                }
                else if(str1[i] == 'z' && str2[j] == 'a'){
                    j++;
                }
            }
            i++;
        }
        return j==m;
    }
};