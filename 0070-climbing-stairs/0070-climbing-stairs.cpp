class Solution {
public:

//using memoization in DP
    // int helper(int n, vector<int> &dp){
    //     if(n==1 || n==2){
    //         return n;
    //     }
    //     if(dp[n] !=-1){
    //         return dp[n];
    //     }
    //     return dp[n]=helper(n-1, dp) + helper(n-2, dp);
    // }
    // int climbStairs(int n) {
    //     vector<int> dp(n+1, -1);
    //     return helper(n, dp);
    // }

//using tabulation

    int climbStairs(int n){
        if(n<=2) return n;

        // vector<int> dp(n+1);
        // dp[0] = 0;
        // dp[1] = 1;
        // dp[2] = 2; 
        int prev1 = 2, prev2=1;

        int result = prev1;

        for(int i=3; i<n+1; i++){
            // dp[i] = dp[i-1] + dp[i-2];
            result = prev1+prev2;
            prev2 = prev1;
            prev1 = result;

        }
        // return dp[n];
        return result;
    }


};