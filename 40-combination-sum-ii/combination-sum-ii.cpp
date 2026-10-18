class Solution {
private:
    void helper(int ind,vector<int> &ds,int target,int n,vector<int>& candidates,vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(ds);
            return;
        }
        if(ind == n)return;
        for(int i = ind;i<n;i++){
            if(i>ind && candidates[i]==candidates[i-1])continue;
            if(candidates[i]>target)break;
        if(candidates[ind]<=target){
            ds.push_back(candidates[i]);
            helper(i+1,ds,target-candidates[i],n,candidates,ans);
            ds.pop_back();
        }
        
        }  
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> ds;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        helper(0,ds,target,n,candidates,ans);
        return ans;
        
    }
};