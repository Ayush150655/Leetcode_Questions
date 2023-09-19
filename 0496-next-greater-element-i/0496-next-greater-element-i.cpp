class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> st;
        int l1 = nums1.size();
        int l2 = nums2.size();
        map<int,int> m;
        for(int i=0 ; i<l2 ; i++)
        {
            while(!st.empty() && nums2[i] >= st.top())
            {
                m.insert({st.top(),nums2[i]});
                st.pop();
            }
            st.push(nums2[i]);
        }
        vector<int> ans(l1);  
        for(int i=0 ; i<l1 ; i++)
        {
            auto it = m.find(nums1[i]);
            if(it == m.end())
                ans[i] = -1;
            else
                ans[i] = it->second;
        }
        return ans;
    }
};