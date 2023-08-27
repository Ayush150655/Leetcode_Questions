class Solution {
public:    
    string decodeString(string s) {
        stack<int> std;
        stack<string> sts;
        int digit = 0;
        string str = "";
        for(auto ch:s){
            if(isdigit(ch)){
                digit = digit*10 + ch - '0';
            }
            else if(ch == '['){
                std.push(digit);
                sts.push(str);
                digit = 0;
                str = "";
            }
            else if(ch == ']'){
                int count = std.top();
                std.pop();
                string ss = str;
                for(int i=1; i < count ; i++){
                    ss += str;
                }
                str = sts.top()+ss;
                sts.pop();
            }
            else{
                str += ch;
            }
        }
        return str;
    }
};