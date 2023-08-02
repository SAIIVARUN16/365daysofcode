class Solution {
public:
    void helper(int start,int n,int k,vector<vector<int>>&ans,vector<int>&temp){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<=n;i++){
            temp.push_back(i); 
            helper(i+1,n,k,ans,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int>temp;
        helper(1,n,k,ans,temp);
        return ans;
    }
};