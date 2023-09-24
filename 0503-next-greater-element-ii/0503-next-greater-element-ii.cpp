class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int l = nums.size();
        vector<int> ans(l);
        
        for(int i=2*l-1 ; i>=0 ; i--)
        {
            while(!st.empty() && nums[i%l] >= st.top())
            {
               // ans[st.top()] = nums[i%l];
                st.pop();
            }
            if(i<l)
            {
                if(!st.empty())
                    ans[i]=st.top();
                else
                    ans[i]= -1;
            }
            st.push(nums[i%l]);
        }
        return ans;
    }
};