class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int min_sum = 0;
        int ans = INT_MIN;
        for(int n: nums){
            sum += n;
            ans = max(ans, sum - min_sum);
            min_sum = min(min_sum, sum);
        }
        return ans;
    }
};