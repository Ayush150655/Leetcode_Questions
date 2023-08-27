class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int res = 0;
        int num = 0;
        char op = '+';
        for(auto ch:s){
            if(isdigit(ch)){
                num = (num*10) + (ch - '0');
            }
            else if(iswspace(ch)){
                continue;
            }
            else{
                if(op == '+'){
                    st.push(num);
                }
                else if(op == '-'){
                    st.push(-num);
                }
                else if(op == '*'){
                    int t = st.top();
                    st.pop();
                    st.push(t*num);
                }
                else if(op == '/'){
                    int t = st.top();
                    st.pop();
                    st.push(t/num);
                }
                op = ch;
                num = 0;
            }
        }
        if (op == '+') {
            st.push(num);
        } 
        else if (op == '-') {
            st.push(-num);
        } 
        else if (op == '*') {
            int t = st.top();
            st.pop();
            st.push(t * num);
        } 
        else if (op == '/') {
            int t = st.top();
            st.pop();
            st.push(t / num);
        }
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        return res;
    }
};