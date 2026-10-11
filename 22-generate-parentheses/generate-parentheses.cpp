class Solution {
private:
    void fun(int open,int close,string s,int n,vector<string> &ans){
        if(s.size()==2*n && open==close){
            ans.push_back(s);
            return;
        }
        if(open<n){
            fun(open+1,close,s+'(',n,ans);
        }if(close<open){
            fun(open,close+1,s+')',n,ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        fun(0,0,"",n,ans);
        return ans;
    }
};