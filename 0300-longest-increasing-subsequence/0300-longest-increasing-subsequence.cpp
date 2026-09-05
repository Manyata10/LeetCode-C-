class Solution {
public:


    int solve(int n, vector<int> &nums, int curr, int prev){
        if(curr==n){
            return 0;
        }
        int take = 0;
        if(prev == -1 || nums[curr]> nums[prev]){
            take = 1 + solve(n, nums, curr+1, curr);
        }
        int notTake = solve(n, nums, curr+1, prev);
        return max(take, notTake);
    }

    int solveMem(int n, vector<int> &nums, int curr, int prev, vector<vector<int>> &dp){ //onluy passes indexes
        //base case
        if(curr==n){
            return 0;
        }
        if(dp[curr][prev+1]!=-1){
            return dp[curr][prev+1];
        }
        int take = 0;
        if(prev == -1 || nums[curr]> nums[prev]){
            take = 1 + solveMem(n, nums, curr+1, curr, dp);
        }
        int notTake = solveMem(n, nums, curr+1, prev, dp);
        return dp[curr][prev+1] = max(take, notTake);
    }

    int solveTab(int n, vector<int> &nums){
        // vector<vector<int>> dp(n+1, vector<int>(n+1,0));

        vector<int> currRow(n+1, 0);
        vector<int> nextRow (n+1,0);



        for(int curr=n-1; curr >=0; curr--){
            for(int prev = curr-1; prev>=-1; prev--){
                int take = 0;
                if(prev == -1 || nums[curr] > nums[prev]){
                    take = 1 + nextRow[curr+1];
                }
                int notTake = 0 + nextRow[prev+1];

                currRow[prev+1] = max(take, notTake);
            }
            nextRow = currRow;
         }
        return nextRow[0];
    }

    int solveOptimal(int n, vector<int> nums){
        if(n==0){
            return 0;
        }
        vector<int> ans;
        ans.push_back(nums[0]);

        for(int i=1;i<n;i++){
            if(nums[i]>ans.back()){
                ans.push_back(nums[i]);
            }
            else{
                int index = lower_bound(ans.begin(), ans.end(), nums[i])-ans.begin();
                ans[index] = nums[i];
            }
        }
        return ans.size();
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        // return solve(n,nums, 0, -1);
        // vector<vector<int>> dp(n, vector<int>(n+1, -1)); //curr : 0 -> n-1, prev : -1 -> n-1
        // solveMem(n, nums, 0, -1, dp);

        // return solveTab(n, nums);
        return solveOptimal(n, nums);
    }
};