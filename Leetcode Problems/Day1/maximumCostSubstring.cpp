class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        vector<int> v(26,0);
        for(int i = 0; i < 26; i++){
            v[i] = i+1;
        }
        for(int i = 0; i < chars.length(); i++){
            v[chars[i]-'a'] = vals[i];
        }
        int ans = 0, sum = 0;
        for(int i = 0; i < s.length(); i++){
            sum += v[s[i]-'a'];
            ans = max(ans,sum);
            if(sum<0)sum = 0;
        }
        return ans;
    }
};