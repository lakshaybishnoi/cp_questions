class Solution {
private:
    void helper(int i,vector<int> &ds,int target,int n,vector<int>& candidates,vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(i == n){
            return;
        }

        if(candidates[i]<=target){
            ds.push_back(candidates[i]);
            helper(i,ds,target-candidates[i],n,candidates,ans);
            ds.pop_back();
        }
        helper(i+1,ds,target,n,candidates,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;
        vector<int> ds;
        helper(0,ds,target,n,candidates,ans);
        return ans;
    }
};