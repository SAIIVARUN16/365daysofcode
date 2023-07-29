class Solution {
public:
    long long f(int ind,vector<vector<int>>& questions,vector<long long>&dp){
        if(ind>=questions.size()) return 0;
        if(dp[ind]!=-1) return dp[ind];
        long long notpick=f(ind+1,questions,dp);
        long long pick=questions[ind][0]+f(ind+questions[ind][1]+1,questions,dp);
        return dp[ind]=max(notpick,pick);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        // vector<long long>dp(questions.size(),-1);
        // return f(0,questions,dp);
        vector<long long>dp(questions.size()+1,0);
        for(int ind=questions.size()-1;ind>=0;ind--){
            long long notpick=dp[ind+1];
            long long pick=questions[ind][0]+dp[ind+questions[ind][1]+1];
            dp[ind]=max(notpick,pick);
        }
        return dp[0];
    }
};