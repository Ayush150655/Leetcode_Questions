class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int l = s.length();
        for(int i=l/2 ; i>=1 ; i--){
            if(l%i == 0){
                int r = l/i;
                string str = "";
                string subString = s.substr(0,i);
                for(int j=0 ; j<r ;j++){
                    str += subString;
                }
                if(s == str){
                    return true;
                }
            }
        }
        return false;
    }
};