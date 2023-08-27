class Solution {
public:
    int secondHighest(string s) {
        set<int> st;
        for(auto ch:s){
            if(isdigit(ch)){
                st.insert(ch - '0');
            }
        }
        if(st.size() < 2){
            return -1;
        }
        auto it = st.end();
        for(int i=0;i<2;i++)
	    {
		    it--;
	    }
        return *it;
    }
};