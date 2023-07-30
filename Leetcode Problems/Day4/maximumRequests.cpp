class Solution {
public:
    int ans=INT_MIN;
    void f(int ind,vector<vector<int>>&v,vector<int>&temp,int l){
        if(ind==v.size()){
            for(int i:temp){
                if(i!=0) return;
            }
            ans=max(ans,l);
            return;
        }
        f(ind+1,v,temp,l);
        temp[v[ind][0]]--;
        temp[v[ind][1]]++;
        f(ind+1,v,temp,l+1);
        temp[v[ind][0]]++;
        temp[v[ind][1]]--;
        return;
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int>temp(n,0);
        f(0,requests,temp,0);
        return ans;
    }
};