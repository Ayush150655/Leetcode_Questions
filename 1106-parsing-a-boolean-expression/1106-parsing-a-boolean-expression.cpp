class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char> st;
        int t = 0;
        int f = 0;
        for(int i=0;i<expression.length();i++){
            if(expression[i] == ')'){
                while(st.top() != '('){
                    if(st.top() == 't'){
                        t++;
                    }else{
                        f++;
                    }
                    st.pop();
                }
                st.pop();
                char op = st.top();
                st.pop();
                if(op == '&'){
                    if(f >= 1){
                        st.push('f');
                    }
                    else{
                        st.push('t');
                    }
                }
                else if(op == '|'){
                    if(t >= 1){
                        st.push('t');
                    }
                    else{
                        st.push('f');
                    }
                }
                else if(op == '!'){
                    if(t == 1){
                        st.push('f');
                    }
                    else{
                        st.push('t');
                    }
                }
                t=0;
                f=0;
            }
            else if(expression[i] == ','){
                continue;
            }
            else{
                st.push(expression[i]);
            }
        }
        if(st.top() == 'f'){
            return false;
        }
        return true;
    }
};