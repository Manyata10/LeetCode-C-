class Solution {
public:
    unordered_map<int, int> mp;
    vector<vector<int>> dp;

    bool solve(int idx, int prevJump, vector<int> &stones){
        int n = stones.size();

        if(idx == n-1){
            return true;
        }

        if(dp[idx][prevJump] != -1){
            return dp[idx][prevJump];
        }

        for(int jump = prevJump - 1; jump <= prevJump+1; jump++){
            if(jump <= 0){
                continue;
            }
            int nextPos=stones[idx] + jump;
            if(mp.find(nextPos) != mp.end()){
                int nextIdx = mp[nextPos];
                if(solve(nextIdx, jump, stones)){
                    return dp[idx][prevJump] = true;
                }
            }
        }
        return dp[idx][prevJump] = false;
    }
    bool canCross(vector<int>& stones) {
        int n = stones.size();

        if(stones[1] != 1){
            return false;
        }
        for(int i=0; i<n; i++){
            mp[stones[i]] = i;
        }

        dp.assign(n, vector<int>(n+1, -1));

        return solve(1, 1, stones);

    } 
};