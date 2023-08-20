class Solution {
private:
    void solve(int ind , vector<int>& ans , vector<int>& candidates , vector<vector<int>>& result , int target , int n)
    {
        if(ind == n)
        {
            if(target == 0)
                result.push_back(ans);
            return;
        }
        //pick the element
        if(candidates[ind] <= target)
        {
            ans.push_back(candidates[ind]);
            solve(ind,ans,candidates,result,target-candidates[ind],n);
            ans.pop_back();
        }
        //Don't pick the element
        solve(ind+1,ans,candidates,result,target,n);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> result;
        vector<int> ans;
        int n = candidates.size();
        solve(0,ans,candidates,result,target,n);
        return result;
        
    }
};